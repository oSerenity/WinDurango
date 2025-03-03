#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUser.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUser.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    hstring XboxSocialUser::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    bool XboxSocialUser::IsFavorite()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isFavorite;
    }

    bool XboxSocialUser::IsFollowingUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isFollowingUser;
    }

    bool XboxSocialUser::IsFollowedByCaller()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isFollowedByCaller;
    }

    hstring XboxSocialUser::DisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayName;
    }

    hstring XboxSocialUser::RealName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_realName;
    }

    hstring XboxSocialUser::DisplayPicUrlRaw()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayPicUrlRaw;
    }

    bool XboxSocialUser::UseAvatar()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_useAvatar;
    }

    hstring XboxSocialUser::Gamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamertag;
    }

    hstring XboxSocialUser::Gamerscore()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamerscore;
    }

    SocialManagerPresenceRecord XboxSocialUser::PresenceRecord()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceRecord;
    }

    TitleHistory XboxSocialUser::TitleHistory()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleHistory;
    }

    PreferredColor XboxSocialUser::PreferredColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_preferredColor;
    }
}