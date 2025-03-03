#pragma once
#include "Microsoft.Xbox.Services.XboxServiceCallRoutedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxServiceCallRoutedEventArgs : XboxServiceCallRoutedEventArgsT<XboxServiceCallRoutedEventArgs>
    {
        XboxServiceCallRoutedEventArgs() = default;

        hstring HttpMethod();
        Windows::Foundation::Uri Url();
        hstring RequestHeaders();
        HttpCallRequestMessage RequestBody();
        uint32_t ResponseCount();
        hstring ResponseHeaders();
        hstring ResponseBody();
        hstring ETag();
        hstring Token();
        hstring Signature();
        uint32_t HttpStatus();
        hstring FullResponseToString();
        Windows::Foundation::DateTime RequestTimeUTC();
        Windows::Foundation::DateTime ResponseTimeUTC();
        Windows::Foundation::TimeSpan ElapsedCallTime();
        hstring XboxUserId();

    private:
        hstring m_httpMethod{ MAKE_HSTRING("") };
		Windows::Foundation::Uri m_url{ nullptr };
		hstring m_requestHeaders{ MAKE_HSTRING("") };
		HttpCallRequestMessage m_requestBody{ nullptr };
		uint32_t m_responseCount{ 0 };
		hstring m_responseHeaders{ MAKE_HSTRING("") };
		hstring m_responseBody{ MAKE_HSTRING("") };
		hstring m_eTag{ MAKE_HSTRING("") };
		hstring m_token{ MAKE_HSTRING("") };
		hstring m_signature{ MAKE_HSTRING("") };
		uint32_t m_httpStatus{ 0 };
		hstring m_fullResponseToString{ MAKE_HSTRING("") };
		Windows::Foundation::DateTime m_requestTimeUTC = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::DateTime m_responseTimeUTC = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::TimeSpan m_elapsedCallTime = Windows::Foundation::TimeSpan::zero();
		hstring m_xboxUserId{ MAKE_HSTRING("") };
    };
}