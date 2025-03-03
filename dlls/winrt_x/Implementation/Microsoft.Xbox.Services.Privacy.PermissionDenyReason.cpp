#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionDenyReason.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionDenyReason.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    hstring PermissionDenyReason::Reason()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_reason;
    }

    hstring PermissionDenyReason::RestrictedSetting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_restrictedSetting;
    }
}