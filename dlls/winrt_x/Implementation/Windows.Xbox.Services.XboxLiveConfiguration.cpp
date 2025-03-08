#include "pch.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.g.cpp"

namespace winrt::Windows::Xbox::Services::implementation
{
    hstring XboxLiveConfiguration::TitleId()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    hstring XboxLiveConfiguration::PrimaryServiceConfigId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_primaryServiceConfigId;
    }

    hstring XboxLiveConfiguration::SandboxId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sandboxId;
    }
}