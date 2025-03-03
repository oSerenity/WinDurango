#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    Windows::Foundation::IAsyncOperation<TournamentRequestResult> TournamentService::GetTournamentsAsync(TournamentRequest request)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_tournamentRequestResult;
    }

    Windows::Foundation::IAsyncOperation<Tournament> TournamentService::GetTournamentDetailsAsync(hstring organizerId, hstring tournamentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_tournament;
    }

    Windows::Foundation::IAsyncOperation<TeamRequestResult> TournamentService::GetTeamsAsync(TeamRequest request)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_teamRequestResult;
    }

    Windows::Foundation::IAsyncOperation<TeamInfo> TournamentService::GetTeamDetailsAsync(hstring organizerId, hstring tournamentId, hstring teamId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_teamInfo;
    }

    event_token TournamentService::TeamChanged(Windows::Foundation::EventHandler<TeamChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_teamChangedToken;
    }

    void TournamentService::TeamChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_teamChangedToken = __param0;
    }

    TeamChangeSubscription TournamentService::SubscribeToTeamChange(hstring const& organizerId, hstring const& tournamentId, hstring const& teamId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamChangeSubscription;
    }

    void TournamentService::UnsubscribeFromTeamChange(TeamChangeSubscription const& subscription)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_teamChangeSubscription = subscription;
    }
}