// MMDevAPI.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MMDevAPI.h"
#include <shobjidl.h> 

const IID IID_IActivateAudio = { 0xe2f7a62a, 0x862b, 0x40ae, { 0xbb, 0xc2, 0x5c, 0x0c, 0xa9, 0xa5, 0xb7, 0xe1 } };
const IID IID_IActivateAudioAsyncResult = { 0x72a22d78, 0xcde4, 0x431d, { 0xb8, 0xcc, 0x84, 0x3a, 0x71, 0x19, 0x9b, 0x6d } };


// This is an example of an exported variable
MMDEVAPI_API int nMMDevAPI=0;

// This is an example of an exported function.
MMDEVAPI_API int fnMMDevAPI(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CMMDevAPI::CMMDevAPI()
{
    return;
}
HRESULT __stdcall ActivateAudioInterfaceAsync(
    LPCWSTR deviceInterfacePath,
    const IID* const riid,
    PROPVARIANT* activationParams,
    IActivateAudioInterfaceCompletionHandler* completionHandler,
    IActivateAudioInterfaceAsyncOperation** activationOperation)
{
    IActivateAudioInterfaceAsyncOperation** v5; // rsi
    int ApartmentType; // ebx
    DWORD v11; // edi
    int v13; // [rsp+30h] [rbp-38h] BYREF
    LPVOID ppv; // [rsp+38h] [rbp-30h] BYREF

    v5 = activationOperation;
    *activationOperation = 0i64;
    ppv = 0i64;
    ApartmentType = CoGetApartmentType((APTTYPE*)&activationOperation, (APTTYPEQUALIFIER*)&v13);
    if (ApartmentType >= 0)
    {
        v11 = !(_DWORD)activationOperation || (_DWORD)activationOperation == 3 ? GetCurrentThreadId() : 0;
        ApartmentType = CoCreateInstance(IID_IActivateAudio, 0, 1, IID_IActivateAudioAsyncResult,
            &ppv);
        if (ApartmentType >= 0)
        {
            ApartmentType = (*(__int64(__fastcall**)(LPVOID, LPCWSTR, const IID* const, PROPVARIANT*, IActivateAudioInterfaceCompletionHandler*, DWORD))(*(_QWORD*)ppv + 24i64))(
                ppv,
                deviceInterfacePath,
                riid,
                activationParams,
                completionHandler,
                v11);
            if (ApartmentType >= 0)
            {
                ApartmentType = (**(__int64(__fastcall***)(LPVOID, GUID*, IActivateAudioInterfaceAsyncOperation**))ppv)(
                    ppv,
                    &GUID_72a22d78_cde4_431d_b8cc_843a71199b6d,
                    v5);
                if (ApartmentType >= 0)
                    ApartmentType = 0;
            }
        }
    }
    if (ppv)
        (*(void(__fastcall**)(LPVOID))(*(_QWORD*)ppv + 16i64))(ppv);
    return ApartmentType;
}
//ActivateAudioInterfaceAsync = ActivateAudioInterfaceAsync_X @1
//DllCanUnloadNow = DllCanUnloadNow_X @2
//DllGetClassObject = DllGetClassObject_X @3
//SetWasapiThreadAffinityMask = SetWasapiThreadAffinityMask_X @4
//RefreshWasapiDeviceList = RefreshWasapiDeviceList_X @5

