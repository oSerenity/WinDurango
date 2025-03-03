#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MatchmakingStatus MultiplayerSessionMatchmakingServer::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_status;
    }

    hstring MultiplayerSessionMatchmakingServer::StatusDetails()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statusDetails;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionMatchmakingServer::TypicalWait()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_typicalWait;
    }

    MultiplayerSessionReference MultiplayerSessionMatchmakingServer::TargetSessionRef()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_targetSessionRef;
    }
}