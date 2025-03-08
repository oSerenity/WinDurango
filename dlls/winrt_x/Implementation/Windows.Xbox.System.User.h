#pragma once
#include "Windows.Xbox.System.User.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct User : UserT<User>
    {
        User() = default;
        User(uint64_t id);

        static UserOnlineState OnlineState();
        static event_token OnlineStateChanged(Foundation::EventHandler<OnlineStateChangedEventArgs> const& handler);
        static void OnlineStateChanged(event_token const& token) noexcept;
        static Foundation::Collections::IVectorView<System::User> Users();
        static event_token UserAdded(Foundation::EventHandler<UserAddedEventArgs> const& handler);
        static void UserAdded(event_token const& token) noexcept;
        static event_token UserRemoved(Foundation::EventHandler<UserRemovedEventArgs> const& handler);
        static void UserRemoved(event_token const& token) noexcept;
        static System::User GetUserById(uint32_t id);
        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers);
        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body);
        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureForAllUsersAsync(hstring httpMethod, hstring url, hstring headers, hstring body);
        static event_token AudioDeviceAdded(Foundation::EventHandler<AudioDeviceAddedEventArgs> const& handler);
        static void AudioDeviceAdded(event_token const& token) noexcept;
        static event_token AudioDeviceRemoved(Foundation::EventHandler<AudioDeviceRemovedEventArgs> const& handler);
        static void AudioDeviceRemoved(event_token const& token) noexcept;
        static event_token AudioDeviceChanged(Foundation::EventHandler<AudioDeviceChangedEventArgs> const& handler);
        static void AudioDeviceChanged(event_token const& token) noexcept;
        static event_token SignInCompleted(Foundation::EventHandler<SignInCompletedEventArgs> const& handler);
        static void SignInCompleted(event_token const& token) noexcept;
        static event_token SignOutStarted(Foundation::EventHandler<SignOutStartedEventArgs> const& handler);
        static void SignOutStarted(event_token const& token) noexcept;
        static event_token SignOutCompleted(Foundation::EventHandler<SignOutCompletedEventArgs> const& handler);
        static void SignOutCompleted(event_token const& token) noexcept;
        static event_token UserDisplayInfoChanged(Foundation::EventHandler<UserDisplayInfoChangedEventArgs> const& handler);
        static void UserDisplayInfoChanged(event_token const& token) noexcept;
        static guid GetNetworkCacheIdForUsers(Foundation::Collections::IVectorView<uint32_t> const& users);
        uint32_t Id();
        Foundation::Collections::IVectorView<IAudioDeviceInfo> AudioDevices();
        Foundation::Collections::IVectorView<Input::IController> Controllers();
        UserDisplayInfo DisplayInfo();
        bool IsGuest();
        bool IsSignedIn();
        UserLocation Location();
        System::User Sponsor();
        hstring XboxUserHash();
        hstring XboxUserId();
        Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers);
        Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body);
        Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body);

    private:
		static inline auto m_onlineState{ UserOnlineState::Online };
    	static inline event<Foundation::EventHandler<UserAddedEventArgs>> m_userAddedEvent;
    	static inline event<Foundation::EventHandler<UserRemovedEventArgs>> m_userRemovedEvent;
    	static inline event<Foundation::EventHandler<OnlineStateChangedEventArgs>> m_onlineStateChangedEvent;
		static inline event<Foundation::EventHandler<AudioDeviceAddedEventArgs>> m_audioDeviceAddedEvent;
		static inline event<Foundation::EventHandler<AudioDeviceRemovedEventArgs>> m_audioDeviceRemovedEvent;
		static inline event<Foundation::EventHandler<AudioDeviceChangedEventArgs>> m_audioDeviceChangedEvent;
		static inline event<Foundation::EventHandler<SignInCompletedEventArgs>> m_signInCompletedEvent;
		static inline event<Foundation::EventHandler<SignOutStartedEventArgs>> m_signOutStartedEvent;
		static inline event<Foundation::EventHandler<SignOutCompletedEventArgs>> m_signOutCompletedEvent;
		static inline event<Foundation::EventHandler<UserDisplayInfoChangedEventArgs>> m_userDisplayInfoChangedEvent;
        static inline Foundation::Collections::IVectorView<System::User> m_users{ EMPTY_IVECTOR(System::User).GetView() };
		static inline Foundation::Collections::IVectorView<IAudioDeviceInfo> m_audioDevices{ EMPTY_IVECTOR(IAudioDeviceInfo).GetView() };
		static inline Foundation::Collections::IVectorView<Input::IController> m_controllers{ EMPTY_IVECTOR(Input::IController).GetView() };
		static inline UserDisplayInfo m_displayInfo{ nullptr };
        static inline bool m_guest{ false };
		static inline bool m_signedIn{ false };
		static inline auto m_location{ UserLocation::Local };
		static inline System::User m_sponsor{ nullptr };
        static inline hstring m_xboxUserHash{ L"XboxUserHash" };
		static inline hstring m_xboxUserId{ L"XboxUserId" };

        uint32_t m_id{ 0 };
    };
}

namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct User : UserT<User, implementation::User>
    {
    };
}
