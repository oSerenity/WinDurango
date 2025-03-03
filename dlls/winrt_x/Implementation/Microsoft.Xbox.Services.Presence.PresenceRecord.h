#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceRecord : PresenceRecordT<PresenceRecord>
    {
        PresenceRecord() = default;

        hstring XboxUserId();
        UserPresenceState UserState();
        Windows::Foundation::Collections::IVectorView<PresenceDeviceRecord> PresenceDeviceRecords();
        bool IsUserPlayingTitle(uint32_t titleId);

    private:
        hstring m_xboxUserId{ L"" };
        uint32_t m_titleId{ 0 };
		UserPresenceState m_userState{ UserPresenceState::Unknown };
        Windows::Foundation::Collections::IVectorView<PresenceDeviceRecord> m_presenceDeviceRecords{ single_threaded_vector<PresenceDeviceRecord>().GetView() };
		bool m_isUserPlayingTitle{ false };
    };
}