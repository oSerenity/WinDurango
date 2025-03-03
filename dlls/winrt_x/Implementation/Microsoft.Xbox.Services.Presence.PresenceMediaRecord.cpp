#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceMediaRecord::MediaId()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mediaId;
    }

    PresenceMediaIdType PresenceMediaRecord::MediaIdType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mediaIdType;
    }

    hstring PresenceMediaRecord::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }
}