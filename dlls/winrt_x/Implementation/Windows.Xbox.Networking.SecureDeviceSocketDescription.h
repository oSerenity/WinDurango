#pragma once
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceSocketDescription : SecureDeviceSocketDescriptionT<SecureDeviceSocketDescription>
    {
        SecureDeviceSocketDescription() = default;

        hstring Name();
        SecureIpProtocol IpProtocol();
        uint16_t BoundPortRangeLower();
        uint16_t BoundPortRangeUpper();
        SecureDeviceSocketUsage AllowedUsages();

    private:
		hstring m_name{ L"SecureDeviceSocketDescription" };
		SecureIpProtocol m_ipProtocol{ SecureIpProtocol::Tcp };
		uint16_t m_boundPortRangeLower{ 0 };
		uint16_t m_boundPortRangeUpper{ 0 };
		SecureDeviceSocketUsage m_allowedUsages{ SecureDeviceSocketUsage::Accept };
    };
}