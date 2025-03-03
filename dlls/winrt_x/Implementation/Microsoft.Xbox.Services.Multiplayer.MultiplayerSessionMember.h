#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMember : MultiplayerSessionMemberT<MultiplayerSessionMember>
    {
        MultiplayerSessionMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring MemberCustomConstantsJson();
        hstring SecureDeviceAddressBase64();
        Windows::Foundation::Collections::IMapView<hstring, hstring> Roles();
        hstring MemberCustomPropertiesJson();
        hstring Gamertag();
        MultiplayerSessionMemberStatus Status();
        bool IsTurnAvailable();
        bool IsCurrentUser();
        bool InitializeRequested();
        hstring MatchmakingResultServerMeasurementsJson();
        hstring MemberServerMeasurementsJson();
        Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> MembersInGroup();
        Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> MemberMeasurements();
        hstring DeviceToken();
        NetworkAddressTranslationSetting Nat();
        uint32_t ActiveTitleId();
        uint32_t InitializationEpisode();
        Windows::Foundation::DateTime JoinTime();
        MultiplayerMeasurementFailure InitializationFailureCause();
        MultiplayerSessionReference TournamentTeamSessionRef();
        Windows::Foundation::Collections::IVector<hstring> Groups();
        void Groups(Windows::Foundation::Collections::IVector<hstring> const& value);
        Windows::Foundation::Collections::IVector<hstring> Encounters();
        void Encounters(Windows::Foundation::Collections::IVector<hstring> const& value);
        Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> Results();
        Tournaments::TournamentArbitrationStatus ArbitrationStatus();

    private:
		uint32_t m_memberId{ 0 };
        hstring m_teamId{ L"" };
		hstring m_xboxUserId{ L"" };
		hstring m_memberCustomConstantsJson{ L"" };
		hstring m_secureDeviceAddressBase64{ L"" };
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_roles{ single_threaded_map<hstring, hstring>().GetView() };
		hstring m_memberCustomPropertiesJson{ L"" };
		hstring m_gamertag{ L"" };
		MultiplayerSessionMemberStatus m_status{ MultiplayerSessionMemberStatus::Active };
		bool m_isTurnAvailable{ false };
		bool m_isCurrentUser{ false };
		bool m_initializeRequested{ false };
		hstring m_matchmakingResultServerMeasurementsJson{ L"" };
		hstring m_memberServerMeasurementsJson{ L"" };
		Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> m_membersInGroup{ single_threaded_vector<Multiplayer::MultiplayerSessionMember>() };
		Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> m_memberMeasurements{ single_threaded_vector<MultiplayerQualityOfServiceMeasurements>() };
		hstring m_deviceToken{ L"" };
		NetworkAddressTranslationSetting m_nat{ NetworkAddressTranslationSetting::Unknown };
		uint32_t m_activeTitleId{ 0 };
		uint32_t m_initializationEpisode{ 0 };
		Windows::Foundation::DateTime m_joinTime{ Windows::Foundation::DateTime::clock::now() };
		MultiplayerMeasurementFailure m_initializationFailureCause{ MultiplayerMeasurementFailure::None };
		MultiplayerSessionReference m_tournamentTeamSessionRef{ nullptr };
		Windows::Foundation::Collections::IVector<hstring> m_groups{ single_threaded_vector<hstring>() };
		Windows::Foundation::Collections::IVector<hstring> m_encounters{ single_threaded_vector<hstring>() };
		Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> m_results{ single_threaded_map<hstring, Tournaments::TournamentTeamResult>() };
		Tournaments::TournamentArbitrationStatus m_arbitrationStatus;
    };
}