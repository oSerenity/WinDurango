/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT
(Same license terms as Logger.h — WinDurango common logger.)
================================================================================
*/

#include "LoggerCrash.h"

#include <Windows.h>
#include <DbgHelp.h>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>

#ifdef _MSC_VER
#pragma comment(lib, "dbghelp.lib")
#endif

namespace {

constexpr wchar_t kMappingName[] = L"Local\\WinDurangoLoggerCrashState_v1";

struct SharedCrashState {
    char checkpoint[512];
    char moduleHint[64];
};

HANDLE g_mapping = nullptr;
SharedCrashState* g_shared = nullptr;

SharedCrashState* MapSharedState() {
    if (g_shared)
        return g_shared;

    HANDLE h = CreateFileMappingW(
        INVALID_HANDLE_VALUE,
        nullptr,
        PAGE_READWRITE,
        0,
        sizeof(SharedCrashState),
        kMappingName);
    if (!h)
        return nullptr;

    void* p = MapViewOfFile(h, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(SharedCrashState));
    if (!p) {
        CloseHandle(h);
        return nullptr;
    }

    auto* s = static_cast<SharedCrashState*>(p);
    if (GetLastError() != ERROR_ALREADY_EXISTS) {
        memset(s, 0, sizeof(*s));
    }

    g_mapping = h;
    g_shared = s;
    return g_shared;
}

void WriteCrashFile(const char* text) {
    if (!text)
        return;
    FILE* f = nullptr;
    if (fopen_s(&f, "windurango_crash.log", "a") == 0 && f) {
        fputs(text, f);
        fputc('\n', f);
        fflush(f);
        fclose(f);
    }
    OutputDebugStringA(text);
    OutputDebugStringA("\n");
}

const char* ExceptionCodeName(DWORD code) {
    switch (code) {
    case EXCEPTION_ACCESS_VIOLATION: return "EXCEPTION_ACCESS_VIOLATION";
    case EXCEPTION_ARRAY_BOUNDS_EXCEEDED: return "EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
    case EXCEPTION_BREAKPOINT: return "EXCEPTION_BREAKPOINT";
    case EXCEPTION_DATATYPE_MISALIGNMENT: return "EXCEPTION_DATATYPE_MISALIGNMENT";
    case EXCEPTION_FLT_DENORMAL_OPERAND: return "EXCEPTION_FLT_DENORMAL_OPERAND";
    case EXCEPTION_FLT_DIVIDE_BY_ZERO: return "EXCEPTION_FLT_DIVIDE_BY_ZERO";
    case EXCEPTION_FLT_INEXACT_RESULT: return "EXCEPTION_FLT_INEXACT_RESULT";
    case EXCEPTION_FLT_INVALID_OPERATION: return "EXCEPTION_FLT_INVALID_OPERATION";
    case EXCEPTION_FLT_OVERFLOW: return "EXCEPTION_FLT_OVERFLOW";
    case EXCEPTION_FLT_STACK_CHECK: return "EXCEPTION_FLT_STACK_CHECK";
    case EXCEPTION_FLT_UNDERFLOW: return "EXCEPTION_FLT_UNDERFLOW";
    case EXCEPTION_ILLEGAL_INSTRUCTION: return "EXCEPTION_ILLEGAL_INSTRUCTION";
    case EXCEPTION_IN_PAGE_ERROR: return "EXCEPTION_IN_PAGE_ERROR";
    case EXCEPTION_INT_DIVIDE_BY_ZERO: return "EXCEPTION_INT_DIVIDE_BY_ZERO";
    case EXCEPTION_INT_OVERFLOW: return "EXCEPTION_INT_OVERFLOW";
    case EXCEPTION_INVALID_DISPOSITION: return "EXCEPTION_INVALID_DISPOSITION";
    case EXCEPTION_NONCONTINUABLE_EXCEPTION: return "EXCEPTION_NONCONTINUABLE_EXCEPTION";
    case EXCEPTION_PRIV_INSTRUCTION: return "EXCEPTION_PRIV_INSTRUCTION";
    case EXCEPTION_SINGLE_STEP: return "EXCEPTION_SINGLE_STEP";
    case EXCEPTION_STACK_OVERFLOW: return "EXCEPTION_STACK_OVERFLOW";
    default: return nullptr;
    }
}

void AppendModuleOffset(char* buf, size_t cap, DWORD_PTR address) {
    HMODULE mod = nullptr;
    if (!GetModuleHandleExW(
            GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            reinterpret_cast<LPCWSTR>(address),
            &mod)
        || !mod) {
        _snprintf_s(buf, cap, _TRUNCATE, "0x%p (unknown module)", reinterpret_cast<void*>(address));
        return;
    }
    wchar_t pathW[MAX_PATH]{};
    GetModuleFileNameW(mod, pathW, MAX_PATH);
    char pathA[MAX_PATH * 2]{};
    WideCharToMultiByte(CP_UTF8, 0, pathW, -1, pathA, static_cast<int>(sizeof pathA), nullptr, nullptr);
    DWORD_PTR base = reinterpret_cast<DWORD_PTR>(mod);
    DWORD_PTR off = address >= base ? address - base : 0;
    _snprintf_s(buf, cap, _TRUNCATE, "%s+0x%llX", pathA, static_cast<unsigned long long>(off));
}

LONG WINAPI LoggerUnhandledExceptionFilter(_EXCEPTION_POINTERS* ep) {
    if (!ep || !ep->ExceptionRecord)
        return EXCEPTION_CONTINUE_SEARCH;

    char block[16 * 1024];
    size_t pos = 0;
    auto append = [&](const char* s) {
        if (!s)
            return;
        size_t n = strlen(s);
        if (pos + n >= sizeof(block) - 4)
            return;
        memcpy(block + pos, s, n);
        pos += n;
    };

    append("======== WinDurango unhandled exception ========\n");

    if (SharedCrashState* sh = g_shared ? g_shared : MapSharedState()) {
        if (sh->checkpoint[0]) {
            append("Last checkpoint: ");
            append(sh->checkpoint);
            append("\n");
        }
        if (sh->moduleHint[0]) {
            append("Module hint: ");
            append(sh->moduleHint);
            append("\n");
        }
    }

    const EXCEPTION_RECORD* er = ep->ExceptionRecord;
    char line[512];

    const char* name = ExceptionCodeName(static_cast<DWORD>(er->ExceptionCode));
    if (name) {
        _snprintf_s(line, _TRUNCATE, "Code: 0x%08lX (%s)\n", er->ExceptionCode, name);
    } else {
        _snprintf_s(line, _TRUNCATE, "Code: 0x%08lX\n", er->ExceptionCode);
    }
    append(line);

    _snprintf_s(line, _TRUNCATE, "Address: %p  Flags: 0x%lx  Parameters: %lu\n",
        er->ExceptionAddress,
        er->ExceptionFlags,
        er->NumberParameters);
    append(line);

    if (er->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && er->NumberParameters >= 2) {
        const char* op = er->ExceptionInformation[0] ? "write" : "read";
        _snprintf_s(line, _TRUNCATE, "Access violation (%s) at %p\n",
            op, reinterpret_cast<void*>(er->ExceptionInformation[1]));
        append(line);
    }

    DWORD_PTR faultPc = reinterpret_cast<DWORD_PTR>(er->ExceptionAddress);
#if defined(_M_X64)
    if (ep->ContextRecord) {
        faultPc = static_cast<DWORD_PTR>(ep->ContextRecord->Rip);
    }
#elif defined(_M_IX86)
    if (ep->ContextRecord) {
        faultPc = static_cast<DWORD_PTR>(ep->ContextRecord->Eip);
    }
#endif

    char modline[768];
    AppendModuleOffset(modline, sizeof modline, faultPc);
    _snprintf_s(line, _TRUNCATE, "Fault PC (context): 0x%llX — %s\n",
        static_cast<unsigned long long>(faultPc), modline);
    append(line);

    SymSetOptions(SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS | SYMOPT_LOAD_LINES | SYMOPT_FAIL_CRITICAL_ERRORS);
    SymInitialize(GetCurrentProcess(), nullptr, TRUE);

#if defined(_M_X64) || defined(_M_IX86)
    if (!ep->ContextRecord) {
        append("Call stack: missing CONTEXT on exception record.\n");
    } else {
    CONTEXT ctx = *ep->ContextRecord;
    STACKFRAME64 sf{};
#if defined(_M_X64)
    sf.AddrPC.Offset = ctx.Rip;
    sf.AddrPC.Mode = AddrModeFlat;
    sf.AddrFrame.Offset = ctx.Rbp;
    sf.AddrFrame.Mode = AddrModeFlat;
    sf.AddrStack.Offset = ctx.Rsp;
    sf.AddrStack.Mode = AddrModeFlat;
    const DWORD machine = IMAGE_FILE_MACHINE_AMD64;
#else
    sf.AddrPC.Offset = ctx.Eip;
    sf.AddrPC.Mode = AddrModeFlat;
    sf.AddrFrame.Offset = ctx.Ebp;
    sf.AddrFrame.Mode = AddrModeFlat;
    sf.AddrStack.Offset = ctx.Esp;
    sf.AddrStack.Mode = AddrModeFlat;
    const DWORD machine = IMAGE_FILE_MACHINE_I386;
#endif

    append("Call stack (from exception context):\n");

    HANDLE hProc = GetCurrentProcess();
    HANDLE hThr = GetCurrentThread();
    for (int depth = 0; depth < 64; ++depth) {
        if (!StackWalk64(machine, hProc, hThr, &sf, &ctx, nullptr, SymFunctionTableAccess64, SymGetModuleBase64, nullptr))
            break;
        if (sf.AddrPC.Offset == 0)
            break;

        AppendModuleOffset(modline, sizeof modline, sf.AddrPC.Offset);

        char symbuf[sizeof(SYMBOL_INFO) + MAX_SYM_NAME * sizeof(TCHAR)]{};
        auto* sym = reinterpret_cast<SYMBOL_INFO*>(symbuf);
        sym->SizeOfStruct = sizeof(SYMBOL_INFO);
        sym->MaxNameLen = MAX_SYM_NAME;
        DWORD64 disp = 0;
        if (SymFromAddr(hProc, sf.AddrPC.Offset, &disp, sym)) {
            _snprintf_s(line, _TRUNCATE, "  #%d  0x%llX  %s+0x%llX  (%s)\n", depth,
                static_cast<unsigned long long>(sf.AddrPC.Offset),
                sym->Name, static_cast<unsigned long long>(disp), modline);
        } else {
            _snprintf_s(line, _TRUNCATE, "  #%d  0x%llX  %s\n", depth,
                static_cast<unsigned long long>(sf.AddrPC.Offset), modline);
        }
        append(line);
    }
    }
#else
    append("Call stack: StackWalk64 skipped (unsupported CPU architecture).\n");
#endif

    append("================================================\n");
    block[pos] = '\0';

    WriteCrashFile(block);

    return EXCEPTION_CONTINUE_SEARCH;
}

void __cdecl LoggerTerminateHandler() {
    char detail[768];
    const char* kind = "std::terminate (no active exception)";
    if (std::current_exception()) {
        try {
            std::rethrow_exception(std::current_exception());
        } catch (const std::exception& e) {
            _snprintf_s(detail, _TRUNCATE, "std::terminate: std::exception: %s", e.what());
            kind = detail;
        } catch (...) {
            kind = "std::terminate: unknown exception object";
        }
    }

    if (SharedCrashState* sh = g_shared ? g_shared : MapSharedState()) {
        _snprintf_s(sh->checkpoint, _TRUNCATE, "[terminate] tid=%lu %s",
            GetCurrentThreadId(), kind);
    }

    WriteCrashFile(kind);
    abort();
}

} // namespace

namespace LoggerCrash {

void Install() {
    MapSharedState();
    SetUnhandledExceptionFilter(LoggerUnhandledExceptionFilter);
    std::set_terminate(LoggerTerminateHandler);
}

void Checkpoint(const char* text) {
    SharedCrashState* sh = MapSharedState();
    if (!sh)
        return;
    const DWORD tid = GetCurrentThreadId();
    if (text && text[0]) {
        _snprintf_s(sh->checkpoint, _TRUNCATE, "tid=%lu %s", tid, text);
    } else {
        _snprintf_s(sh->checkpoint, _TRUNCATE, "tid=%lu (empty checkpoint)", tid);
    }
}

void SetModuleHint(const char* dllName) {
    SharedCrashState* sh = MapSharedState();
    if (!sh || !dllName)
        return;
    strncpy_s(sh->moduleHint, _countof(sh->moduleHint), dllName, _TRUNCATE);
}

} // namespace LoggerCrash
