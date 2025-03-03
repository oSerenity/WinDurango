#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.LeaderboardResultEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    Leaderboard::LeaderboardResult LeaderboardResultEventArgs::Result()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_result;
    }
}