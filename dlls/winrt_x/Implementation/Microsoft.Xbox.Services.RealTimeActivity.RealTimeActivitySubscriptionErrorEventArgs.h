#pragma once
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    struct RealTimeActivitySubscriptionErrorEventArgs : RealTimeActivitySubscriptionErrorEventArgsT<RealTimeActivitySubscriptionErrorEventArgs>
    {
        RealTimeActivitySubscriptionErrorEventArgs() = default;

        RealTimeActivitySubscriptionState State();
        uint32_t SubscriptionId();
        hstring ResourceUri();
        RealTimeActivitySubscriptionError SubscriptionError();
        hstring ErrorMessage();

    private:
        RealTimeActivitySubscriptionState m_state{ RealTimeActivitySubscriptionState::Subscribed };
		uint32_t m_subscriptionId{ 0 };
        hstring m_resourceUri{ L"" };
		RealTimeActivitySubscriptionError m_subscriptionError{ RealTimeActivitySubscriptionError::RTAGenericError };
		hstring m_errorMessage{ L"" };
    };
}