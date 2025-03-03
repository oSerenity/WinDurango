#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentGameSessionReadyEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentGameSessionReadyEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Windows::Foundation::DateTime TournamentGameSessionReadyEventArgs::StartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_startTime;
    }
}