#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxLiveContext = xboxLiveContext;
    }

    MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxLiveContext = xboxLiveContext;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_maxMembersInSession = maxMembersInSession;
		m_reserved = reserved;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;
    }

    MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxLiveContext = xboxLiveContext;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_maxMembersInSession = maxMembersInSession;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;
    }

    MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxLiveContext = xboxLiveContext;
		m_multiplayerSessionReference = multiplayerSessionReference;
    }

    MultiplayerSessionChangeTypes MultiplayerSession::CompareMultiplayerSessions(Multiplayer::MultiplayerSession const& currentSession, Multiplayer::MultiplayerSession const& oldSession)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    WriteSessionStatus MultiplayerSession::ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    hstring MultiplayerSession::MultiplayerCorrelationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_correlationId;
    }

    hstring MultiplayerSession::SearchHandleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_searchHandleId;
    }

    Tournaments::TournamentArbitrationStatus MultiplayerSession::ArbitrationStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_arbitrationStatus;
    }

    Windows::Foundation::DateTime MultiplayerSession::StartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_startTime;
    }

    Windows::Foundation::DateTime MultiplayerSession::DateOfNextTimer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_dateOfNextTimer;
    }

    Windows::Foundation::DateTime MultiplayerSession::DateOfSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_dateOfSession;
    }

    MultiplayerInitializationStage MultiplayerSession::InitializationStage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_initializationStage;
    }

    Windows::Foundation::DateTime MultiplayerSession::InitializingStageStartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_initializingStartTime;
    }

    uint32_t MultiplayerSession::InitializingEpisode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_initializingEpisode;
    }

    WriteSessionStatus MultiplayerSession::WriteStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_writeStatus;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSession::HostCandidates()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostCandidates;
    }

    MultiplayerSessionReference MultiplayerSession::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_multiplayerSessionReference;
    }

    MultiplayerSessionConstants MultiplayerSession::SessionConstants()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionConstants;
    }

    MultiplayerSessionProperties MultiplayerSession::SessionProperties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionProperties;
    }

    MultiplayerSessionRoleTypes MultiplayerSession::SessionRoleTypes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionRoleTypes;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> MultiplayerSession::Members()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_members;
    }

    MultiplayerSessionMatchmakingServer MultiplayerSession::MatchmakingServer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchmakingServer;
    }

    MultiplayerSessionTournamentsServer MultiplayerSession::TournamentsServer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tournamentsServer;
    }

    MultiplayerSessionArbitrationServer MultiplayerSession::ArbitrationServer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_arbitrationServer;
    }

    uint32_t MultiplayerSession::MembersAccepted()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_membersAccepted;
    }

    hstring MultiplayerSession::ServersJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serversJson;
    }

    void MultiplayerSession::ServersJson(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serversJson = value;
    }

    hstring MultiplayerSession::ETag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eTag;
    }

    MultiplayerSessionChangeTypes MultiplayerSession::SubscribedChangeTypes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_subscribedChangeTypes;
    }

    MultiplayerSessionMember MultiplayerSession::CurrentUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_currentUser;
    }

    hstring MultiplayerSession::Branch()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_branch;
    }

    uint64_t MultiplayerSession::ChangeNumber()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_changeNumber;
    }

    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

    	throw hresult_not_implemented();
    }

    MultiplayerSessionMember MultiplayerSession::Join()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joiningMember;
    }

    MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_joiningMember;
    }

    MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joiningMember;
    }

    MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joiningMember;
    }

    void MultiplayerSession::SetVisibility(MultiplayerSessionVisibility const& visibility)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_multiplayerSessionVisibility = visibility;
    }

    void MultiplayerSession::SetMaxMembersInSession(uint32_t maxMembersInSession)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxMembersInSession = maxMembersInSession;
    }

    void MultiplayerSession::SetMutableRoleSettings(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> const& roleTypes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_roleTypes = roleTypes;
    }

    void MultiplayerSession::SetTimeouts(Windows::Foundation::TimeSpan const& memberReservedTimeout, Windows::Foundation::TimeSpan const& memberInactiveTimeout, Windows::Foundation::TimeSpan const& memberReadyTimeout, Windows::Foundation::TimeSpan const& sessionEmptyTimeout)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_memberReservedTimeout = memberReservedTimeout;
		m_memberInactiveTimeout = memberInactiveTimeout;
		m_memberReadyTimeout = memberReadyTimeout;
		m_sessionEmptyTimeout = sessionEmptyTimeout;
    }

    void MultiplayerSession::SetArbitrationTimeouts(Windows::Foundation::TimeSpan const& arbitrationTimeout, Windows::Foundation::TimeSpan const& forfeitTimeout)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_arbitrationTimeout = arbitrationTimeout;
		m_forfeitTimeout = forfeitTimeout;
    }

    void MultiplayerSession::SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_enableLatencyMetric = enableLatencyMetric;
		m_enableBandwidthDownMetric = enableBandwidthDownMetric;
		m_enableBandwidthUpMetric = enableBandwidthUpMetric;
    }

    void MultiplayerSession::SetManagedInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_joinTimeout = joinTimeout;
		m_measurementTimeout = measurementTimeout;
		m_evaluationTimeout = evaluationTimeout;
		m_autoEvalute = autoEvalute;
		m_membersNeededToStart = membersNeededToStart;
    }

    void MultiplayerSession::SetMemberInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_joinTimeout = joinTimeout;
		m_measurementTimeout = measurementTimeout;
		m_evaluationTimeout = evaluationTimeout;
		m_autoEvalute = autoEvalute;
		m_membersNeededToStart = membersNeededToStart;
    }

    void MultiplayerSession::SetPeerToPeerRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_latencyMaximum = latencyMaximum;
		m_bandwidthMinimumInKilobitsPerSecond = bandwidthMinimumInKilobitsPerSecond;
    }

    void MultiplayerSession::SetPeerToHostRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, MultiplayMetrics const& hostSelectionMetric)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_latencyMaximum = latencyMaximum;
		m_bandwidthDownMinimumInKilobitsPerSecond = bandwidthDownMinimumInKilobitsPerSecond;
		m_bandwidthUpMinimumInKilobitsPerSecond = bandwidthUpMinimumInKilobitsPerSecond;
		m_hostSelectionMetric = hostSelectionMetric;
    }

    void MultiplayerSession::SetMeasurementServerAddresses(Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_measurementServerAddresses = measurementServerAddresses;
    }

    void MultiplayerSession::SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sessionCloudComputePackageConstantsJson = sessionCloudComputePackageConstantsJson;
    }

    void MultiplayerSession::SetSessionCapabilities(MultiplayerSessionCapabilities const& capabilities)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_capabilities = capabilities;
    }

    void MultiplayerSession::SetInitializationStatus(bool initializationSucceeded)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_initializationSucceeded = initializationSucceeded;
    }

    void MultiplayerSession::SetHostDeviceToken(hstring const& hostDeviceToken)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_hostDeviceToken = hostDeviceToken;
    }

    void MultiplayerSession::SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serverConnectionPath = serverConnectionPath;
    }

    void MultiplayerSession::SetClosed(bool closed)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_closed = closed;
    }

    void MultiplayerSession::SetLocked(bool locked)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_locked = locked;
    }

    void MultiplayerSession::SetAllocateCloudCompute(bool allocateCloudCompute)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_allocateCloudCompute = allocateCloudCompute;
    }

    void MultiplayerSession::SetMatchmakingResubmit(bool matchResubmit)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_matchResubmit = matchResubmit;
    }

    void MultiplayerSession::SetServerConnectionStringCandidates(Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serverConnectionStringCandidates = serverConnectionStringCandidates;
    }

    void MultiplayerSession::SetSessionChangeSubscription(MultiplayerSessionChangeTypes const& changeTypes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_changeTypes = changeTypes;
    }

    void MultiplayerSession::Leave()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::SetCurrentUserStatus(MultiplayerSessionMemberStatus const& status)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_status = status;
    }

    void MultiplayerSession::SetCurrentUserSecureDeviceAddressBase64(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_currentUserSecureDeviceAddressBase64 = value;
    }

    void MultiplayerSession::SetCurrentUserRoleInfo(Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_roles = roles;
    }

    void MultiplayerSession::SetCurrentUserMembersInGroup(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& membersInGroup)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_membersInGroup = membersInGroup;
    }

    void MultiplayerSession::SetCurrentUserQualityOfServiceMeasurements(Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_measurements = measurements;
    }

    void MultiplayerSession::SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_qualityOfServiceServerMeasurementsJson = valueJson;
    }

    void MultiplayerSession::SetCurrentUserArbitrationResults(Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> const& results)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_arbitrationResults = results;
    }

    void MultiplayerSession::SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::DeleteCurrentUserMemberCustomPropertyJson(hstring const& name)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_matchmakingTargetSessionConstantsJson = matchmakingTargetSessionConstants;
    }

    void MultiplayerSession::SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::DeleteSessionCustomPropertyJson(hstring const& name)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    void MultiplayerSession::_Init(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxLiveContext = xboxLiveContext;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_maxMembersInSession = maxMembersInSession;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;
    }
}