#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxUserProfile.h"
#include "Microsoft.Xbox.Services.Social.XboxUserProfile.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxUserProfile::ApplicationDisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_applicationDisplayName;
    }

    Windows::Foundation::Uri XboxUserProfile::ApplicationDisplayPictureResizeUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_applicationDisplayPictureResizeUri;
    }

    hstring XboxUserProfile::GameDisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameDisplayName;
    }

    Windows::Foundation::Uri XboxUserProfile::GameDisplayPictureResizeUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameDisplayPictureResizeUri;
    }

    hstring XboxUserProfile::Gamerscore()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamerscore;
    }

    hstring XboxUserProfile::Gamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gamertag;
    }

    hstring XboxUserProfile::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }
}