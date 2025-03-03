#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceTitleRecord.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceTitleRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    bool SocialManagerPresenceTitleRecord::IsTitleActive()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isTitleActive;
    }

    uint32_t SocialManagerPresenceTitleRecord::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    hstring SocialManagerPresenceTitleRecord::PresenceText()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_presenceText;
    }

    bool SocialManagerPresenceTitleRecord::IsBroadcasting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isBroadcasting;
    }

    Presence::PresenceDeviceType SocialManagerPresenceTitleRecord::DeviceType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_deviceType;
    }
}