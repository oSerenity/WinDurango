#pragma once
#include "Windows.Xbox.Chat.ChatEncoder.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatEncoder : ChatEncoderT<ChatEncoder>
    {
        ChatEncoder() = default;

        ChatEncoder(IFormat const& sourceFormat, EncodingQuality const& quality);
        void Encode(Storage::Streams::IBuffer const& buffer, Storage::Streams::IBuffer& encodedBuffer);
        int32_t IsDataInFlight();
        void Encode(Storage::Streams::IBuffer const& buffer, ChatBufferSource const& bufferSource, Storage::Streams::IBuffer& encodedBuffer, ChatBufferSource& pEncodedBufferSource);

    private:
		IFormat m_sourceFormat{ nullptr };
		EncodingQuality m_quality{};
		int32_t m_dataInFlight{ 0 };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatEncoder : ChatEncoderT<ChatEncoder, implementation::ChatEncoder>
    {
    };
}