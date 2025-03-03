#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState TitlePresenceChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    hstring TitlePresenceChangeSubscription::ResourceUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_resourceUri;
    }

    uint32_t TitlePresenceChangeSubscription::SubscriptionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subscriptionId;
    }

    hstring TitlePresenceChangeSubscription::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    uint32_t TitlePresenceChangeSubscription::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }
}