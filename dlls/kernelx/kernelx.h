/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#pragma once
// THE VALUES FOR NAMES ARE GUESSED, BUT NAMES ARE CORRECT (THAT HOW ENUM SHOULD LOOK LIKE)
enum CONSOLE_TYPE {
	CONSOLE_TYPE_XBOX_ONE = 1,
	CONSOLE_TYPE_XBOX_ONE_S = 2,
	CONSOLE_TYPE_XBOX_ONE_X = 3,
	CONSOLE_TYPE_XBOX_ONE_X_DEVKIT = 4
};
static CRITICAL_SECTION XMemSetAllocationHooksLock_X;
extern HANDLE XmpHeaps[32];
extern int XmpHeapPageTypes[16];
extern const int XmpHeapAllocationTypes[16];
#define JOB_INFO_SIZE 0x38 // JobInformation size in bytes
#ifndef _XMP_ALLOCATION_HOOK_LOCK_DEFINED_
#define _XMP_ALLOCATION_HOOK_LOCK_DEFINED_
// Define the structure for the critical section lock
typedef struct _XmpAllocationHookLock {
	PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
	LONG LockCount;
	LONG RecursionCount;
	HANDLE OwningThread;
	HANDLE LockSemaphore;
	ULONG_PTR SpinCount;
} XmpAllocationHookLock_t;

// Declare global variables (extern means they are defined elsewhere)
extern XmpAllocationHookLock_t XmpAllocationHookLock;
extern RTL_CRITICAL_SECTION_DEBUG XmpAllocationHookLock_DEBUG;
#endif // _XMP_ALLOCATION_HOOK_LOCK_DEFINED_
typedef struct _SYSTEMOSVERSIONINFO {
	UINT8 MajorVersion;
	UINT8 MinorVersion;
	UINT16 BuildNumber;
	UINT16 Revision;
} SYSTEMOSVERSIONINFO, * LPSYSTEMOSVERSIONINFO;

typedef struct _PROCESSOR_SCHEDULING_STATISTICS {
	UINT64 RunningTime;
	UINT64 IdleTime;
	UINT64 GlobalTime;
} PROCESSOR_SCHEDULING_STATISTICS, * PPROCESSOR_SCHEDULING_STATISTICS;

typedef struct _TOOLINGMEMORYSTATUS {
	DWORD     dwLength;
	DWORD     dwReserved;
	DWORDLONG ullTotalMem;
	DWORDLONG ullAvailMem;
	DWORDLONG ulPeakUsage;
	DWORDLONG ullPageTableUsage;
} TOOLINGMEMORYSTATUS, * PTOOLINGMEMORYSTATUS, * LPTOOLINGMEMORYSTATUS;

typedef struct _TITLEMEMORYSTATUS {
	DWORD dwLength;
	DWORD dwReserved;
	DWORDLONG ullTotalMem;
	DWORDLONG ullAvailMem;
	DWORDLONG ullLegacyUsed;
	DWORDLONG ullLegacyPeak;
	DWORDLONG ullLegacyAvail;
	DWORDLONG ullTitleUsed;
	DWORDLONG ullTitleAvail;
} TITLEMEMORYSTATUS, * PTITLEMEMORYSTATUS, * LPTITLEMEMORYSTATUS;
