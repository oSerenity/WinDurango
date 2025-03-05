#include "pch.h"
#include "Windows.Xbox.Chat.ChatMuteList.h"
#include "Windows.Xbox.Chat.ChatMuteList.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    event_token ChatMuteList::UserMuteStateChanged(Foundation::EventHandler<UserMuteStateChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_userMuteStateChangedEventToken;
    }

    void ChatMuteList::UserMuteStateChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_userMuteStateChangedEventToken = token;
    }
}