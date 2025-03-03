#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.g.h"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct MatchmakingService : MatchmakingServiceT<MatchmakingService>
    {
        MatchmakingService() = default;

        Windows::Foundation::IAsyncOperation<CreateMatchTicketResponse> CreateMatchTicketAsync(Multiplayer::MultiplayerSessionReference ticketSessionReference, hstring matchmakingServiceConfigurationId, hstring hopperName, Windows::Foundation::TimeSpan ticketTimeout, PreserveSessionMode preserveSession, hstring ticketAttributesJson);
        Windows::Foundation::IAsyncAction DeleteMatchTicketAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId);
        Windows::Foundation::IAsyncOperation<MatchTicketDetailsResponse> GetMatchTicketDetailsAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId);
        Windows::Foundation::IAsyncOperation<HopperStatisticsResponse> GetHopperStatisticsAsync(hstring serviceConfigurationId, hstring hopperName);

    private:
		CreateMatchTicketResponse m_createMatchTicketResponse{ nullptr };
		MatchTicketDetailsResponse m_matchTicketDetailsResponse{ nullptr };
		HopperStatisticsResponse m_hopperStatisticsResponse{ nullptr };
    };
}