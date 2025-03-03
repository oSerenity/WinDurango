#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    Windows::Xbox::System::User StatisticEvent::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_user;
    }

    StatisticEventType StatisticEvent::EventType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventType;
    }

    int32_t StatisticEvent::ErrorCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorCode;
    }

    hstring StatisticEvent::ErrorMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_errorMessage;
    }

    StatisticEventArgs StatisticEvent::EventArgs()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventArgs;
    }
}