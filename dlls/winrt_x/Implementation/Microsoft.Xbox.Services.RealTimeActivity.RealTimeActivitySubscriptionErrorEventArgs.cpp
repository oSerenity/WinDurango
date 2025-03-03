#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    RealTimeActivitySubscriptionState RealTimeActivitySubscriptionErrorEventArgs::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    uint32_t RealTimeActivitySubscriptionErrorEventArgs::SubscriptionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subscriptionId;
    }

    hstring RealTimeActivitySubscriptionErrorEventArgs::ResourceUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_resourceUri;
    }

    RealTimeActivitySubscriptionError RealTimeActivitySubscriptionErrorEventArgs::SubscriptionError()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_subscriptionError;
    }

    hstring RealTimeActivitySubscriptionErrorEventArgs::ErrorMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorMessage;
    }
}