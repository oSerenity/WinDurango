#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceMediaRecord : PresenceMediaRecordT<PresenceMediaRecord>
    {
        PresenceMediaRecord() = default;

        hstring MediaId();
        PresenceMediaIdType MediaIdType();
        hstring Name();

    private:
        hstring m_mediaId{ L"" };
		PresenceMediaIdType m_mediaIdType{ PresenceMediaIdType::Unknown };
		hstring m_name{ L"" };
    };
}