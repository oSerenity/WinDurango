#include "pch.h"
#include "Windows.Xbox.Chat.ChatUserCorrelation.h"
#include "Windows.Xbox.Chat.ChatUserCorrelation.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    System::IUser ChatUserCorrelation::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_user;
    }
}