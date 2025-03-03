#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionTournamentsServer : MultiplayerSessionTournamentsServerT<MultiplayerSessionTournamentsServer>
    {
        MultiplayerSessionTournamentsServer() = default;

        Tournaments::TournamentReference TournamentReference();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> Teams();
        Tournaments::TournamentRegistrationState RegistrationState();
        Tournaments::TournamentRegistrationReason RegistrationReason();
        Windows::Foundation::DateTime NextGameStartTime();
        MultiplayerSessionReference NextGameSessionRef();
        Windows::Foundation::DateTime LastGameEndTime();
        Tournaments::TournamentTeamResult LastTeamResult();
        Tournaments::TournamentGameResultSource LastGameResultSource();

    private:
		Tournaments::TournamentReference m_tournamentReference{ nullptr };
		Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> m_teams{ nullptr };
		Tournaments::TournamentRegistrationState m_registrationState{ Tournaments::TournamentRegistrationState::Unknown };
		Tournaments::TournamentRegistrationReason m_registrationReason{ Tournaments::TournamentRegistrationReason::Unknown };
		Windows::Foundation::DateTime m_nextGameStartTime{ Windows::Foundation::DateTime::clock::now()};
		MultiplayerSessionReference m_nextGameSessionRef{ nullptr };
		Windows::Foundation::DateTime m_lastGameEndTime{ Windows::Foundation::DateTime::clock::now() };
		Tournaments::TournamentTeamResult m_lastTeamResult{ nullptr };
		Tournaments::TournamentGameResultSource m_lastGameResultSource{ Tournaments::TournamentGameResultSource::Adjusted };
    };
}