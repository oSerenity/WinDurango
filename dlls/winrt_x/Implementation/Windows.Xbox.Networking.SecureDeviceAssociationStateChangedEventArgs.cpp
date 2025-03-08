#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAssociationState SecureDeviceAssociationStateChangedEventArgs::OldState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_oldState;
    }

    SecureDeviceAssociationState SecureDeviceAssociationStateChangedEventArgs::NewState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_newState;
    }
}