#include "pch.h"
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.h"
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring HttpCallRequestMessage::RequestMessageString()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_requestMessageString;
    }

    com_array<uint8_t> HttpCallRequestMessage::RequestMessageVector()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return com_array(m_requestMessageVector.begin(), m_requestMessageVector.end());
    }

    HttpRequestMessageType HttpCallRequestMessage::GetHttpRequestMessageType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_httpRequestMessageType;
    }
}