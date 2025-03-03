#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct UserStatisticsResult : UserStatisticsResultT<UserStatisticsResult>
    {
        UserStatisticsResult() = default;

        hstring XboxUserId();
        Windows::Foundation::Collections::IVectorView<ServiceConfigurationStatistic> ServiceConfigurationStatistics();

    private:
        hstring m_xboxUserId{ L"" };
        Windows::Foundation::Collections::IVectorView<ServiceConfigurationStatistic> m_serviceConfigurationStatistics = single_threaded_vector<ServiceConfigurationStatistic>().GetView();
    };
}