#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerGameSession.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring MultiplayerGameSession::CorrelationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_correlationId;
    }

    MultiplayerSessionReference MultiplayerGameSession::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionReference;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerMember> MultiplayerGameSession::Members()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_members;
    }

    MultiplayerMember MultiplayerGameSession::Host()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_host;
    }

    hstring MultiplayerGameSession::Properties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_properties;
    }

    MultiplayerSessionConstants MultiplayerGameSession::SessionConstants()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionConstants;
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> MultiplayerGameSession::TournamentTeams()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentTeams;
    }

    Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> MultiplayerGameSession::TournamentTeamResults()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentTeamResults;
    }

    bool MultiplayerGameSession::IsHost(hstring const& xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isHost;
    }

    void MultiplayerGameSession::SetProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerGameSession::SetSynchronizedProperties(hstring const& name, hstring const& valueJson, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerGameSession::SetSynchronizedHost(MultiplayerMember const& gameHost, Windows::Foundation::IInspectable const& context)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}