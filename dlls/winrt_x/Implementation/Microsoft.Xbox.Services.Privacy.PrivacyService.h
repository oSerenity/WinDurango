#pragma once
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.g.h"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct PrivacyService : PrivacyServiceT<PrivacyService>
    {
        PrivacyService() = default;

        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetAvoidListAsync();
        Windows::Foundation::IAsyncOperation<PermissionCheckResult> CheckPermissionWithTargetUserAsync(hstring permissionId, hstring targetXboxUserId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplePermissionsCheckResult>> CheckMultiplePermissionsWithMultipleTargetUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> permissionIds, Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> GetMuteListAsync();

    private:
		Windows::Foundation::Collections::IVectorView<hstring> m_avoidList{ single_threaded_vector<hstring>().GetView() };
		PermissionCheckResult m_permissionCheckResult{ nullptr };
		Windows::Foundation::Collections::IVectorView<MultiplePermissionsCheckResult> m_multiplePermissionsCheckResult{ single_threaded_vector<MultiplePermissionsCheckResult>().GetView() };
		Windows::Foundation::Collections::IVectorView<hstring> m_muteList{ single_threaded_vector<hstring>().GetView() };
    };
}