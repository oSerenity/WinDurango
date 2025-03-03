#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManagerPresenceTitleRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManagerPresenceTitleRecord : SocialManagerPresenceTitleRecordT<SocialManagerPresenceTitleRecord>
    {
        SocialManagerPresenceTitleRecord() = default;

        bool IsTitleActive();
        uint32_t TitleId();
        hstring PresenceText();
        bool IsBroadcasting();
        Presence::PresenceDeviceType DeviceType();

    private:
		bool m_isTitleActive{ false };
		uint32_t m_titleId{ 0 };
        hstring m_presenceText{ L"" };
		bool m_isBroadcasting{ false };
		Presence::PresenceDeviceType m_deviceType{ Presence::PresenceDeviceType::PC };
    };
}