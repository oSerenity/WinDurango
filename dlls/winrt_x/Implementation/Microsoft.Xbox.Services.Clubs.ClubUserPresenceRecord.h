#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubUserPresenceRecord : ClubUserPresenceRecordT<ClubUserPresenceRecord>
    {
        ClubUserPresenceRecord() = default;

        hstring Xuid();
        Windows::Foundation::DateTime LastSeen();
        ClubUserPresence LastSeenState();

    private:
        hstring m_xuid = MAKE_HSTRING("0123456789");
		Windows::Foundation::DateTime m_lastSeen = Windows::Foundation::DateTime::clock::now();
		ClubUserPresence m_lastSeenState = ClubUserPresence::Play;
    };
}