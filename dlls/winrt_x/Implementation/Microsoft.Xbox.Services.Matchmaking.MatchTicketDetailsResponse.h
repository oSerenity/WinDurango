#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.MatchTicketDetailsResponse.g.h"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct MatchTicketDetailsResponse : MatchTicketDetailsResponseT<MatchTicketDetailsResponse>
    {
        MatchTicketDetailsResponse() = default;

        TicketStatus MatchStatus();
        Windows::Foundation::TimeSpan EstimatedWaitTime();
        PreserveSessionMode PreserveSession();
        Multiplayer::MultiplayerSessionReference TicketSession();
        Multiplayer::MultiplayerSessionReference TargetSession();
        hstring TicketAttributes();

    private:
		TicketStatus m_matchStatus{ TicketStatus::Unknown };
		Windows::Foundation::TimeSpan m_estimatedWaitTime{ 0 };
		PreserveSessionMode m_preserveSession{ PreserveSessionMode::Unknown };
		Multiplayer::MultiplayerSessionReference m_ticketSession{ nullptr };
		Multiplayer::MultiplayerSessionReference m_targetSession{ nullptr };
        hstring m_ticketAttributes{ L"" };
    };
}