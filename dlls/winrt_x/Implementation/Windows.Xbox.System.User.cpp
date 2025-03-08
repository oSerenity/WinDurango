// ReSharper disable CppClangTidyPerformanceUnnecessaryValueParam
// ReSharper disable CppParameterNeverUsed
#include "pch.h"
#include "Windows.Xbox.System.User.h"
#include "Windows.Xbox.System.User.g.cpp"
#include "Windows.Xbox.System.UserDisplayInfo.h"

namespace winrt::Windows::Xbox::System::implementation
{
	User::User(uint64_t id) : m_id(id)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();
	}

    UserOnlineState User::OnlineState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_onlineState;
    }

    event_token User::OnlineStateChanged(Foundation::EventHandler<OnlineStateChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_onlineStateChangedEvent.add(handler);
    }

    void User::OnlineStateChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_onlineStateChangedEvent.remove(token);
    }

    Foundation::Collections::IVectorView<System::User> User::Users()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		// TODO: I think this might break something, but I'm not sure.

        return m_users;
    }

    event_token User::UserAdded(Foundation::EventHandler<UserAddedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_userAddedEvent.add(handler);
    }

    void User::UserAdded(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_userAddedEvent.remove(token);
    }

    event_token User::UserRemoved(Foundation::EventHandler<UserRemovedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_userRemovedEvent.add(handler);
    }

    void User::UserRemoved(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_userRemovedEvent.remove(token);
    }

    System::User User::GetUserById(uint32_t id)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_users.GetAt(id);
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers, hstring body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    event_token User::AudioDeviceAdded(Foundation::EventHandler<AudioDeviceAddedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioDeviceAddedEvent.add(handler);
    }

    void User::AudioDeviceAdded(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_audioDeviceAddedEvent.remove(token);
    }

    event_token User::AudioDeviceRemoved(Foundation::EventHandler<AudioDeviceRemovedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioDeviceRemovedEvent.add(handler);
    }

    void User::AudioDeviceRemoved(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_audioDeviceRemovedEvent.remove(token);
    }

    event_token User::AudioDeviceChanged(Foundation::EventHandler<AudioDeviceChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioDeviceChangedEvent.add(handler);
    }

    void User::AudioDeviceChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_audioDeviceChangedEvent.remove(token);
    }

    event_token User::SignInCompleted(Foundation::EventHandler<SignInCompletedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_signInCompletedEvent.add(handler);
    }

    void User::SignInCompleted(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_signInCompletedEvent.remove(token);
    }

    event_token User::SignOutStarted(Foundation::EventHandler<SignOutStartedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_signOutStartedEvent.add(handler);
    }

    void User::SignOutStarted(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_signOutStartedEvent.remove(token);
    }

    event_token User::SignOutCompleted(Foundation::EventHandler<SignOutCompletedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_signOutCompletedEvent.add(handler);
    }

    void User::SignOutCompleted(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_signOutCompletedEvent.remove(token);
    }

    event_token User::UserDisplayInfoChanged(Foundation::EventHandler<UserDisplayInfoChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_userDisplayInfoChangedEvent.add(handler);
    }

    void User::UserDisplayInfoChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_userDisplayInfoChangedEvent.remove(token);
    }

    guid User::GetNetworkCacheIdForUsers(Foundation::Collections::IVectorView<uint32_t> const& users)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint32_t User::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    Foundation::Collections::IVectorView<IAudioDeviceInfo> User::AudioDevices()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_audioDevices;
    }

    Foundation::Collections::IVectorView<Input::IController> User::Controllers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_controllers;
    }

    System::UserDisplayInfo User::DisplayInfo()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayInfo;
    }

    bool User::IsGuest()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();

        return m_guest;
    }

    bool User::IsSignedIn()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();

        return m_signedIn;
    }

    UserLocation User::Location()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_location;
    }

    System::User User::Sponsor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sponsor;
    }

    hstring User::XboxUserHash()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserHash;
    }

    hstring User::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<GetTokenAndSignatureResult> User::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }
}