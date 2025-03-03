#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.g.h"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct HopperStatisticsResponse : HopperStatisticsResponseT<HopperStatisticsResponse>
    {
        HopperStatisticsResponse() = default;

        hstring HopperName();
        Windows::Foundation::TimeSpan EstimatedWaitTime();
        uint32_t PlayersWaitingToMatch();

    private:
		hstring m_hopperName{ L"" };
		Windows::Foundation::TimeSpan m_estimatedWaitTime = Windows::Foundation::TimeSpan{ 0 };
		uint32_t m_playersWaitingToMatch{ 0 };
    };
}