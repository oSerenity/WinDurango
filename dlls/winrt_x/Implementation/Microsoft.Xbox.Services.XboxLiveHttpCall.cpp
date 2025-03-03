#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    Services::XboxLiveHttpCall XboxLiveHttpCall::CreateXboxLiveHttpCall(XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        Services::XboxLiveHttpCall xboxLiveHttpCall{ nullptr };

        return xboxLiveHttpCall;
    }

    Windows::Foundation::IAsyncOperation<XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithAuth(Windows::Xbox::System::User user, HttpCallResponseBodyType httpCallResponseBodyType)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		XboxLiveHttpCallResponse xboxLiveHttpCallResponse{ nullptr };

		co_return xboxLiveHttpCallResponse;
    }

    Windows::Foundation::IAsyncOperation<XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithoutAuth(HttpCallResponseBodyType httpCallResponseBodyType)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		XboxLiveHttpCallResponse xboxLiveHttpCallResponse{ nullptr };

		co_return xboxLiveHttpCallResponse;
    }

    void XboxLiveHttpCall::SetRequestBody(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void XboxLiveHttpCall::SetRequestBodyArray(array_view<uint8_t const> requestBodyArray)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void XboxLiveHttpCall::SetCustomHeader(hstring const& headerName, hstring const& headerValue)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    bool XboxLiveHttpCall::RetryAllowed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_retryAllowed;
    }

    void XboxLiveHttpCall::RetryAllowed(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring XboxLiveHttpCall::ContentTypeHeaderValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_contentTypeHeaderValue;
    }

    void XboxLiveHttpCall::ContentTypeHeaderValue(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring XboxLiveHttpCall::ContractVersionHeaderValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_contractVersionHeaderValue;
    }

    void XboxLiveHttpCall::ContractVersionHeaderValue(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring XboxLiveHttpCall::ServerName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_serverName;
    }

    hstring XboxLiveHttpCall::PathQueryFragment()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_pathQueryFragment;
    }

    hstring XboxLiveHttpCall::HttpMethod()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_httpMethod;
    }
}