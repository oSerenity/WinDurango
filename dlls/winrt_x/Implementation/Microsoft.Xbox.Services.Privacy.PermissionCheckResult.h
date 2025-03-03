#pragma once
#include "Microsoft.Xbox.Services.Privacy.PermissionCheckResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    struct PermissionCheckResult : PermissionCheckResultT<PermissionCheckResult>
    {
        PermissionCheckResult() = default;

        bool IsAllowed();
        hstring PermissionRequested();
        Windows::Foundation::Collections::IVectorView<PermissionDenyReason> DenyReasons();

    private:
		bool m_isAllowed{ false };
        hstring m_permissionRequested{ L"" };
		Windows::Foundation::Collections::IVectorView<PermissionDenyReason> m_denyReasons{ single_threaded_vector<PermissionDenyReason>().GetView() };
    };
}