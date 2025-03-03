#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring ServiceConfigurationStatistic::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    Windows::Foundation::Collections::IVectorView<Statistic> ServiceConfigurationStatistic::Statistics()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statistics;
    }
}