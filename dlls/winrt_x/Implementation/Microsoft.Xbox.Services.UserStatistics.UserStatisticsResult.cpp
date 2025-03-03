#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring UserStatisticsResult::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    Windows::Foundation::Collections::IVectorView<ServiceConfigurationStatistic> UserStatisticsResult::ServiceConfigurationStatistics()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationStatistics;
    }
}