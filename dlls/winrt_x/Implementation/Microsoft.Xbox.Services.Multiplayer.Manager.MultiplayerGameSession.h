#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerGameSession : MultiplayerGameSessionT<MultiplayerGameSession>
    {
        MultiplayerGameSession() = default;

        hstring CorrelationId();
        MultiplayerSessionReference SessionReference();
        Windows::Foundation::Collections::IVectorView<MultiplayerMember> Members();
        MultiplayerMember Host();
        hstring Properties();
        MultiplayerSessionConstants SessionConstants();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> TournamentTeams();
        Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> TournamentTeamResults();
        bool IsHost(hstring const& xboxUserId);
        void SetProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context);
        void SetSynchronizedProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context);
        void SetSynchronizedHost(MultiplayerMember const& gameHost, Windows::Foundation::IInspectable const& context);

    private:
        hstring m_correlationId{ L"" };
		MultiplayerSessionReference m_sessionReference{ nullptr };
        Windows::Foundation::Collections::IVectorView<MultiplayerMember> m_members = single_threaded_vector<MultiplayerMember>().GetView();
        MultiplayerMember m_host{ nullptr };
        hstring m_properties{ L"" };
		MultiplayerSessionConstants m_sessionConstants{ nullptr };
		Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> m_tournamentTeams = single_threaded_map<hstring, MultiplayerSessionReference>().GetView();
		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> m_tournamentTeamResults = single_threaded_map<hstring, Tournaments::TournamentTeamResult>().GetView();
		bool m_isHost{ false };
    };
}