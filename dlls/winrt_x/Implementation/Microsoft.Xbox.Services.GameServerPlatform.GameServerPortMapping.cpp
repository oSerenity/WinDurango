#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerPortMapping::PortName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_portName;
    }

    uint32_t GameServerPortMapping::InternalPortNumber()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_internalPortNumber;
    }

    uint32_t GameServerPortMapping::ExternalPortNumber()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_externalPortNumber;
    }
}