#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring SocialRelationshipChangeEventArgs::CallerXboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_callerXboxUserId;
    }

    SocialNotificationType SocialRelationshipChangeEventArgs::SocialNotification()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialNotification;
    }

    Windows::Foundation::Collections::IVectorView<hstring> SocialRelationshipChangeEventArgs::XboxUserIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserIds;
    }
}