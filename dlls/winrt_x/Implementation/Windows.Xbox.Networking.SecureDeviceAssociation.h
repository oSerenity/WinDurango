#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociation.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociation : SecureDeviceAssociationT<SecureDeviceAssociation>
    {
        SecureDeviceAssociation() = default;

        static Networking::SecureDeviceAssociation GetAssociationBySocketAddressBytes(array_view<uint8_t const> remoteSocketAddressBytes, array_view<uint8_t const> localSocketAddressBytes);
        static Networking::SecureDeviceAssociation GetAssociationByHostNamesAndPorts(Windows::Networking::HostName const& remoteHostName, hstring const& remotePort, Windows::Networking::HostName const& localHostName, hstring const& localPort);
        event_token StateChanged(Foundation::TypedEventHandler<Networking::SecureDeviceAssociation, SecureDeviceAssociationStateChangedEventArgs> const& handler);
        void StateChanged(event_token const& token) noexcept;
        Foundation::IAsyncAction DestroyAsync();
        void GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddressBytes);
        void GetLocalSocketAddressBytes(array_view<uint8_t> socketAddressBytes);
        SecureDeviceAssociationState State();
        SecureDeviceAssociationTemplate Template();
        SecureDeviceAddress RemoteSecureDeviceAddress();
        Windows::Networking::HostName RemoteHostName();
        hstring RemotePort();
        Windows::Networking::HostName LocalHostName();
        hstring LocalPort();

    private:
		static inline Networking::SecureDeviceAssociation m_association{ nullptr };
		static inline SecureDeviceAssociationStateChangedEventArgs m_stateChangedArgs{ nullptr };
		event<Foundation::TypedEventHandler<Networking::SecureDeviceAssociation, SecureDeviceAssociationStateChangedEventArgs>> m_stateChangedEvent;
		SecureDeviceAssociationState m_state{ SecureDeviceAssociationState::Ready };
		SecureDeviceAssociationTemplate m_template{ nullptr };
		SecureDeviceAddress m_remoteSecureDeviceAddress{ nullptr };
		Windows::Networking::HostName m_remoteHostName{ nullptr };
        hstring m_remotePort{ L"" };
		Windows::Networking::HostName m_localHostName{ nullptr };
		hstring m_localPort{ L"" };
    };
}

namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct SecureDeviceAssociation : SecureDeviceAssociationT<SecureDeviceAssociation, implementation::SecureDeviceAssociation>
    {
    };
}