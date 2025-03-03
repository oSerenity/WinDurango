#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    Windows::Foundation::TimeSpan ClusterResult::PollInterval()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_pollInterval;
    }

    GameServerFulfillmentState ClusterResult::FulfillmentState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_fulfillmentState;
    }

    hstring ClusterResult::HostName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostName;
    }

    hstring ClusterResult::Region()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_region;
    }

    Windows::Foundation::Collections::IVectorView<GameServerPortMapping> ClusterResult::PortMappings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_portMappings;
    }

    hstring ClusterResult::SecureDeviceAddress()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceAddress;
    }
}