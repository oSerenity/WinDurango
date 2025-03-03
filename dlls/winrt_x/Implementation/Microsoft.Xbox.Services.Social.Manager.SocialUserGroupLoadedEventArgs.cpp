#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialUserGroupLoadedEventArgs.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialUserGroupLoadedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    XboxSocialUserGroup SocialUserGroupLoadedEventArgs::SocialUserGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialUserGroup;
    }
}