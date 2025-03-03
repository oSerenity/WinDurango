#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.Tournament.h"
#include "Microsoft.Xbox.Services.Tournaments.Tournament.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring Tournament::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
    }

    hstring Tournament::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_organizerId;
    }

    hstring Tournament::OrganizerName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_organizerName;
    }

    hstring Tournament::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    hstring Tournament::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_description;
    }

    hstring Tournament::GameMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameMode;
    }

    hstring Tournament::TournamentStyle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tournamentStyle;
    }

    bool Tournament::IsRegistrationOpen()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isRegistrationOpen;
    }

    bool Tournament::IsCheckinOpen()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isCheckinOpen;
    }

    bool Tournament::IsPlayingOpen()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isPlayingOpen;
    }

    bool Tournament::HasPrize()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasPrize;
    }

    bool Tournament::IsPaused()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isPaused;
    }

    uint32_t Tournament::MinTeamSize()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_minTeamSize;
    }

    uint32_t Tournament::MaxTeamSize()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxTeamSize;
    }

    uint32_t Tournament::TeamsRegisteredCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamsRegisteredCount;
    }

    uint32_t Tournament::MinTeamsRegistered()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_minTeamsRegistered;
    }

    uint32_t Tournament::MaxTeamsRegistered()
    {
        throw hresult_not_implemented();
    }

    TournamentState Tournament::TournamentState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tournamentState;
    }

    Windows::Foundation::DateTime Tournament::RegistrationStartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_registrationStartTime;
    }

    Windows::Foundation::DateTime Tournament::RegistrationEndTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_registrationEndTime;
    }

    Windows::Foundation::DateTime Tournament::CheckinStartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_checkinStartTime;
    }

    Windows::Foundation::DateTime Tournament::CheckinEndTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION(); 

		return m_checkinEndTime;
    }

    Windows::Foundation::DateTime Tournament::PlayingStartTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_playingStartTime;
    }

    Windows::Foundation::DateTime Tournament::PlayingEndTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_playingEndTime;
    }

    Windows::Foundation::DateTime Tournament::EndTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_endTime;
    }

    TeamSummary Tournament::TeamSummary()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamSummary;
    }
}