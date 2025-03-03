#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUser.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct XboxSocialUser : XboxSocialUserT<XboxSocialUser>
    {
        XboxSocialUser() = default;

        hstring XboxUserId();
        bool IsFavorite();
        bool IsFollowingUser();
        bool IsFollowedByCaller();
        hstring DisplayName();
        hstring RealName();
        hstring DisplayPicUrlRaw();
        bool UseAvatar();
        hstring Gamertag();
        hstring Gamerscore();
        SocialManagerPresenceRecord PresenceRecord();
        TitleHistory TitleHistory();
        PreferredColor PreferredColor();

    private:
		hstring m_xboxUserId{ L"XboxUserId" };
		bool m_isFavorite{ false };
		bool m_isFollowingUser{ false };
		bool m_isFollowedByCaller{ false };
		hstring m_displayName{ L"DisplayName" };
		hstring m_realName{ L"RealName" };
		hstring m_displayPicUrlRaw{ L"DisplayPicUrlRaw" };
		bool m_useAvatar{ false };
		hstring m_gamertag{ L"Gamertag" };
		hstring m_gamerscore{ L"Gamerscore" };
		SocialManagerPresenceRecord m_presenceRecord{ nullptr };
		Manager::TitleHistory m_titleHistory{ nullptr };
		Manager::PreferredColor m_preferredColor{ nullptr };
    };
}