#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    void RealTimeActivityService::Activate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void RealTimeActivityService::Deactivate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    event_token RealTimeActivityService::RealTimeActivityConnectionStateChange(Windows::Foundation::EventHandler<RealTimeActivityConnectionState> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_realTimeActivityConnectionStateChange;
    }

    void RealTimeActivityService::RealTimeActivityConnectionStateChange(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    event_token RealTimeActivityService::RealTimeActivitySubscriptionError(Windows::Foundation::EventHandler<RealTimeActivitySubscriptionErrorEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_realTimeActivitySubscriptionError;
    }

    void RealTimeActivityService::RealTimeActivitySubscriptionError(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    event_token RealTimeActivityService::RealTimeActivityResync(Windows::Foundation::EventHandler<RealTimeActivityResyncEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_realTimeActivityResync;
    }

    void RealTimeActivityService::RealTimeActivityResync(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}