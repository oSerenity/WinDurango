#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    hstring StatisticValue::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    double StatisticValue::AsNumber()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_number;
    }

    int64_t StatisticValue::AsInteger()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_integer;
    }

    hstring StatisticValue::AsString()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_string;
    }

    StatisticDataType StatisticValue::DataType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_dataType;
    }
}