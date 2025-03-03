#pragma once
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.g.h"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings>
    {
        XboxLiveServicesSettings() = default;

        static System::XboxLiveServicesSettings SingletonInstance();
        event_token LogCallRouted(Windows::Foundation::EventHandler<XboxLiveLogCallEventArgs> const& __param0);
        void LogCallRouted(event_token const& __param0) noexcept;
        XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(XboxServicesDiagnosticsTraceLevel const& value);
        event_token WnsEventRecevied(Windows::Foundation::EventHandler<XboxLiveWnsEventArgs> const& __param0);
        void WnsEventRecevied(event_token const& __param0) noexcept;

    private:
        event_token m_logCallRoutedToken{};
		XboxServicesDiagnosticsTraceLevel m_diagnosticsTraceLevel{ XboxServicesDiagnosticsTraceLevel::Verbose };
		event_token m_wnsEventReceivedToken{};
    };
}

namespace winrt::Microsoft::Xbox::Services::System::factory_implementation
{
    struct XboxLiveServicesSettings : XboxLiveServicesSettingsT<XboxLiveServicesSettings, implementation::XboxLiveServicesSettings>
    {
    };
}