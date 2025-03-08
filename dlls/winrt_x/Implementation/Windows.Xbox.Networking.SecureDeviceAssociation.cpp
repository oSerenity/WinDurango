#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociation.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationBySocketAddressBytes(array_view<uint8_t const> remoteSocketAddressBytes, array_view<uint8_t const> localSocketAddressBytes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_association;
    }

    Networking::SecureDeviceAssociation SecureDeviceAssociation::GetAssociationByHostNamesAndPorts(Windows::Networking::HostName const& remoteHostName, hstring const& remotePort, Windows::Networking::HostName const& localHostName, hstring const& localPort)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_association;
    }

    event_token SecureDeviceAssociation::StateChanged(Foundation::TypedEventHandler<Networking::SecureDeviceAssociation, SecureDeviceAssociationStateChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_stateChangedEvent.add(handler);
    }

    void SecureDeviceAssociation::StateChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stateChangedEvent.remove(token);
    }

    Foundation::IAsyncAction SecureDeviceAssociation::DestroyAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    void SecureDeviceAssociation::GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void SecureDeviceAssociation::GetLocalSocketAddressBytes(array_view<uint8_t> socketAddressBytes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    SecureDeviceAssociationState SecureDeviceAssociation::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_state;
    }

    SecureDeviceAssociationTemplate SecureDeviceAssociation::Template()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_template;
    }

    SecureDeviceAddress SecureDeviceAssociation::RemoteSecureDeviceAddress()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_remoteSecureDeviceAddress;
    }

    Windows::Networking::HostName SecureDeviceAssociation::RemoteHostName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_remoteHostName;
    }

    hstring SecureDeviceAssociation::RemotePort()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_remotePort;
    }

    Windows::Networking::HostName SecureDeviceAssociation::LocalHostName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_localHostName;
    }

    hstring SecureDeviceAssociation::LocalPort()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_localPort;
    }
}