#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct StatisticChangeEventArgs : StatisticChangeEventArgsT<StatisticChangeEventArgs>
    {
        StatisticChangeEventArgs() = default;

        hstring XboxUserId();
        hstring ServiceConfigurationId();
        Statistic LatestStatistic();

    private:
        hstring m_xboxUserId{ L"" };
        hstring m_serviceConfigurationId{ L"" };
		Statistic m_latestStatistic{ nullptr };
    };
}