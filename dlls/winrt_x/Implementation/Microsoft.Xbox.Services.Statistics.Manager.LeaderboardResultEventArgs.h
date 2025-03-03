#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct LeaderboardResultEventArgs : LeaderboardResultEventArgsT<LeaderboardResultEventArgs>
    {
        LeaderboardResultEventArgs() = default;

        Leaderboard::LeaderboardResult Result();

    private:
		Leaderboard::LeaderboardResult m_result{ nullptr };
    };
}