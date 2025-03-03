#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveContextSettings.h"
#include "Microsoft.Xbox.Services.XboxLiveContextSettings.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    event_token XboxLiveContextSettings::ServiceCallRouted(Windows::Foundation::EventHandler<XboxServiceCallRoutedEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceCallRouted.add(__param0);
    }

    void XboxLiveContextSettings::ServiceCallRouted(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    bool XboxLiveContextSettings::EnableServiceCallRoutedEvents()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_enableServiceCallRoutedEvents;
    }

    void XboxLiveContextSettings::EnableServiceCallRoutedEvents(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_enableServiceCallRoutedEvents = value;
    }

    XboxServicesDiagnosticsTraceLevel XboxLiveContextSettings::DiagnosticsTraceLevel()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_diagnosticsTraceLevel;
    }

    void XboxLiveContextSettings::DiagnosticsTraceLevel(XboxServicesDiagnosticsTraceLevel const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_diagnosticsTraceLevel = value;
    }

    Windows::Foundation::TimeSpan XboxLiveContextSettings::HttpTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_httpTimeout;
    }

    void XboxLiveContextSettings::HttpTimeout(Windows::Foundation::TimeSpan const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_httpTimeout = value;
    }

    Windows::Foundation::TimeSpan XboxLiveContextSettings::LongHttpTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_longHttpTimeout;
    }

    void XboxLiveContextSettings::LongHttpTimeout(Windows::Foundation::TimeSpan const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_longHttpTimeout = value;
    }

    Windows::Foundation::TimeSpan XboxLiveContextSettings::HttpRetryDelay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_httpRetryDelay;
    }

    void XboxLiveContextSettings::HttpRetryDelay(Windows::Foundation::TimeSpan const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_httpRetryDelay = value;
    }

    Windows::Foundation::TimeSpan XboxLiveContextSettings::HttpTimeoutWindow()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_httpTimeoutWindow;
    }

    void XboxLiveContextSettings::HttpTimeoutWindow(Windows::Foundation::TimeSpan const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_httpTimeoutWindow = value;
    }

    Windows::Foundation::TimeSpan XboxLiveContextSettings::WebsocketTimeoutWindow()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_websocketTimeoutWindow;
    }

    void XboxLiveContextSettings::WebsocketTimeoutWindow(Windows::Foundation::TimeSpan const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_websocketTimeoutWindow = value;
    }

    bool XboxLiveContextSettings::UseCoreDispatcherForEventRouting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_useCoreDispatcherForEventRouting;
    }

    void XboxLiveContextSettings::UseCoreDispatcherForEventRouting(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_useCoreDispatcherForEventRouting = value;
    }

    void XboxLiveContextSettings::DisableAssertsForXboxLiveThrottlingInDevSandboxes(XboxLiveContextThrottleSetting const& setting)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void XboxLiveContextSettings::DisableAssertsForMaximumNumberOfWebsocketsActivated(XboxLiveContextRecommendedSetting const& setting)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}
