#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession>
    {
        MultiplayerSession() = default;

        MultiplayerSession(XboxLiveContext const& xboxLiveContext);
        MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
        MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
        MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference);
        static MultiplayerSessionChangeTypes CompareMultiplayerSessions(Multiplayer::MultiplayerSession const& currentSession, Multiplayer::MultiplayerSession const& oldSession);
        static WriteSessionStatus ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode);
        hstring MultiplayerCorrelationId();
        hstring SearchHandleId();
        Tournaments::TournamentArbitrationStatus ArbitrationStatus();
        Windows::Foundation::DateTime StartTime();
        Windows::Foundation::DateTime DateOfNextTimer();
        Windows::Foundation::DateTime DateOfSession();
        MultiplayerInitializationStage InitializationStage();
        Windows::Foundation::DateTime InitializingStageStartTime();
        uint32_t InitializingEpisode();
        WriteSessionStatus WriteStatus();
        Windows::Foundation::Collections::IVectorView<hstring> HostCandidates();
        MultiplayerSessionReference SessionReference();
        MultiplayerSessionConstants SessionConstants();
        MultiplayerSessionProperties SessionProperties();
        MultiplayerSessionRoleTypes SessionRoleTypes();
        Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> Members();
        MultiplayerSessionMatchmakingServer MatchmakingServer();
        MultiplayerSessionTournamentsServer TournamentsServer();
        MultiplayerSessionArbitrationServer ArbitrationServer();
        uint32_t MembersAccepted();
        hstring ServersJson();
        void ServersJson(hstring const& value);
        hstring ETag();
        MultiplayerSessionChangeTypes SubscribedChangeTypes();
        MultiplayerSessionMember CurrentUser();
        hstring Branch();
        uint64_t ChangeNumber();
        void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson);
        void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested);
        MultiplayerSessionMember Join();
        MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson);
        MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested);
        MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus);
        void SetVisibility(MultiplayerSessionVisibility const& visibility);
        void SetMaxMembersInSession(uint32_t maxMembersInSession);
        void SetMutableRoleSettings(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> const& roleTypes);
        void SetTimeouts(Windows::Foundation::TimeSpan const& memberReservedTimeout, Windows::Foundation::TimeSpan const& memberInactiveTimeout, Windows::Foundation::TimeSpan const& memberReadyTimeout, Windows::Foundation::TimeSpan const& sessionEmptyTimeout);
        void SetArbitrationTimeouts(Windows::Foundation::TimeSpan const& arbitrationTimeout, Windows::Foundation::TimeSpan const& forfeitTimeout);
        void SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric);
        void SetManagedInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
        void SetMemberInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
        void SetPeerToPeerRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond);
        void SetPeerToHostRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, MultiplayMetrics const& hostSelectionMetric);
        void SetMeasurementServerAddresses(Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses);
        void SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson);
        void SetSessionCapabilities(MultiplayerSessionCapabilities const& capabilities);
        void SetInitializationStatus(bool initializationSucceeded);
        void SetHostDeviceToken(hstring const& hostDeviceToken);
        void SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath);
        void SetClosed(bool closed);
        void SetLocked(bool locked);
        void SetAllocateCloudCompute(bool allocateCloudCompute);
        void SetMatchmakingResubmit(bool matchResubmit);
        void SetServerConnectionStringCandidates(Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates);
        void SetSessionChangeSubscription(MultiplayerSessionChangeTypes const& changeTypes);
        void Leave();
        void SetCurrentUserStatus(MultiplayerSessionMemberStatus const& status);
        void SetCurrentUserSecureDeviceAddressBase64(hstring const& value);
        void SetCurrentUserRoleInfo(Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles);
        void SetCurrentUserMembersInGroup(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& membersInGroup);
        void SetCurrentUserQualityOfServiceMeasurements(Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements);
        void SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson);
        void SetCurrentUserArbitrationResults(Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> const& results);
        void SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson);
        void DeleteCurrentUserMemberCustomPropertyJson(hstring const& name);
        void SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants);
        void SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson);
        void DeleteSessionCustomPropertyJson(hstring const& name);
        void _Init(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);

    private:
		XboxLiveContext m_xboxLiveContext{ nullptr };
		MultiplayerSessionReference m_multiplayerSessionReference{ nullptr };
		uint32_t m_maxMembersInSession{ 0 };
		bool m_reserved{ false };
		MultiplayerSessionVisibility m_multiplayerSessionVisibility{ MultiplayerSessionVisibility::Private };
		Windows::Foundation::Collections::IVectorView<hstring> m_initiatorXboxUserIds{ single_threaded_vector<hstring>().GetView() };
        hstring m_sessionCustomConstantsJson{ L"" };
        hstring m_correlationId{ L"" };
		hstring m_searchHandleId{ L"" };
		Tournaments::TournamentArbitrationStatus m_arbitrationStatus{ Tournaments::TournamentArbitrationStatus::Complete };
        Windows::Foundation::DateTime m_startTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_dateOfNextTimer{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_dateOfSession{ Windows::Foundation::DateTime::clock::now() };
		MultiplayerInitializationStage m_initializationStage{ MultiplayerInitializationStage::None };
		Windows::Foundation::DateTime m_initializingStartTime{ Windows::Foundation::DateTime::clock::now() };
		uint32_t m_initializingEpisode{ 0 };
		WriteSessionStatus m_writeStatus{ WriteSessionStatus::AccessDenied };
		Windows::Foundation::Collections::IVectorView<hstring> m_hostCandidates{ single_threaded_vector<hstring>().GetView() };
		MultiplayerSessionConstants m_sessionConstants{ nullptr };
		MultiplayerSessionProperties m_sessionProperties{ nullptr };
		MultiplayerSessionRoleTypes m_sessionRoleTypes{ nullptr };
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_members{ single_threaded_vector<MultiplayerSessionMember>().GetView() };
		MultiplayerSessionMatchmakingServer m_matchmakingServer{ nullptr };
		MultiplayerSessionTournamentsServer m_tournamentsServer{ nullptr };
		MultiplayerSessionArbitrationServer m_arbitrationServer{ nullptr };
		uint32_t m_membersAccepted{ 0 };
		hstring m_serversJson{ L"" };
		hstring m_eTag{ L"" };
		MultiplayerSessionChangeTypes m_subscribedChangeTypes{ MultiplayerSessionChangeTypes::None };
		MultiplayerSessionMember m_currentUser{ nullptr };
		hstring m_branch{ L"" };
		uint64_t m_changeNumber{ 0 };
		MultiplayerSessionMember m_joiningMember{ nullptr };
		MultiplayerSessionVisibility m_visibility{ MultiplayerSessionVisibility::Private };
		Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> m_roleTypes = single_threaded_map<hstring, MultiplayerRoleType>().GetView();
		Windows::Foundation::TimeSpan m_memberReservedTimeout{ 0 };
		Windows::Foundation::TimeSpan m_memberInactiveTimeout{ 0 };
		Windows::Foundation::TimeSpan m_memberReadyTimeout{ 0 };
		Windows::Foundation::TimeSpan m_sessionEmptyTimeout{ 0 };
		Windows::Foundation::TimeSpan m_arbitrationTimeout{ 0 };
		Windows::Foundation::TimeSpan m_forfeitTimeout{ 0 };
		bool m_enableLatencyMetric{ false };
		bool m_enableBandwidthDownMetric{ false };
		bool m_enableBandwidthUpMetric{ false };
		bool m_enableCustomMetric{ false };
		Windows::Foundation::TimeSpan m_joinTimeout{ 0 };
		Windows::Foundation::TimeSpan m_measurementTimeout{ 0 };
		Windows::Foundation::TimeSpan m_evaluationTimeout{ 0 };
		bool m_autoEvalute{ false };
		uint32_t m_membersNeededToStart{ 0 };
		Windows::Foundation::TimeSpan m_latencyMaximum{ 0 };
		uint32_t m_bandwidthMinimumInKilobitsPerSecond{ 0 };
		uint32_t m_bandwidthDownMinimumInKilobitsPerSecond{ 0 };
		uint32_t m_bandwidthUpMinimumInKilobitsPerSecond{ 0 };
		MultiplayMetrics m_hostSelectionMetric{ MultiplayMetrics::Bandwidth };
		Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> m_measurementServerAddresses{ single_threaded_vector<GameServerPlatform::QualityOfServiceServer>().GetView() };
		hstring m_sessionCloudComputePackageConstantsJson{ L"" };
		MultiplayerSessionCapabilities m_capabilities{ nullptr };
		bool m_initializationSucceeded{ false };
    	hstring m_hostDeviceToken{ L"" };
		hstring m_serverConnectionPath{ L"" };
		bool m_closed{ false };
		bool m_locked{ false };
		bool m_allocateCloudCompute{ false };
		bool m_matchResubmit{ false };
		Windows::Foundation::Collections::IVectorView<hstring> m_serverConnectionStringCandidates{ single_threaded_vector<hstring>().GetView() };
		MultiplayerSessionChangeTypes m_changeTypes{ MultiplayerSessionChangeTypes::None };
        MultiplayerSessionMemberStatus m_status{ MultiplayerSessionMemberStatus::Active };
		MultiplayerSessionMemberStatus m_currentUserStatus{ MultiplayerSessionMemberStatus::Active };
		hstring m_currentUserSecureDeviceAddressBase64{ L"" };
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_currentUserRoleInfo = single_threaded_map<hstring, hstring>().GetView();
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_currentUserMembersInGroup{ single_threaded_vector<MultiplayerSessionMember>().GetView() };
		Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> m_currentUserQualityOfServiceMeasurements{ single_threaded_vector<MultiplayerQualityOfServiceMeasurements>().GetView() };
		hstring m_currentUserQualityOfServiceServerMeasurementsJson{ L"" };
		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> m_currentUserArbitrationResults = single_threaded_map<hstring, Tournaments::TournamentTeamResult>().GetView();
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_currentUserMemberCustomProperties = single_threaded_map<hstring, hstring>().GetView();
		hstring m_matchmakingTargetSessionConstantsJson{ L"" };
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_sessionCustomProperties = single_threaded_map<hstring, hstring>().GetView();
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_roles = single_threaded_map<hstring, hstring>().GetView();
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_membersInGroup = single_threaded_vector<MultiplayerSessionMember>().GetView();
		Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> m_measurements = single_threaded_vector<MultiplayerQualityOfServiceMeasurements>().GetView();
		hstring m_qualityOfServiceServerMeasurementsJson{ L"" };
		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> m_arbitrationResults = single_threaded_map<hstring, Tournaments::TournamentTeamResult>().GetView();
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession, implementation::MultiplayerSession>
    {
    };
}