#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentGameSessionReadyEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct TournamentGameSessionReadyEventArgs : TournamentGameSessionReadyEventArgsT<TournamentGameSessionReadyEventArgs>
    {
        TournamentGameSessionReadyEventArgs() = default;

        Windows::Foundation::DateTime StartTime();

    private:
		Windows::Foundation::DateTime m_startTime = Windows::Foundation::DateTime::clock::now();
    };
}