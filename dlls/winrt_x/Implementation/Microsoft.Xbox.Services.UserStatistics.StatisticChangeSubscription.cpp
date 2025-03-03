#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState StatisticChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    hstring StatisticChangeSubscription::ResourceUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_resourceUri;
    }

    uint32_t StatisticChangeSubscription::SubscriptionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subscriptionId;
    }

    hstring StatisticChangeSubscription::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    hstring StatisticChangeSubscription::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring StatisticChangeSubscription::StatisticName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticName;
    }
}