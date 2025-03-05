#include "pch.h"
#include "Windows.Xbox.Chat.ChatEncoder.h"
#include "Windows.Xbox.Chat.ChatEncoder.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatEncoder::ChatEncoder(IFormat const& sourceFormat, EncodingQuality const& quality)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sourceFormat = sourceFormat;
		m_quality = quality;
    }

    void ChatEncoder::Encode(Storage::Streams::IBuffer const& buffer, Storage::Streams::IBuffer& encodedBuffer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        // TODO: Encode the buffer.

        throw hresult_not_implemented();
    }

    int32_t ChatEncoder::IsDataInFlight()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_dataInFlight;
    }

    void ChatEncoder::Encode(Storage::Streams::IBuffer const& buffer, ChatBufferSource const& bufferSource, Storage::Streams::IBuffer& encodedBuffer, ChatBufferSource& pEncodedBufferSource)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        // TODO: Encode the buffer.

        throw hresult_not_implemented();
    }
}