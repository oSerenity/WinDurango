#pragma once
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveHttpCallResponse : XboxLiveHttpCallResponseT<XboxLiveHttpCallResponse>
    {
        XboxLiveHttpCallResponse() = default;

        HttpCallResponseBodyType BodyType();
        hstring ResponseBodyString();
        hstring ResponseBodyJson();
        com_array<uint8_t> ResponseBodyVector();
        Windows::Foundation::Collections::IMapView<hstring, hstring> Headers();
        int32_t HttpStatus();
        int32_t ErrorCode();
        hstring ErrorMessage();
        hstring ETag();
        hstring ResponseDate();
        int64_t RetryAfterInSeconds();

    private:
		HttpCallResponseBodyType m_bodyType{ HttpCallResponseBodyType::JsonBody };
        hstring m_responseBodyString = MAKE_HSTRING("");
		hstring m_responseBodyJson = MAKE_HSTRING("");
		com_array<uint8_t> m_responseBodyVector = com_array<uint8_t>();
        Windows::Foundation::Collections::IMapView<hstring, hstring> m_headers;
		int32_t m_httpStatus{ 0 };
		int32_t m_errorCode{ 0 };
		hstring m_errorMessage{ MAKE_HSTRING("") };
        hstring m_eTag{ MAKE_HSTRING("") };
		hstring m_responseDate{ MAKE_HSTRING("") };
		int64_t m_retryAfterInSeconds{ 0 };
    };
}