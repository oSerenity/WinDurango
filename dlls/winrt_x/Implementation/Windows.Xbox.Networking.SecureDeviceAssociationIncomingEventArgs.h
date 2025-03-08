#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationIncomingEventArgs : SecureDeviceAssociationIncomingEventArgsT<SecureDeviceAssociationIncomingEventArgs>
    {
        SecureDeviceAssociationIncomingEventArgs() = default;

        SecureDeviceAssociation Association();

    private:
		SecureDeviceAssociation m_association{ nullptr };
    };
}