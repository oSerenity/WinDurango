#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState SocialRelationshipChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring SocialRelationshipChangeSubscription::ResourceUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_resourceUri;
    }

    uint32_t SocialRelationshipChangeSubscription::SubscriptionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_subscriptionId;
    }

    hstring SocialRelationshipChangeSubscription::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }
}