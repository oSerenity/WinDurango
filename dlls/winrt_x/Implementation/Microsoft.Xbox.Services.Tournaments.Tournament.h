#pragma once
#include "Microsoft.Xbox.Services.Tournaments.Tournament.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct Tournament : TournamentT<Tournament>
    {
        Tournament() = default;

        hstring Id();
        hstring OrganizerId();
        hstring OrganizerName();
        hstring Name();
        hstring Description();
        hstring GameMode();
        hstring TournamentStyle();
        bool IsRegistrationOpen();
        bool IsCheckinOpen();
        bool IsPlayingOpen();
        bool HasPrize();
        bool IsPaused();
        uint32_t MinTeamSize();
        uint32_t MaxTeamSize();
        uint32_t TeamsRegisteredCount();
        uint32_t MinTeamsRegistered();
        uint32_t MaxTeamsRegistered();
        TournamentState TournamentState();
        Windows::Foundation::DateTime RegistrationStartTime();
        Windows::Foundation::DateTime RegistrationEndTime();
        Windows::Foundation::DateTime CheckinStartTime();
        Windows::Foundation::DateTime CheckinEndTime();
        Windows::Foundation::DateTime PlayingStartTime();
        Windows::Foundation::DateTime PlayingEndTime();
        Windows::Foundation::DateTime EndTime();
        TeamSummary TeamSummary();

    private:
        hstring m_id{ L"" };
		hstring m_organizerId{ L"" };
		hstring m_organizerName{ L"" };
		hstring m_name{ L"" };
		hstring m_description{ L"" };
		hstring m_gameMode{ L"" };
		hstring m_tournamentStyle{ L"" };
		bool m_isRegistrationOpen{ false };
		bool m_isCheckinOpen{ false };
		bool m_isPlayingOpen{ false };
		bool m_hasPrize{ false };
		bool m_isPaused{ false };
		uint32_t m_minTeamSize{ 0 };
		uint32_t m_maxTeamSize{ 0 };
		uint32_t m_teamsRegisteredCount{ 0 };
		uint32_t m_minTeamsRegistered{ 0 };
		uint32_t m_maxTeamsRegistered{ 0 };
		Tournaments::TournamentState m_tournamentState{ TournamentState::Active };
		Windows::Foundation::DateTime m_registrationStartTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_registrationEndTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_checkinStartTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_checkinEndTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_playingStartTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_playingEndTime{ Windows::Foundation::DateTime::clock::now() };
		Windows::Foundation::DateTime m_endTime{ Windows::Foundation::DateTime::clock::now() };
		Tournaments::TeamSummary m_teamSummary{ nullptr };
    };
}