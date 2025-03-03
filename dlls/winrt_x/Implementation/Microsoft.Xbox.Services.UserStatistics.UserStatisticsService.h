#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct UserStatisticsService : UserStatisticsServiceT<UserStatisticsService>
    {
        UserStatisticsService() = default;

        event_token StatisticChanged(Windows::Foundation::EventHandler<StatisticChangeEventArgs> const& __param0);
        void StatisticChanged(event_token const& __param0) noexcept;
        Windows::Foundation::IAsyncOperation<UserStatisticsResult> GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName);
        Windows::Foundation::IAsyncOperation<UserStatisticsResult> GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> statisticNames);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<UserStatisticsResult>> GetMultipleUserStatisticsAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> statisticNames);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<UserStatisticsResult>> GetMultipleUserStatisticsForMultipleServiceConfigurationsAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, Windows::Foundation::Collections::IVectorView<RequestedStatistics> requestedServiceConfigurationStatisticsCollection);
        StatisticChangeSubscription SubscribeToStatisticChange(hstring const& xboxUserId, hstring const& serviceConfigurationId, hstring const& statisticName);
        void UnsubscribeFromStatisticChange(StatisticChangeSubscription const& subscription);

    private:
		event_token m_statisticChangedToken{ 0 };
		UserStatisticsResult m_userStatisticsResult{ nullptr };
        Windows::Foundation::Collections::IVectorView<UserStatisticsResult> m_userStatisticsResults{ single_threaded_vector<UserStatisticsResult>().GetView() };
		StatisticChangeSubscription m_statisticChangeSubscription{ nullptr };
    };
}