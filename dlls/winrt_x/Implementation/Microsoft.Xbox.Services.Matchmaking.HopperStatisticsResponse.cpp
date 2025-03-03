#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    hstring HopperStatisticsResponse::HopperName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hopperName;
    }

    Windows::Foundation::TimeSpan HopperStatisticsResponse::EstimatedWaitTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_estimatedWaitTime;
    }

    uint32_t HopperStatisticsResponse::PlayersWaitingToMatch()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_playersWaitingToMatch;
    }
}