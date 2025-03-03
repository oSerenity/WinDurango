#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring DevicePresenceChangeEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    PresenceDeviceType DevicePresenceChangeEventArgs::DeviceType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_deviceType;
    }

    bool DevicePresenceChangeEventArgs::IsUserLoggedOnDevice()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isUserLoggedOnDevice;
    }
}
