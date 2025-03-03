#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceBroadcastRecord : PresenceBroadcastRecordT<PresenceBroadcastRecord>
    {
        PresenceBroadcastRecord() = default;

        hstring BroadcastId();
        hstring Session();
        hstring Provider();
        uint32_t ViewerCount();
        Windows::Foundation::DateTime StartTime();

    private:
        hstring m_broadcastId{ L"" };
        hstring m_session{ L"" };
        hstring m_provider{ L"" };
		uint32_t m_viewerCount{ 0 };
        Windows::Foundation::DateTime m_startTime{ Windows::Foundation::DateTime::clock::now() };
    };
}