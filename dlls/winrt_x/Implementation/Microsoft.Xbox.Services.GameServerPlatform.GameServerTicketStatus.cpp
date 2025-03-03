#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerTicketStatus::TicketId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ticketId;
    }

    hstring GameServerTicketStatus::ClusterId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_clusterId;
    }

    uint32_t GameServerTicketStatus::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    hstring GameServerTicketStatus::HostName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostName;
    }

    GameServerHostStatus GameServerTicketStatus::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_status;
    }

    hstring GameServerTicketStatus::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_description;
    }

    hstring GameServerTicketStatus::SecureContext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureContext;
    }

    Windows::Foundation::Collections::IVectorView<GameServerPortMapping> GameServerTicketStatus::PortMappings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_portMappings;
    }

    hstring GameServerTicketStatus::GameHostId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameHostId;
    }

    hstring GameServerTicketStatus::Region()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_region;
    }
}