#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerLobbySession : MultiplayerLobbySessionT<MultiplayerLobbySession>
    {
        MultiplayerLobbySession() = default;

        hstring CorrelationId();
        MultiplayerSessionReference SessionReference();
        Windows::Foundation::Collections::IVectorView<MultiplayerMember> LocalMembers();
        Windows::Foundation::Collections::IVectorView<MultiplayerMember> Members();
        MultiplayerMember Host();
        hstring Properties();
        MultiplayerSessionConstants SessionConstants();
        Tournaments::TournamentTeamResult LastTournamentTeamResult();
        void AddLocalUser(Windows::Xbox::System::User const& user);
        void RemoveLocalUser(Windows::Xbox::System::User const& user);
        void SetLocalMemberProperties(Windows::Xbox::System::User const& user, hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context);
        void DeleteLocalMemberProperties(Windows::Xbox::System::User const& user, hstring const& name, Windows::Foundation::IInspectable const& context);
        void SetLocalMemberConnectionAddress(Windows::Xbox::System::User const& user, hstring const& connectionAddress, Windows::Foundation::IInspectable const& context);
        bool IsHost(hstring const& xboxUserId);
        void SetProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context);
        void SetSynchronizedProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context);
        void SetSynchronizedHost(MultiplayerMember const& gameHost, Windows::Foundation::IInspectable const& context);
        void InviteFriends(Windows::Xbox::System::User const& user, hstring const& contextStringId, hstring const& customActivationContext);
        void InviteUsers(Windows::Xbox::System::User const& user, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds, hstring const& contextStringId, hstring const& customActivationContext);

    private:
        hstring m_correlationId{ L"" };
		MultiplayerSessionReference m_sessionReference{ nullptr };
		Windows::Foundation::Collections::IVectorView<MultiplayerMember> m_localMembers = single_threaded_observable_vector<MultiplayerMember>().GetView();
		Windows::Foundation::Collections::IVectorView<MultiplayerMember> m_members = single_threaded_observable_vector<MultiplayerMember>().GetView();
		MultiplayerMember m_host{ nullptr };
		hstring m_properties{ L"" };
		MultiplayerSessionConstants m_sessionConstants{ nullptr };
		Tournaments::TournamentTeamResult m_lastTournamentTeamResult{ nullptr };
		bool m_isHost{ false };
    };
}