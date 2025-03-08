#pragma once
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.g.h"

namespace winrt::Windows::Xbox::Media::implementation
{
    struct SmoothStreamingSessionManager : SmoothStreamingSessionManagerT<SmoothStreamingSessionManager>
    {
        SmoothStreamingSessionManager() = default;

        event_token SessionCreated(Foundation::TypedEventHandler<ISmoothStreamingSessionManager, ISmoothStreamingSession> const& session);
        void SessionCreated(event_token const& cookie) noexcept;

    private:
        event<Foundation::TypedEventHandler<ISmoothStreamingSessionManager, ISmoothStreamingSession>> m_sessionCreatedEvent;
    };
}

namespace winrt::Windows::Xbox::Media::factory_implementation
{
    struct SmoothStreamingSessionManager : SmoothStreamingSessionManagerT<SmoothStreamingSessionManager, implementation::SmoothStreamingSessionManager>
    {
    };
}