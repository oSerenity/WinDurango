#pragma once
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct HttpCallRequestMessage : HttpCallRequestMessageT<HttpCallRequestMessage>
    {
        HttpCallRequestMessage() = default;

        hstring RequestMessageString();
        com_array<uint8_t> RequestMessageVector();
        HttpRequestMessageType GetHttpRequestMessageType();

    private:
		hstring m_requestMessageString{ MAKE_HSTRING("") };
		com_array<uint8_t> m_requestMessageVector = com_array<uint8_t>(0);
        HttpRequestMessageType m_httpRequestMessageType = HttpRequestMessageType::EmptyMessage;
    };
}