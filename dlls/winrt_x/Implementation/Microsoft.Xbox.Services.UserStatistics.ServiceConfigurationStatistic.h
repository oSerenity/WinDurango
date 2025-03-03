#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.ServiceConfigurationStatistic.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct ServiceConfigurationStatistic : ServiceConfigurationStatisticT<ServiceConfigurationStatistic>
    {
        ServiceConfigurationStatistic() = default;

        hstring ServiceConfigurationId();
        Windows::Foundation::Collections::IVectorView<Statistic> Statistics();

    private:
        hstring m_serviceConfigurationId{ L"" };
        Windows::Foundation::Collections::IVectorView<Statistic> m_statistics = single_threaded_vector<Statistic>().GetView();
    };
}