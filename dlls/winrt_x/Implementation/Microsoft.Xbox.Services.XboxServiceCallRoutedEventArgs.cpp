#include "pch.h"
#include "Microsoft.Xbox.Services.XboxServiceCallRoutedEventArgs.h"
#include "Microsoft.Xbox.Services.XboxServiceCallRoutedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring XboxServiceCallRoutedEventArgs::HttpMethod()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        return m_httpMethod;
    }

    Windows::Foundation::Uri XboxServiceCallRoutedEventArgs::Url()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_url;
    }

    hstring XboxServiceCallRoutedEventArgs::RequestHeaders()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_requestHeaders;
    }

    HttpCallRequestMessage XboxServiceCallRoutedEventArgs::RequestBody()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_requestBody;
    }

    uint32_t XboxServiceCallRoutedEventArgs::ResponseCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_responseCount;
    }

    hstring XboxServiceCallRoutedEventArgs::ResponseHeaders()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_responseHeaders;
    }

    hstring XboxServiceCallRoutedEventArgs::ResponseBody()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_responseBody;
    }

    hstring XboxServiceCallRoutedEventArgs::ETag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eTag;
    }

    hstring XboxServiceCallRoutedEventArgs::Token()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_token;
    }

    hstring XboxServiceCallRoutedEventArgs::Signature()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_signature;
    }

    uint32_t XboxServiceCallRoutedEventArgs::HttpStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_httpStatus;
    }

    hstring XboxServiceCallRoutedEventArgs::FullResponseToString()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_fullResponseToString;
    }

    Windows::Foundation::DateTime XboxServiceCallRoutedEventArgs::RequestTimeUTC()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_requestTimeUTC;
    }

    Windows::Foundation::DateTime XboxServiceCallRoutedEventArgs::ResponseTimeUTC()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_responseTimeUTC;
    }

    Windows::Foundation::TimeSpan XboxServiceCallRoutedEventArgs::ElapsedCallTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_elapsedCallTime;
    }

    hstring XboxServiceCallRoutedEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }
}