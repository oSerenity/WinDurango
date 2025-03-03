#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.h"
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> PrivacyService::GetAvoidListAsync()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_avoidList;
    }

	Windows::Foundation::IAsyncOperation<PermissionCheckResult> PrivacyService::CheckPermissionWithTargetUserAsync(hstring permissionId, hstring targetXboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_permissionCheckResult;
    }

	Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplePermissionsCheckResult>> PrivacyService::CheckMultiplePermissionsWithMultipleTargetUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> permissionIds, Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_multiplePermissionsCheckResult;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> PrivacyService::GetMuteListAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_muteList;
    }
}