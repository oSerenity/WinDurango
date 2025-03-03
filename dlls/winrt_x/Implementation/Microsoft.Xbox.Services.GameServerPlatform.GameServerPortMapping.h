#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerPortMapping : GameServerPortMappingT<GameServerPortMapping>
    {
        GameServerPortMapping() = default;

        hstring PortName();
        uint32_t InternalPortNumber();
        uint32_t ExternalPortNumber();

    private:
		hstring m_portName{ L"" };
		uint32_t m_internalPortNumber{ 0 };
		uint32_t m_externalPortNumber{ 0 };
    };
}