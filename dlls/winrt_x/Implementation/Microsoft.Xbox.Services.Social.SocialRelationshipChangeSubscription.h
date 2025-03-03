#pragma once
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialRelationshipChangeSubscription : SocialRelationshipChangeSubscriptionT<SocialRelationshipChangeSubscription>
    {
        SocialRelationshipChangeSubscription() = default;

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