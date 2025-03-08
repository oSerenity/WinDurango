#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationIncomingEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAssociation SecureDeviceAssociationIncomingEventArgs::Association()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_association;
    }
}