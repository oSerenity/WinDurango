#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceRecord::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    UserPresenceState PresenceRecord::UserState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_userState;
    }

    Windows::Foundation::Collections::IVectorView<PresenceDeviceRecord> PresenceRecord::PresenceDeviceRecords()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_presenceDeviceRecords;
    }

    bool PresenceRecord::IsUserPlayingTitle(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_titleId = titleId;

        return m_isUserPlayingTitle;
    }
}