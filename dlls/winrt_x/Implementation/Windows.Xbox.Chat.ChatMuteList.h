#pragma once
#include "Windows.Xbox.Chat.ChatMuteList.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatMuteList
    {
        ChatMuteList() = default;

        static event_token UserMuteStateChanged(Foundation::EventHandler<UserMuteStateChangedEventArgs> const& handler);
        static void UserMuteStateChanged(event_token const& token) noexcept;

    private:
		static inline event_token m_userMuteStateChangedEventToken{};
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatMuteList : ChatMuteListT<ChatMuteList, implementation::ChatMuteList>
    {
    };
}