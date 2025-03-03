#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionConstants : MultiplayerSessionConstantsT<MultiplayerSessionConstants>
    {
        MultiplayerSessionConstants() = default;

        uint32_t MaxMembersInSession();
        void MaxMembersInSession(uint32_t value);
        MultiplayerSessionVisibility MultiplayerSessionVisibility();
        void MultiplayerSessionVisibility(Multiplayer::MultiplayerSessionVisibility const& value);
        Windows::Foundation::Collections::IVectorView<hstring> InitiatorXboxUserIds();
        hstring CustomConstantsJson();
        Windows::Foundation::TimeSpan MemberReservationTimeout();
        Windows::Foundation::TimeSpan MemberInactiveTimeout();
        Windows::Foundation::TimeSpan MemberReadyTimeout();
        Windows::Foundation::TimeSpan SessionEmptyTimeout();
        Windows::Foundation::TimeSpan ArbitrationTimeout();
        Windows::Foundation::TimeSpan ForfeitTimeout();
        bool CapabilitiesConnectivity();
        bool CapabilitiesSuppressPresenceActivityCheck();
        bool CapabilitiesGameplay();
        bool CapabilitiesLarge();
        bool CapabilitiesConnectionRequiredForActiveMember();
        bool CapabilitiesCrossplay();
        bool CapabilitiesUserAuthorizationStyle();
        bool CapabilitiesTeam();
        bool CapabilitiesSearchable();
        bool CapabilitiesArbitration();
        bool EnableMetricsLatency();
        bool EnableMetricsBandwidthDown();
        bool EnableMetricsBandwidthUp();
        bool EnableMetricsCustom();
        MultiplayerManagedInitialization ManagedInitialization();
        MultiplayerMemberInitialization MemberInitialization();
        MultiplayerPeerToPeerRequirements PeerToPeerRequirements();
        MultiplayerPeerToHostRequirements PeerToHostRequirements();
        hstring MeasurementServerAddressesJson();

    private:
		uint32_t m_maxMembersInSession{ 0 };
		Multiplayer::MultiplayerSessionVisibility m_multiplayerSessionVisibility{ MultiplayerSessionVisibility::Unknown };
		Windows::Foundation::Collections::IVectorView<hstring> m_initiatorXboxUserIds{ nullptr };
        hstring m_customConstantsJson{ L"" };
		Windows::Foundation::TimeSpan m_memberReservationTimeout{ Windows::Foundation::TimeSpan::zero() };
		Windows::Foundation::TimeSpan m_memberInactiveTimeout{ Windows::Foundation::TimeSpan::zero() };
		Windows::Foundation::TimeSpan m_memberReadyTimeout{ Windows::Foundation::TimeSpan::zero() };
		Windows::Foundation::TimeSpan m_sessionEmptyTimeout{ Windows::Foundation::TimeSpan::zero() };
		Windows::Foundation::TimeSpan m_arbitrationTimeout{ Windows::Foundation::TimeSpan::zero() };
        Windows::Foundation::TimeSpan m_forfeitTimeout{ Windows::Foundation::TimeSpan::zero()};
		bool m_capabilitiesConnectivity{ false };
		bool m_capabilitiesSuppressPresenceActivityCheck{ false };
		bool m_capabilitiesGameplay{ false };
		bool m_capabilitiesLarge{ false };
		bool m_capabilitiesConnectionRequiredForActiveMember{ false };
		bool m_capabilitiesCrossplay{ false };
		bool m_capabilitiesUserAuthorizationStyle{ false };
		bool m_capabilitiesTeam{ false };
		bool m_capabilitiesSearchable{ false };
		bool m_capabilitiesArbitration{ false };
		bool m_enableMetricsLatency{ false };
		bool m_enableMetricsBandwidthDown{ false };
		bool m_enableMetricsBandwidthUp{ false };
		bool m_enableMetricsCustom{ false };
		MultiplayerManagedInitialization m_managedInitialization{ nullptr };
		MultiplayerMemberInitialization m_memberInitialization{ nullptr };
		MultiplayerPeerToPeerRequirements m_peerToPeerRequirements{ nullptr };
		MultiplayerPeerToHostRequirements m_peerToHostRequirements{ nullptr };
        hstring m_measurementServerAddressesJson{ L"" };
    };
}