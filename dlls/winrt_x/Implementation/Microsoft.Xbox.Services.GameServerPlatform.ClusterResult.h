#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct ClusterResult : ClusterResultT<ClusterResult>
    {
        ClusterResult() = default;

        Windows::Foundation::TimeSpan PollInterval();
        GameServerFulfillmentState FulfillmentState();
        hstring HostName();
        hstring Region();
        Windows::Foundation::Collections::IVectorView<GameServerPortMapping> PortMappings();
        hstring SecureDeviceAddress();

    private:
		Windows::Foundation::TimeSpan m_pollInterval{ 0 };
		GameServerFulfillmentState m_fulfillmentState{ GameServerFulfillmentState::Unknown };
        hstring m_hostName{ L"" };
        hstring m_region{ L"" };
		Windows::Foundation::Collections::IVectorView<GameServerPortMapping> m_portMappings = single_threaded_vector<GameServerPortMapping>().GetView();
		hstring m_secureDeviceAddress{ L"" };
    };
}