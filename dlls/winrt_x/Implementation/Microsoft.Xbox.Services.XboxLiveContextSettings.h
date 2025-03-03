#pragma once
#include "Microsoft.Xbox.Services.XboxLiveContextSettings.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings>
    {
        XboxLiveContextSettings() = default;

        event_token ServiceCallRouted(Windows::Foundation::EventHandler<XboxServiceCallRoutedEventArgs> const& __param0);
        void ServiceCallRouted(event_token const& __param0) noexcept;
        bool EnableServiceCallRoutedEvents();
        void EnableServiceCallRoutedEvents(bool value);
        XboxServicesDiagnosticsTraceLevel DiagnosticsTraceLevel();
        void DiagnosticsTraceLevel(XboxServicesDiagnosticsTraceLevel const& value);
        Windows::Foundation::TimeSpan HttpTimeout();
        void HttpTimeout(Windows::Foundation::TimeSpan const& value);
        Windows::Foundation::TimeSpan LongHttpTimeout();
        void LongHttpTimeout(Windows::Foundation::TimeSpan const& value);
        Windows::Foundation::TimeSpan HttpRetryDelay();
        void HttpRetryDelay(Windows::Foundation::TimeSpan const& value);
        Windows::Foundation::TimeSpan HttpTimeoutWindow();
        void HttpTimeoutWindow(Windows::Foundation::TimeSpan const& value);
        Windows::Foundation::TimeSpan WebsocketTimeoutWindow();
        void WebsocketTimeoutWindow(Windows::Foundation::TimeSpan const& value);
        bool UseCoreDispatcherForEventRouting();
        void UseCoreDispatcherForEventRouting(bool value);
        void DisableAssertsForXboxLiveThrottlingInDevSandboxes(XboxLiveContextThrottleSetting const& setting);
        void DisableAssertsForMaximumNumberOfWebsocketsActivated(XboxLiveContextRecommendedSetting const& setting);

    private:
        event<Windows::Foundation::EventHandler<XboxServiceCallRoutedEventArgs>> m_serviceCallRouted;
		bool m_enableServiceCallRoutedEvents{ false };
		XboxServicesDiagnosticsTraceLevel m_diagnosticsTraceLevel{ XboxServicesDiagnosticsTraceLevel::Verbose };
		Windows::Foundation::TimeSpan m_httpTimeout{ 0 };
		Windows::Foundation::TimeSpan m_longHttpTimeout{ 0 };
		Windows::Foundation::TimeSpan m_httpRetryDelay{ 0 };
		Windows::Foundation::TimeSpan m_httpTimeoutWindow{ 0 };
		Windows::Foundation::TimeSpan m_websocketTimeoutWindow{ 0 };
		bool m_useCoreDispatcherForEventRouting{ false };
    };
}

namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveContextSettings : XboxLiveContextSettingsT<XboxLiveContextSettings, implementation::XboxLiveContextSettings>
    {
    };
}