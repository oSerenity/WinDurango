#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState DevicePresenceChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    hstring DevicePresenceChangeSubscription::ResourceUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_resourceUri;
    }

    uint32_t DevicePresenceChangeSubscription::SubscriptionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subscriptionId;
    }

    hstring DevicePresenceChangeSubscription::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }
}