#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialManager : SocialManagerT<SocialManager>
    {
        SocialManager() = default;

        static Manager::SocialManager SingletonInstance();
        void AddLocalUser(Windows::Xbox::System::User const& user, SocialManagerExtraDetailLevel const& extraDetailLevel);
        void RemoveLocalUser(Windows::Xbox::System::User const& user);
        Windows::Foundation::Collections::IVectorView<SocialEvent> DoWork();
        XboxSocialUserGroup CreateSocialUserGroupFromFilters(Windows::Xbox::System::User const& user, PresenceFilter const& presenceFilter, RelationshipFilter const& relationshipFilter);
        XboxSocialUserGroup CreateSocialUserGroupFromList(Windows::Xbox::System::User const& user, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIdList);
        void DestroySocialUserGroup(XboxSocialUserGroup const& xboxSocialUserGroup);
        Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> LocalUsers();
        void UpdateSocialUserGroup(XboxSocialUserGroup const& socialGroup, Windows::Foundation::Collections::IVectorView<hstring> const& users);
        void SetRichPresencePollingState(Windows::Xbox::System::User const& user, bool shouldEnablePolling);

    private:
		Windows::Foundation::Collections::IVectorView<SocialEvent> m_socialEvents{ single_threaded_vector<SocialEvent>().GetView() };
		XboxSocialUserGroup m_socialUserGroup{ nullptr };
		Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> m_localUsers{ single_threaded_vector<Windows::Xbox::System::User>().GetView() };
		Windows::Xbox::System::User m_user{ nullptr };
		bool m_shouldEnablePolling{ false };
    };
}

namespace winrt::Microsoft::Xbox::Services::Social::Manager::factory_implementation
{
    struct SocialManager : SocialManagerT<SocialManager, implementation::SocialManager>
    {

    };
}