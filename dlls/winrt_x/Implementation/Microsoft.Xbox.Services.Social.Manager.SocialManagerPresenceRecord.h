#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManagerPresenceRecord : SocialManagerPresenceRecordT<SocialManagerPresenceRecord>
    {
        SocialManagerPresenceRecord() = default;

        Presence::UserPresenceState UserState();
        Windows::Foundation::Collections::IVectorView<SocialManagerPresenceTitleRecord> PresenceTitleRecords();
        bool IsUserPlayingTitle(uint32_t titleId);

    private:
		Presence::UserPresenceState m_userState{ Presence::UserPresenceState::Unknown };
		Windows::Foundation::Collections::IVectorView<SocialManagerPresenceTitleRecord> m_presenceTitleRecords{ single_threaded_vector<SocialManagerPresenceTitleRecord>().GetView() };
		bool m_isUserPlayingTitle{ false };
    };
}