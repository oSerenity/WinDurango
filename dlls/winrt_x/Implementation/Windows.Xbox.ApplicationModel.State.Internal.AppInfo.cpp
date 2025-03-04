#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.AppInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    IAppInfo AppInfo::FindByAumid(hstring const& aumid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_appInfo;
    }

    Foundation::Collections::IVectorView<IAppInfo> AppInfo::FindByTitleId(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_appInfos;
    }
}