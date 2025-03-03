#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerTicketStatus : GameServerTicketStatusT<GameServerTicketStatus>
    {
        GameServerTicketStatus() = default;

        hstring TicketId();
        hstring ClusterId();
        uint32_t TitleId();
        hstring HostName();
        GameServerHostStatus Status();
        hstring Description();
        hstring SecureContext();
        Windows::Foundation::Collections::IVectorView<GameServerPortMapping> PortMappings();
        hstring GameHostId();
        hstring Region();

    private:
		hstring m_ticketId{ L"" };
		hstring m_clusterId{ L"" };
		uint32_t m_titleId{ 0 };
		hstring m_hostName{ L"" };
		GameServerHostStatus m_status{ GameServerHostStatus::Unknown };
		hstring m_description{ L"" };
		hstring m_secureContext{ L"" };
        Windows::Foundation::Collections::IVectorView<GameServerPortMapping> m_portMappings = single_threaded_vector<GameServerPortMapping>().GetView();
		hstring m_gameHostId{ L"" };
		hstring m_region{ L"" };
    };
}