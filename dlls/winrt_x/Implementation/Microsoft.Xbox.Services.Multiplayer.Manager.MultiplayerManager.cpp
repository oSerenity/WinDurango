#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Manager::MultiplayerManager MultiplayerManager::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerManager::Initialize(hstring const& lobbySessionTemplateName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerManager::FindMatch(hstring const& hopperName, hstring const& attributes, Windows::Foundation::TimeSpan const& timeout)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerManager::CancelMatch()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinLobby(hstring const& handleId, Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinLobby(hstring const& handleId, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> const& users)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinLobby(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> const& users)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinLobby(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::InvitePartyToGame()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinGameFromLobby(hstring const& sessionTemplateName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void MultiplayerManager::LeaveGame()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerEvent> MultiplayerManager::DoWork()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_doWork;
    }

    MatchStatus MultiplayerManager::MatchStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchStatus;
    }

    Windows::Foundation::TimeSpan MultiplayerManager::EstimatedMatchWaitTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_estimatedMatchWaitTime;
    }

    MultiplayerLobbySession MultiplayerManager::LobbySession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_lobbySession;
    }

    MultiplayerGameSession MultiplayerManager::GameSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameSession;
    }

    Joinability MultiplayerManager::Joinability()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_joinability;
    }

    void MultiplayerManager::SetJoinInProgress(Manager::Joinability const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_joinability = value;
    }

    bool MultiplayerManager::AutoFillMembersDuringMatchmaking()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_autoFillMembersDuringMatchmaking;
    }

    void MultiplayerManager::AutoFillMembersDuringMatchmaking(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_autoFillMembersDuringMatchmaking = value;
    }

    void MultiplayerManager::SetQualityOfServiceMeasurements(Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_qualityOfServiceMeasurements = measurements;
    }
}