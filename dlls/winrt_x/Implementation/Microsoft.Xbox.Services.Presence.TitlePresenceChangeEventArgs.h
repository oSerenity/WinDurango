#pragma once
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct TitlePresenceChangeEventArgs : TitlePresenceChangeEventArgsT<TitlePresenceChangeEventArgs>
    {
        TitlePresenceChangeEventArgs() = default;

        hstring XboxUserId();
        uint32_t TitleId();
        TitlePresenceState TitleState();

    private:
        hstring m_xboxUserId{ L"" };
        uint32_t m_titleId{ 0 };
		TitlePresenceState m_titleState{ TitlePresenceState::Unknown };
    };
}