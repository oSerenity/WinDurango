#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardColumn::DisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayName;
    }

    hstring LeaderboardColumn::StatisticName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticName;
    }

    Windows::Foundation::PropertyType LeaderboardColumn::StatisticType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statisticType;
    }
}