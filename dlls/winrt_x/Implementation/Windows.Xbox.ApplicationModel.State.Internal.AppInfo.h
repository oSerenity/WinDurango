#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct AppInfo
    {
        AppInfo() = default;

        static IAppInfo FindByAumid(hstring const& aumid);
        static Foundation::Collections::IVectorView<IAppInfo> FindByTitleId(uint32_t titleId);

    private:
        static inline IAppInfo m_appInfo{};
        static inline Foundation::Collections::IVectorView<IAppInfo> m_appInfos = single_threaded_vector<IAppInfo>().GetView();
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct AppInfo : AppInfoT<AppInfo, implementation::AppInfo>
    {
    };
}