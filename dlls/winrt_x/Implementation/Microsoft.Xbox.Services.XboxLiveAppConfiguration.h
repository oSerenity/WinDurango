#pragma once
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveAppConfiguration : XboxLiveAppConfigurationT<XboxLiveAppConfiguration>
    {
        XboxLiveAppConfiguration() = default;

        static Services::XboxLiveAppConfiguration SingletonInstance();
        uint32_t TitleId();
        hstring ServiceConfigurationId();
        hstring Environment();
        hstring Sandbox();

    private:
		uint32_t m_titleId{ 0 };
		hstring m_serviceConfigurationId{ MAKE_HSTRING("") };
		hstring m_environment{ MAKE_HSTRING("") };
		hstring m_sandbox{ MAKE_HSTRING("") };
    };
}

namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveAppConfiguration : XboxLiveAppConfigurationT<XboxLiveAppConfiguration, implementation::XboxLiveAppConfiguration>
    {

    };
}