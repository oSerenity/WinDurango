#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    HttpCallResponseBodyType XboxLiveHttpCallResponse::BodyType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bodyType;
    }

    hstring XboxLiveHttpCallResponse::ResponseBodyString()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_responseBodyString;
    }

    hstring XboxLiveHttpCallResponse::ResponseBodyJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_responseBodyJson;
    }

    com_array<uint8_t> XboxLiveHttpCallResponse::ResponseBodyVector()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return std::move(m_responseBodyVector);
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> XboxLiveHttpCallResponse::Headers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_headers;
    }

    int32_t XboxLiveHttpCallResponse::HttpStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_httpStatus;
    }

    int32_t XboxLiveHttpCallResponse::ErrorCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorCode;
    }

    hstring XboxLiveHttpCallResponse::ErrorMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_errorMessage;
    }

    hstring XboxLiveHttpCallResponse::ETag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_eTag;
    }

    hstring XboxLiveHttpCallResponse::ResponseDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_responseDate;
    }

    int64_t XboxLiveHttpCallResponse::RetryAfterInSeconds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_retryAfterInSeconds;
    }
}
