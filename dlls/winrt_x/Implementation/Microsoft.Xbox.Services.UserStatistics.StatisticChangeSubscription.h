#pragma once
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    struct StatisticChangeSubscription : StatisticChangeSubscriptionT<StatisticChangeSubscription>
    {
        StatisticChangeSubscription() = default;

        RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();
        hstring ServiceConfigurationId();
        hstring StatisticName();

    private:
		RealTimeActivity::RealTimeActivitySubscriptionState m_state{ RealTimeActivity::RealTimeActivitySubscriptionState::Closed };
        hstring m_resourceUri{ 0 };
		uint32_t m_subscriptionId{ 0 };
        hstring m_xboxUserId{ 0 };
        hstring m_serviceConfigurationId{ 0 };
        hstring m_statisticName{ 0 };
    };
}