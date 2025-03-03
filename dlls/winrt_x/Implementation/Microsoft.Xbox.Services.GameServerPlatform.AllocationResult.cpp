#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    GameServerFulfillmentState AllocationResult::FulfillmentState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_fulfillmentState;
    }

    hstring AllocationResult::HostName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostName;
    }

    hstring AllocationResult::SessionHostId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionHostId;
    }

    hstring AllocationResult::Region()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_region;
    }

    Windows::Foundation::Collections::IVectorView<GameServerPortMapping> AllocationResult::PortMappings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_portMappings;
    }

    hstring AllocationResult::SecureDeviceAddress()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_secureDeviceAddress;
    }
}