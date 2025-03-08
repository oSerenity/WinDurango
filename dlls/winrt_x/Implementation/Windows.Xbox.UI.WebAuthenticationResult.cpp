#include "pch.h"
#include "Windows.Xbox.UI.WebAuthenticationResult.h"
#include "Windows.Xbox.UI.WebAuthenticationResult.g.cpp"

namespace winrt::Windows::Xbox::UI::implementation
{
    hstring WebAuthenticationResult::ResponseData()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    WebAuthenticationStatus WebAuthenticationResult::ResponseStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint32_t WebAuthenticationResult::ResponseErrorDetail()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}