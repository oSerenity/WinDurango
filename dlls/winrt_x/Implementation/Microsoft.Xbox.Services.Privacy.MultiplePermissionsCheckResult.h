#pragma once
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct MultiplePermissionsCheckResult : MultiplePermissionsCheckResultT<MultiplePermissionsCheckResult>
    {
        MultiplePermissionsCheckResult() = default;

        hstring XboxUserId();
        Windows::Foundation::Collections::IVectorView<PermissionCheckResult> Items();

    private:
        hstring m_xboxUserId{ L"" };
        Windows::Foundation::Collections::IVectorView<PermissionCheckResult> m_items{ single_threaded_vector<PermissionCheckResult>().GetView() };
    };
}