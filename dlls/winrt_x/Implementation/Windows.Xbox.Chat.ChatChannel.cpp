#include "pch.h"
#include "Windows.Xbox.Chat.ChatChannel.h"
#include "Windows.Xbox.Chat.ChatChannel.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    Foundation::Collections::IVector<IChatParticipant> ChatChannel::Participants()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_participants;
    }
}