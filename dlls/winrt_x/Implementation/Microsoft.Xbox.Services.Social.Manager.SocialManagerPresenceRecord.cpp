#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    Presence::UserPresenceState SocialManagerPresenceRecord::UserState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_userState;
    }

    Windows::Foundation::Collections::IVectorView<SocialManagerPresenceTitleRecord> SocialManagerPresenceRecord::PresenceTitleRecords()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceTitleRecords;
    }

    bool SocialManagerPresenceRecord::IsUserPlayingTitle(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isUserPlayingTitle;
    }
}