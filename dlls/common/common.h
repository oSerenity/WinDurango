#include <array>
#include <basetyps.h>
#include <cstdio>
#include <emmintrin.h>
#include <exception>
#include <filesystem>
#include <format>
#include <hstring.h>
#include <intsafe.h>
#include <inttypes.h>
#include <map>
#include <mutex>
#include <new>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <strsafe.h>
#include <vector>
#include <wrl.h>

#include "logger.h"
#include "toml.hpp"

#define RETURN_HR(hr) return hr
#define RETURN_LAST_ERROR_IF(cond) if (cond) return HRESULT_FROM_WIN32(GetLastError())

#define FAILED(hr) (((HRESULT)(hr)) < 0)
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define RETURN_IF_FAILED(hr) if (FAILED(hr)) return hr
#define THROW_IF_FAILED(hr) if (FAILED(hr)) throw hr

#define DurangoAPI      __stdcall
#define RtlSetLastWin32ErrorAndNtStatusFromNtStatus(Status) \
    SetLastError(RtlNtStatusToDosError(Status))
#define RtlGetLastWin32ErrorAndNtStatusFromNtStatus(Status) \
    (SetLastError(RtlNtStatusToDosError(Status)), GetLastError())