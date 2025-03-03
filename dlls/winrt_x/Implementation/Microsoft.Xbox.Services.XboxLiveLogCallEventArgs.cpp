#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    XboxServicesDiagnosticsTraceLevel XboxLiveLogCallEventArgs::Level()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_level;
    }

    hstring XboxLiveLogCallEventArgs::Category()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_category;
    }

    hstring XboxLiveLogCallEventArgs::Message()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_message;
    }
}