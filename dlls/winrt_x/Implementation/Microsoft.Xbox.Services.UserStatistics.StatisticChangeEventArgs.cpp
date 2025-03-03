#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring StatisticChangeEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    hstring StatisticChangeEventArgs::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    Statistic StatisticChangeEventArgs::LatestStatistic()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_latestStatistic;
    }
}