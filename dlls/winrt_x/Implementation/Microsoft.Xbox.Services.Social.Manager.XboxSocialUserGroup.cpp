#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    Windows::Foundation::Collections::IVectorView<XboxSocialUser> XboxSocialUserGroup::Users()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_users;
    }

    SocialUserGroupType XboxSocialUserGroup::SocialUserGroupType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialUserGroupType;
    }

    Windows::Foundation::Collections::IVectorView<hstring> XboxSocialUserGroup::UsersTrackedBySocialUserGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_usersTrackedBySocialUserGroup;
    }

    Windows::Xbox::System::User XboxSocialUserGroup::LocalUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_localUser;
    }

    PresenceFilter XboxSocialUserGroup::PresenceFilterOfGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceFilterOfGroup;
    }

    RelationshipFilter XboxSocialUserGroup::RelationshipFilterOfGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_relationshipFilterOfGroup;
    }

    Windows::Foundation::Collections::IVectorView<XboxSocialUser> XboxSocialUserGroup::GetUsersFromXboxUserIds(Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_getUsersFromXboxUserIds;
    }
}