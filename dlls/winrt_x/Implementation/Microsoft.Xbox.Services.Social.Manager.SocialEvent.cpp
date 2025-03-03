#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    Windows::Xbox::System::User SocialEvent::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_user;
    }

    SocialEventType SocialEvent::EventType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventType;
    }

    Windows::Foundation::Collections::IVectorView<hstring> SocialEvent::UsersAffected()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_usersAffected;
    }

    int32_t SocialEvent::ErrorCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_errorCode;
    }

    hstring SocialEvent::ErrorMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_errorMessage;
    }

    SocialEventArgs SocialEvent::EventArgs()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eventArgs;
    }
}