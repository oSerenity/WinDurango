#include "pch.h"
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.h"
#include "Windows.Xbox.Media.SmoothStreamingSessionManager.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
    event_token SmoothStreamingSessionManager::SessionCreated(Foundation::TypedEventHandler<ISmoothStreamingSessionManager, ISmoothStreamingSession> const& session)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionCreatedEvent.add(session);
    }

    void SmoothStreamingSessionManager::SessionCreated(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sessionCreatedEvent.remove(cookie);
    }
}