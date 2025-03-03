#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    uint32_t MultiplayerSessionMember::MemberId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberId;
    }

    hstring MultiplayerSessionMember::TeamId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_teamId;
    }

    hstring MultiplayerSessionMember::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    hstring MultiplayerSessionMember::MemberCustomConstantsJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_memberCustomConstantsJson;
    }

    hstring MultiplayerSessionMember::SecureDeviceAddressBase64()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceAddressBase64;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSessionMember::Roles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_roles;
    }

    hstring MultiplayerSessionMember::MemberCustomPropertiesJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberCustomPropertiesJson;
    }

    hstring MultiplayerSessionMember::Gamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gamertag;
    }

    MultiplayerSessionMemberStatus MultiplayerSessionMember::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_status;
    }

    bool MultiplayerSessionMember::IsTurnAvailable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isTurnAvailable;
    }

    bool MultiplayerSessionMember::IsCurrentUser()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isCurrentUser;
    }

    bool MultiplayerSessionMember::InitializeRequested()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_initializeRequested;
    }

    hstring MultiplayerSessionMember::MatchmakingResultServerMeasurementsJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchmakingResultServerMeasurementsJson;
    }

    hstring MultiplayerSessionMember::MemberServerMeasurementsJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberServerMeasurementsJson;
    }

    Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> MultiplayerSessionMember::MembersInGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_membersInGroup;
    }

    Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> MultiplayerSessionMember::MemberMeasurements()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_memberMeasurements;
    }

    hstring MultiplayerSessionMember::DeviceToken()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_deviceToken;
    }

    NetworkAddressTranslationSetting MultiplayerSessionMember::Nat()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_nat;
    }

    uint32_t MultiplayerSessionMember::ActiveTitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_activeTitleId;
    }

    uint32_t MultiplayerSessionMember::InitializationEpisode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_initializationEpisode;
    }

    Windows::Foundation::DateTime MultiplayerSessionMember::JoinTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joinTime;
    }

    MultiplayerMeasurementFailure MultiplayerSessionMember::InitializationFailureCause()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_initializationFailureCause;
    }

    MultiplayerSessionReference MultiplayerSessionMember::TournamentTeamSessionRef()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentTeamSessionRef;
    }

    Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Groups()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_groups;
    }

    void MultiplayerSessionMember::Groups(Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_groups = value;
    }

    Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Encounters()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_encounters;
    }

    void MultiplayerSessionMember::Encounters(Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_encounters = value;
    }

    Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> MultiplayerSessionMember::Results()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_results;
    }

    Tournaments::TournamentArbitrationStatus MultiplayerSessionMember::ArbitrationStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_arbitrationStatus;
    }
}