#pragma once
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveHttpCall : XboxLiveHttpCallT<XboxLiveHttpCall>
    {
        XboxLiveHttpCall() = default;

        static Services::XboxLiveHttpCall CreateXboxLiveHttpCall(XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment);
        Windows::Foundation::IAsyncOperation<XboxLiveHttpCallResponse> GetResponseWithAuth(Windows::Xbox::System::User user, HttpCallResponseBodyType httpCallResponseBodyType);
        Windows::Foundation::IAsyncOperation<XboxLiveHttpCallResponse> GetResponseWithoutAuth(HttpCallResponseBodyType httpCallResponseBodyType);
        void SetRequestBody(hstring const& value);
        void SetRequestBodyArray(array_view<uint8_t const> requestBodyArray);
        void SetCustomHeader(hstring const& headerName, hstring const& headerValue);
        bool RetryAllowed();
        void RetryAllowed(bool value);
        hstring ContentTypeHeaderValue();
        void ContentTypeHeaderValue(hstring const& value);
        hstring ContractVersionHeaderValue();
        void ContractVersionHeaderValue(hstring const& value);
        hstring ServerName();
        hstring PathQueryFragment();
        hstring HttpMethod();

    private:
		bool m_retryAllowed{ false };
		hstring m_contentTypeHeaderValue{ MAKE_HSTRING("") };
		hstring m_contractVersionHeaderValue{ MAKE_HSTRING("") };
		hstring m_serverName{ MAKE_HSTRING("") };
        hstring m_pathQueryFragment{ MAKE_HSTRING("") };
        hstring m_httpMethod{ MAKE_HSTRING("")};
    };
}

namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveHttpCall : XboxLiveHttpCallT<XboxLiveHttpCall, implementation::XboxLiveHttpCall>
    {

    };
}