#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct AllocationResult : AllocationResultT<AllocationResult>
    {
        AllocationResult() = default;

        GameServerFulfillmentState FulfillmentState();
        hstring HostName();
        hstring SessionHostId();
        hstring Region();
        Windows::Foundation::Collections::IVectorView<GameServerPortMapping> PortMappings();
        hstring SecureDeviceAddress();

    private:
		GameServerFulfillmentState m_fulfillmentState = GameServerFulfillmentState::Unknown;
		hstring m_hostName{ L"" };
		hstring m_sessionHostId{ L"" };
		hstring m_region{ L"" };
		Windows::Foundation::Collections::IVectorView<GameServerPortMapping> m_portMappings = single_threaded_vector<GameServerPortMapping>().GetView();
		hstring m_secureDeviceAddress{ L"" };
    };
}