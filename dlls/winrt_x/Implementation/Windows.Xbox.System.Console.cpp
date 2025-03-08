#include "pch.h"
#include "Windows.Xbox.System.Console.h"
#include "Windows.Xbox.System.Console.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    Foundation::IAsyncOperation<GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers)
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    hstring Console::ApplicationSpecificDeviceId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_applicationSpecificDeviceId;
    }
}