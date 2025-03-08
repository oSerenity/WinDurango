#include "Windows.Xbox.Networking.SecureDeviceAssociationStateChangedEventArgs.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationStateChangedEventArgs : SecureDeviceAssociationStateChangedEventArgsT<SecureDeviceAssociationStateChangedEventArgs>
    {
        SecureDeviceAssociationStateChangedEventArgs() = default;

        SecureDeviceAssociationState OldState();
        SecureDeviceAssociationState NewState();

    private:
		SecureDeviceAssociationState m_oldState{};
		SecureDeviceAssociationState m_newState{};
    };
}
