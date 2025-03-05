#include "pch.h"
#include "Windows.Xbox.Chat.ChatDecoder.h"
#include "Windows.Xbox.Chat.ChatDecoder.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    IFormat ChatDecoder::Format()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_format;
    }

    void ChatDecoder::Decode(Storage::Streams::IBuffer const& buffer, Storage::Streams::IBuffer& decodedBuffer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        // TODO: Decode the encoded buffer.

        throw hresult_not_implemented();
    }

    int32_t ChatDecoder::IsDataInFlight()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_dataInFlight;
    }
}