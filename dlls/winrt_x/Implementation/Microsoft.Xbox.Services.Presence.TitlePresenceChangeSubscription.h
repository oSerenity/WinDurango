#pragma once
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct TitlePresenceChangeSubscription : TitlePresenceChangeSubscriptionT<TitlePresenceChangeSubscription>
    {
        TitlePresenceChangeSubscription() = default;

        RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring ResourceUri();
        uint32_t SubscriptionId();
        hstring XboxUserId();
        uint32_t TitleId();

    private:
		RealTimeActivity::RealTimeActivitySubscriptionState m_state{ RealTimeActivity::RealTimeActivitySubscriptionState::Closed };
        hstring m_resourceUri{ L"" };
		uint32_t m_subscriptionId{ 0 };
        hstring m_xboxUserId{ L"" };
		uint32_t m_titleId{ 0 };
    };
}