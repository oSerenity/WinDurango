#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    uint32_t MultiplayerSessionConstants::MaxMembersInSession()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxMembersInSession;
    }

    void MultiplayerSessionConstants::MaxMembersInSession(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxMembersInSession = value;
    }

    MultiplayerSessionVisibility MultiplayerSessionConstants::MultiplayerSessionVisibility()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_multiplayerSessionVisibility;
    }

    void MultiplayerSessionConstants::MultiplayerSessionVisibility(Multiplayer::MultiplayerSessionVisibility const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_multiplayerSessionVisibility = value;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionConstants::InitiatorXboxUserIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_initiatorXboxUserIds;
    }

    hstring MultiplayerSessionConstants::CustomConstantsJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_customConstantsJson;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberReservationTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberReservationTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberInactiveTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberInactiveTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberReadyTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberReadyTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::SessionEmptyTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionEmptyTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::ArbitrationTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_arbitrationTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerSessionConstants::ForfeitTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_forfeitTimeout;
    }

    bool MultiplayerSessionConstants::CapabilitiesConnectivity()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_capabilitiesSuppressPresenceActivityCheck;
    }

    bool MultiplayerSessionConstants::CapabilitiesSuppressPresenceActivityCheck()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_capabilitiesSuppressPresenceActivityCheck;
    }

    bool MultiplayerSessionConstants::CapabilitiesGameplay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_capabilitiesGameplay;
    }

    bool MultiplayerSessionConstants::CapabilitiesLarge()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_capabilitiesLarge;
    }

    bool MultiplayerSessionConstants::CapabilitiesConnectionRequiredForActiveMember()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_capabilitiesConnectionRequiredForActiveMember;
    }

    bool MultiplayerSessionConstants::CapabilitiesCrossplay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_capabilitiesCrossplay;
    }

    bool MultiplayerSessionConstants::CapabilitiesUserAuthorizationStyle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_capabilitiesUserAuthorizationStyle;
    }

    bool MultiplayerSessionConstants::CapabilitiesTeam()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_capabilitiesTeam;
    }

    bool MultiplayerSessionConstants::CapabilitiesSearchable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_capabilitiesSearchable;
    }

    bool MultiplayerSessionConstants::CapabilitiesArbitration()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_capabilitiesSearchable;
    }

    bool MultiplayerSessionConstants::EnableMetricsLatency()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_enableMetricsLatency;
    }

    bool MultiplayerSessionConstants::EnableMetricsBandwidthDown()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_enableMetricsBandwidthDown;
    }

    bool MultiplayerSessionConstants::EnableMetricsBandwidthUp()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_enableMetricsBandwidthUp;
    }

    bool MultiplayerSessionConstants::EnableMetricsCustom()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_enableMetricsCustom;
    }

    MultiplayerManagedInitialization MultiplayerSessionConstants::ManagedInitialization()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_managedInitialization;
    }

    MultiplayerMemberInitialization MultiplayerSessionConstants::MemberInitialization()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_memberInitialization;
    }

    MultiplayerPeerToPeerRequirements MultiplayerSessionConstants::PeerToPeerRequirements()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_peerToPeerRequirements;
    }

    MultiplayerPeerToHostRequirements MultiplayerSessionConstants::PeerToHostRequirements()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_peerToHostRequirements;
    }

    hstring MultiplayerSessionConstants::MeasurementServerAddressesJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_measurementServerAddressesJson;
    }
}