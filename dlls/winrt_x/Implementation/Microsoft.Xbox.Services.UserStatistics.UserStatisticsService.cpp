#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    event_token UserStatisticsService::StatisticChanged(Windows::Foundation::EventHandler<StatisticChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticChangedToken;
    }

    void UserStatisticsService::StatisticChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_statisticChangedToken = __param0;
    }

    Windows::Foundation::IAsyncOperation<UserStatisticsResult> UserStatisticsService::GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userStatisticsResult;
    }

    Windows::Foundation::IAsyncOperation<UserStatisticsResult> UserStatisticsService::GetSingleUserStatisticsAsync(hstring xboxUserId, hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> statisticNames)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userStatisticsResult;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<UserStatisticsResult>> UserStatisticsService::GetMultipleUserStatisticsAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> statisticNames)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userStatisticsResults;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<UserStatisticsResult>> UserStatisticsService::GetMultipleUserStatisticsForMultipleServiceConfigurationsAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, Windows::Foundation::Collections::IVectorView<RequestedStatistics> requestedServiceConfigurationStatisticsCollection)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userStatisticsResults;
    }

    StatisticChangeSubscription UserStatisticsService::SubscribeToStatisticChange(hstring const& xboxUserId, hstring const& serviceConfigurationId, hstring const& statisticName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticChangeSubscription;
    }

    void UserStatisticsService::UnsubscribeFromStatisticChange(StatisticChangeSubscription const& subscription)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}