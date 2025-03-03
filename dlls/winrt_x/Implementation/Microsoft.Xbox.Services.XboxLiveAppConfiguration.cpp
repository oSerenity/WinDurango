#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    // TODO: Replace the nullptr with the correct singleton.
    Services::XboxLiveAppConfiguration XboxLiveAppConfiguration::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return nullptr;
    }

    uint32_t XboxLiveAppConfiguration::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    hstring XboxLiveAppConfiguration::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring XboxLiveAppConfiguration::Environment()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_environment;
    }

    hstring XboxLiveAppConfiguration::Sandbox()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sandbox;
    }
}