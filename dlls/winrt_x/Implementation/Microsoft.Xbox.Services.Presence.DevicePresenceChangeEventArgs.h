#pragma once
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct DevicePresenceChangeEventArgs : DevicePresenceChangeEventArgsT<DevicePresenceChangeEventArgs>
    {
        DevicePresenceChangeEventArgs() = default;

        hstring XboxUserId();
        PresenceDeviceType DeviceType();
        bool IsUserLoggedOnDevice();

    private:
        hstring m_xboxUserId{ L"" };
        PresenceDeviceType m_deviceType{ PresenceDeviceType::PC };
		bool m_isUserLoggedOnDevice{ false };
    };
}