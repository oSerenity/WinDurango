#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct XboxSocialUserGroup : XboxSocialUserGroupT<XboxSocialUserGroup>
    {
        XboxSocialUserGroup() = default;

        Windows::Foundation::Collections::IVectorView<XboxSocialUser> Users();
        SocialUserGroupType SocialUserGroupType();
        Windows::Foundation::Collections::IVectorView<hstring> UsersTrackedBySocialUserGroup();
        Windows::Xbox::System::User LocalUser();
        PresenceFilter PresenceFilterOfGroup();
        RelationshipFilter RelationshipFilterOfGroup();
        Windows::Foundation::Collections::IVectorView<XboxSocialUser> GetUsersFromXboxUserIds(Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds);

    private:
		Windows::Foundation::Collections::IVectorView<XboxSocialUser> m_users{ single_threaded_vector<XboxSocialUser>().GetView() };
		Manager::SocialUserGroupType m_socialUserGroupType{ SocialUserGroupType::FilterType };
		Windows::Foundation::Collections::IVectorView<hstring> m_usersTrackedBySocialUserGroup{ single_threaded_vector<hstring>().GetView() };
		Windows::Xbox::System::User m_localUser{ nullptr };
		PresenceFilter m_presenceFilterOfGroup{ PresenceFilter::All };
		RelationshipFilter m_relationshipFilterOfGroup{ RelationshipFilter::Friends };
		Windows::Foundation::Collections::IVectorView<XboxSocialUser> m_getUsersFromXboxUserIds{ single_threaded_vector<XboxSocialUser>().GetView() };
    };
}