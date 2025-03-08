#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring SecureDeviceSocketDescription::Name()
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    SecureIpProtocol SecureDeviceSocketDescription::IpProtocol()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_ipProtocol;
    }

    uint16_t SecureDeviceSocketDescription::BoundPortRangeLower()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_boundPortRangeLower;
    }

    uint16_t SecureDeviceSocketDescription::BoundPortRangeUpper()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_boundPortRangeUpper;
    }

    SecureDeviceSocketUsage SecureDeviceSocketDescription::AllowedUsages()
    {
		LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_allowedUsages;
    }
}