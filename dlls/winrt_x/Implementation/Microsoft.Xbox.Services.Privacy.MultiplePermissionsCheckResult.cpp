#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    hstring MultiplePermissionsCheckResult::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    Windows::Foundation::Collections::IVectorView<PermissionCheckResult> MultiplePermissionsCheckResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_items;
    }
}