#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerLobbySession.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring MultiplayerLobbySession::CorrelationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_correlationId;
    }

    MultiplayerSessionReference MultiplayerLobbySession::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionReference;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerMember> MultiplayerLobbySession::LocalMembers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_localMembers;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerMember> MultiplayerLobbySession::Members()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_members;
    }

    MultiplayerMember MultiplayerLobbySession::Host()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_host;
    }

    hstring MultiplayerLobbySession::Properties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_properties;
    }

    MultiplayerSessionConstants MultiplayerLobbySession::SessionConstants()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionConstants;
    }

    Tournaments::TournamentTeamResult MultiplayerLobbySession::LastTournamentTeamResult()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_lastTournamentTeamResult;
    }

    void MultiplayerLobbySession::AddLocalUser(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::RemoveLocalUser(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::SetLocalMemberProperties(Windows::Xbox::System::User const& user, hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::DeleteLocalMemberProperties(Windows::Xbox::System::User const& user, hstring const& name, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::SetLocalMemberConnectionAddress(Windows::Xbox::System::User const& user, hstring const& connectionAddress, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    bool MultiplayerLobbySession::IsHost(hstring const& xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isHost;
    }

    void MultiplayerLobbySession::SetProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::SetSynchronizedProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::SetSynchronizedHost(MultiplayerMember const& gameHost, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::InviteFriends(Windows::Xbox::System::User const& user, hstring const& contextStringId, hstring const& customActivationContext)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerLobbySession::InviteUsers(Windows::Xbox::System::User const& user, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds, hstring const& contextStringId, hstring const& customActivationContext)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}