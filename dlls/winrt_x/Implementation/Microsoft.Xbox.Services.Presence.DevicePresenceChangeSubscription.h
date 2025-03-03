#pragma once
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct DevicePresenceChangeSubscription : DevicePresenceChangeSubscriptionT<DevicePresenceChangeSubscription>
    {
        DevicePresenceChangeSubscription() = default;

        RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();

    private:
		RealTimeActivity::RealTimeActivitySubscriptionState m_state{ RealTimeActivity::RealTimeActivitySubscriptionState::Closed };
		hstring m_resourceUri{ L"" };
		uint32_t m_subscriptionId{ 0 };
        hstring m_xboxUserId{ L"" };
    };
}