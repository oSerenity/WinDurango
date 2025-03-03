#include "pch.h"
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.h"
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.g.cpp"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    System::XboxLiveServicesSettings XboxLiveServicesSettings::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    event_token XboxLiveServicesSettings::LogCallRouted(Windows::Foundation::EventHandler<XboxLiveLogCallEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_logCallRoutedToken;
    }

    void XboxLiveServicesSettings::LogCallRouted(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_logCallRoutedToken = __param0;
    }

    XboxServicesDiagnosticsTraceLevel XboxLiveServicesSettings::DiagnosticsTraceLevel()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_diagnosticsTraceLevel;
    }

    void XboxLiveServicesSettings::DiagnosticsTraceLevel(XboxServicesDiagnosticsTraceLevel const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_diagnosticsTraceLevel = value;
    }

    event_token XboxLiveServicesSettings::WnsEventRecevied(Windows::Foundation::EventHandler<XboxLiveWnsEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_wnsEventReceivedToken;
    }

    void XboxLiveServicesSettings::WnsEventRecevied(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_wnsEventReceivedToken = __param0;
    }
}