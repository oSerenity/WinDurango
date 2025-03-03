#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    Windows::Foundation::IAsyncOperation<CreateMatchTicketResponse> MatchmakingService::CreateMatchTicketAsync(Multiplayer::MultiplayerSessionReference ticketSessionReference, hstring matchmakingServiceConfigurationId, hstring hopperName, Windows::Foundation::TimeSpan ticketTimeout, PreserveSessionMode preserveSession, hstring ticketAttributesJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_createMatchTicketResponse;
    }

    Windows::Foundation::IAsyncAction MatchmakingService::DeleteMatchTicketAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return;
    }

    Windows::Foundation::IAsyncOperation<MatchTicketDetailsResponse> MatchmakingService::GetMatchTicketDetailsAsync(hstring serviceConfigurationId, hstring hopperName, hstring ticketId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_matchTicketDetailsResponse;
    }

    Windows::Foundation::IAsyncOperation<HopperStatisticsResponse> MatchmakingService::GetHopperStatisticsAsync(hstring serviceConfigurationId, hstring hopperName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_hopperStatisticsResponse;
    }
}