#pragma once
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.g.h"

namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    struct RealTimeActivityService : RealTimeActivityServiceT<RealTimeActivityService>
    {
        RealTimeActivityService() = default;

        void Activate();
        void Deactivate();
        event_token RealTimeActivityConnectionStateChange(Windows::Foundation::EventHandler<RealTimeActivityConnectionState> const& __param0);
        void RealTimeActivityConnectionStateChange(event_token const& __param0) noexcept;
        event_token RealTimeActivitySubscriptionError(Windows::Foundation::EventHandler<RealTimeActivitySubscriptionErrorEventArgs> const& __param0);
        void RealTimeActivitySubscriptionError(event_token const& __param0) noexcept;
        event_token RealTimeActivityResync(Windows::Foundation::EventHandler<RealTimeActivityResyncEventArgs> const& __param0);
        void RealTimeActivityResync(event_token const& __param0) noexcept;

    private:
		event_token m_realTimeActivityConnectionStateChange{ 0 };
		event_token m_realTimeActivitySubscriptionError{ 0 };
		event_token m_realTimeActivityResync{ 0 };
    };
}