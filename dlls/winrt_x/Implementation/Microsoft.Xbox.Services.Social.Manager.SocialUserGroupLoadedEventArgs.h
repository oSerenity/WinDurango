#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialUserGroupLoadedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialUserGroupLoadedEventArgs : SocialUserGroupLoadedEventArgsT<SocialUserGroupLoadedEventArgs>
    {
        SocialUserGroupLoadedEventArgs() = default;

        XboxSocialUserGroup SocialUserGroup();

    private:
		XboxSocialUserGroup m_socialUserGroup{ nullptr };
    };
}