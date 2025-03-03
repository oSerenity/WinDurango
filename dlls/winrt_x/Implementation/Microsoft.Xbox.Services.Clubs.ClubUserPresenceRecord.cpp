#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.h"
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubUserPresenceRecord::Xuid()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xuid;
    }

    Windows::Foundation::DateTime ClubUserPresenceRecord::LastSeen()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_lastSeen;
    }

    ClubUserPresence ClubUserPresenceRecord::LastSeenState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_lastSeenState;
    }
}