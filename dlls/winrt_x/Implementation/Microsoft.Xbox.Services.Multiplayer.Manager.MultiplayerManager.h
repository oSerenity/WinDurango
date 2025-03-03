#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerManager : MultiplayerManagerT<MultiplayerManager>
    {
        MultiplayerManager() = default;

        static Manager::MultiplayerManager SingletonInstance();
        void Initialize(hstring const& lobbySessionTemplateName);
        void FindMatch(hstring const& hopperName, hstring const& attributes, Windows::Foundation::TimeSpan const& timeout);
        void CancelMatch();
        void JoinLobby(hstring const& handleId, Windows::Xbox::System::User const& user);
        void JoinLobby(hstring const& handleId, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> const& users);
        void JoinLobby(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User> const& users);
        void JoinLobby(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, Windows::Xbox::System::User const& user);
        void InvitePartyToGame();
        void JoinGameFromLobby(hstring const& sessionTemplateName);
        void JoinGame(hstring const& sessionName, hstring const& sessionTemplateName);
        void JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds);
        void LeaveGame();
        Windows::Foundation::Collections::IVectorView<MultiplayerEvent> DoWork();
        MatchStatus MatchStatus();
        Windows::Foundation::TimeSpan EstimatedMatchWaitTime();
        MultiplayerLobbySession LobbySession();
        MultiplayerGameSession GameSession();
        Joinability Joinability();
        void SetJoinInProgress(Manager::Joinability const& value);
        bool AutoFillMembersDuringMatchmaking();
        void AutoFillMembersDuringMatchmaking(bool value);
        void SetQualityOfServiceMeasurements(Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements);

    private:
        Windows::Foundation::Collections::IVectorView<MultiplayerEvent> m_doWork = single_threaded_vector<MultiplayerEvent>().GetView();
		Manager::MatchStatus m_matchStatus = MatchStatus::None;
		Windows::Foundation::TimeSpan m_estimatedMatchWaitTime = Windows::Foundation::TimeSpan();
		MultiplayerLobbySession m_lobbySession = nullptr;
		MultiplayerGameSession m_gameSession = nullptr;
		Manager::Joinability m_joinability = Joinability::None;
		bool m_autoFillMembersDuringMatchmaking = false;
		Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> m_qualityOfServiceMeasurements = single_threaded_vector<MultiplayerQualityOfServiceMeasurements>().GetView();
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::factory_implementation
{
    struct MultiplayerManager : MultiplayerManagerT<MultiplayerManager, implementation::MultiplayerManager>
    {
    };
}