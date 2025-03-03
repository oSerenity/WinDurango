#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.g.h"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticValue : StatisticValueT<StatisticValue>
    {
        StatisticValue() = default;

        hstring Name();
        double AsNumber();
        int64_t AsInteger();
        hstring AsString();
        StatisticDataType DataType();

    private:
        hstring m_name{ L"" };
		double m_number{ 0 };
		int64_t m_integer{ 0 };
        hstring m_string{ L"" };
		StatisticDataType m_dataType{ StatisticDataType::Number };
    };
}