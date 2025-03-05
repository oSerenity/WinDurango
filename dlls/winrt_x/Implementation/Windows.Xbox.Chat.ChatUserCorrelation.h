#pragma once
#include "Windows.Xbox.Chat.ChatUserCorrelation.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatUserCorrelation : ChatUserCorrelationT<ChatUserCorrelation>
    {
        ChatUserCorrelation() = default;

        System::IUser User();

    private:
		System::IUser m_user{ nullptr };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatUserCorrelation : ChatUserCorrelationT<ChatUserCorrelation, implementation::ChatUserCorrelation>
    {
    };
}