#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult LeaderboardResultEventArgs::Result()
    {
		return winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult(nullptr);
    }
}
