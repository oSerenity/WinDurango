#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct Statistic : StatisticT<Statistic>
    {
        Statistic() = default;

        hstring StatisticName();
        Windows::Foundation::PropertyType StatisticType();
        hstring Value();

    private:
        hstring m_statisticName{ L"" };
		Windows::Foundation::PropertyType m_statisticType{ Windows::Foundation::PropertyType::Empty };
		hstring m_value{ L"" };
    };
}