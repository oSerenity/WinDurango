#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct RequestedStatistics : RequestedStatisticsT<RequestedStatistics>
    {
        RequestedStatistics() = default;

        RequestedStatistics(hstring const& serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> const& statistics);
        hstring ServiceConfigurationId();
        Windows::Foundation::Collections::IVectorView<hstring> Statistics();

    private:
        hstring m_serviceConfigurationId{ L"" };
        Windows::Foundation::Collections::IVectorView<hstring> m_statistics = single_threaded_vector<hstring>().GetView();
    };
}

namespace winrt::Microsoft::Xbox::Services::UserStatistics::factory_implementation
{
    struct RequestedStatistics : RequestedStatisticsT<RequestedStatistics, implementation::RequestedStatistics>
    {
    };
}