#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceBroadcastRecord::BroadcastId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_broadcastId;
    }

    hstring PresenceBroadcastRecord::Session()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_session;
    }

    hstring PresenceBroadcastRecord::Provider()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_provider;
    }

    uint32_t PresenceBroadcastRecord::ViewerCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_viewerCount;
    }

    Windows::Foundation::DateTime PresenceBroadcastRecord::StartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_startTime;
    }
}