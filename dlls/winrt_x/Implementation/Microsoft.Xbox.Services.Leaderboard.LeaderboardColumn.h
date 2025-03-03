#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardColumn : LeaderboardColumnT<LeaderboardColumn>
    {
        LeaderboardColumn() = default;

        hstring DisplayName();
        hstring StatisticName();
        Windows::Foundation::PropertyType StatisticType();

    private:
        hstring m_displayName{ L"" };
        hstring m_statisticName{ L"" };
        Windows::Foundation::PropertyType m_statisticType = Windows::Foundation::PropertyType::Empty;
    };
}