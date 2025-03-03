#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    int32_t MultiplayerEvent::ErrorCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorCode;
    }

    hstring MultiplayerEvent::ErrorMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorMessage;
    }

    Windows::Foundation::IInspectable MultiplayerEvent::Context()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_context;
    }

    MultiplayerEventType MultiplayerEvent::EventType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventType;
    }

    MultiplayerEventArgs MultiplayerEvent::EventArgs()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventArgs;
    }

    MultiplayerSessionType MultiplayerEvent::SessionType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionType;
    }
}