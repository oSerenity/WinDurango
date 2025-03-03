#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    TicketStatus MatchTicketDetailsResponse::MatchStatus()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchStatus;
    }

    Windows::Foundation::TimeSpan MatchTicketDetailsResponse::EstimatedWaitTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_estimatedWaitTime;
    }

    PreserveSessionMode MatchTicketDetailsResponse::PreserveSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_preserveSession;
    }

    Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TicketSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ticketSession;
    }

    Multiplayer::MultiplayerSessionReference MatchTicketDetailsResponse::TargetSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_targetSession;
    }

    hstring MatchTicketDetailsResponse::TicketAttributes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_ticketAttributes;
    }
}