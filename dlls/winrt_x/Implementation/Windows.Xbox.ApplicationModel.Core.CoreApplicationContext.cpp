#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Core.CoreApplicationContext.h"
#include "Windows.Xbox.ApplicationModel.Core.CoreApplicationContext.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    System::User CoreApplicationContext::CurrentUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return NULL;
    }

    System::User CoreApplicationContext::PreviousUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return NULL;
    }

    event_token CoreApplicationContext::CurrentUserChanged(Foundation::EventHandler<Foundation::IInspectable> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void CoreApplicationContext::CurrentUserChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void CoreApplicationContext::SetCurrentUser(System::User const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    System::User CoreApplicationContext::CurrentSystemUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return NULL;
    }

    event_token CoreApplicationContext::CurrentSystemUserChanged(Foundation::EventHandler<Foundation::IInspectable> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void CoreApplicationContext::CurrentSystemUserChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}