#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring Statistic::StatisticName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statisticName;
    }

    Windows::Foundation::PropertyType Statistic::StatisticType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticType;
    }

    hstring Statistic::Value()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_value;
    }
}