#pragma once
#include "Windows.Xbox.Chat.ChatChannel.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatChannel : ChatChannelT<ChatChannel>
    {
        ChatChannel() = default;

        Foundation::Collections::IVector<IChatParticipant> Participants();

    private:
		Foundation::Collections::IVector<IChatParticipant> m_participants = single_threaded_observable_vector<IChatParticipant>();
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatChannel : ChatChannelT<ChatChannel, implementation::ChatChannel>
    {
    };
}