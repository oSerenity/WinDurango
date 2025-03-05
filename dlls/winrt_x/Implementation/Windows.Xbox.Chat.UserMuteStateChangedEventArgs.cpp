#include "pch.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    System::IUser UserMuteStateChangedEventArgs::Owner()
    {
		LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_owner;
    }

    hstring UserMuteStateChangedEventArgs::RecipientXboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_recipientXboxUserId;
    }

    bool UserMuteStateChangedEventArgs::Muted()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_muted;
    }
}