#pragma once
#include "Windows.Xbox.Services.XboxLiveConfiguration.g.h"

namespace winrt::Windows::Xbox::Services::implementation
{
    struct XboxLiveConfiguration
    {
        XboxLiveConfiguration() = default;

        static hstring TitleId();
        static hstring PrimaryServiceConfigId();
        static hstring SandboxId();

    private:
		static inline hstring m_titleId{ L"0" };
		static inline hstring m_primaryServiceConfigId{ L"000013" };
		static inline hstring m_sandboxId{ L"0" };
    };
}

namespace winrt::Windows::Xbox::Services::factory_implementation
{
    struct XboxLiveConfiguration : XboxLiveConfigurationT<XboxLiveConfiguration, implementation::XboxLiveConfiguration>
    {
    };
}