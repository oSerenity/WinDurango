#pragma once
#include "Windows.Xbox.Chat.ChatDecoder.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatDecoder : ChatDecoderT<ChatDecoder>
    {
        ChatDecoder() = default;

        IFormat Format();
        void Decode(Storage::Streams::IBuffer const& buffer, Storage::Streams::IBuffer& decodedBuffer);
        int32_t IsDataInFlight();

    private:
        IFormat m_format{ nullptr };
		Storage::Streams::IBuffer m_buffer{ nullptr };
		Storage::Streams::IBuffer m_decodedBuffer{ nullptr };
		int32_t m_dataInFlight{ 0 };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatDecoder : ChatDecoderT<ChatDecoder, implementation::ChatDecoder>
    {
    };
}