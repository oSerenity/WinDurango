#pragma once
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct UserMuteStateChangedEventArgs : UserMuteStateChangedEventArgsT<UserMuteStateChangedEventArgs>
    {
        UserMuteStateChangedEventArgs() = default;

        System::IUser Owner();
        hstring RecipientXboxUserId();
        bool Muted();

    private:
		System::IUser m_owner{ nullptr };
		hstring m_recipientXboxUserId;
		bool m_muted{ false };
    };
}