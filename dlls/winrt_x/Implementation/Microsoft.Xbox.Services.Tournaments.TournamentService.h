#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentService : TournamentServiceT<TournamentService>
    {
        TournamentService() = default;

        Windows::Foundation::IAsyncOperation<TournamentRequestResult> GetTournamentsAsync(TournamentRequest request);
        Windows::Foundation::IAsyncOperation<Tournament> GetTournamentDetailsAsync(hstring organizerId, hstring tournamentId);
        Windows::Foundation::IAsyncOperation<TeamRequestResult> GetTeamsAsync(TeamRequest request);
        Windows::Foundation::IAsyncOperation<TeamInfo> GetTeamDetailsAsync(hstring organizerId, hstring tournamentId, hstring teamId);
        event_token TeamChanged(Windows::Foundation::EventHandler<TeamChangeEventArgs> const& __param0);
        void TeamChanged(event_token const& __param0) noexcept;
        TeamChangeSubscription SubscribeToTeamChange(hstring const& organizerId, hstring const& tournamentId, hstring const& teamId);
        void UnsubscribeFromTeamChange(TeamChangeSubscription const& subscription);

    private:
        TournamentRequestResult m_tournamentRequestResult{ nullptr };
		Tournament m_tournament{ nullptr };
		TeamRequestResult m_teamRequestResult{ nullptr };
		TeamInfo m_teamInfo{ nullptr };
		event_token m_teamChangedToken;
		Windows::Foundation::Collections::IVectorView<TeamChangeSubscription> m_teamChangeSubscriptions{ single_threaded_vector<TeamChangeSubscription>().GetView() };
		TeamChangeSubscription m_teamChangeSubscription{ nullptr };
    };
}