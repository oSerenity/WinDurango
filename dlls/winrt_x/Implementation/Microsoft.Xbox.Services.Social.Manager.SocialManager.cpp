#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialManager.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    Manager::SocialManager SocialManager::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void SocialManager::AddLocalUser(Windows::Xbox::System::User const& user, SocialManagerExtraDetailLevel const& extraDetailLevel)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void SocialManager::RemoveLocalUser(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<SocialEvent> SocialManager::DoWork()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialEvents;
    }

    XboxSocialUserGroup SocialManager::CreateSocialUserGroupFromFilters(Windows::Xbox::System::User const& user, PresenceFilter const& presenceFilter, RelationshipFilter const& relationshipFilter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialUserGroup;
    }

    XboxSocialUserGroup SocialManager::CreateSocialUserGroupFromList(Windows::Xbox::System::User const& user, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIdList)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_socialUserGroup;
    }

    void SocialManager::DestroySocialUserGroup(XboxSocialUserGroup const& xboxSocialUserGroup)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> SocialManager::LocalUsers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_localUsers;
    }

    void SocialManager::UpdateSocialUserGroup(XboxSocialUserGroup const& socialGroup, Windows::Foundation::Collections::IVectorView<hstring> const& users)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void SocialManager::SetRichPresencePollingState(Windows::Xbox::System::User const& user, bool shouldEnablePolling)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_user = user;
		m_shouldEnablePolling = shouldEnablePolling;

        throw hresult_not_implemented();
    }
}