#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamChangeEventArgs : TeamChangeEventArgsT<TeamChangeEventArgs>
    {
        TeamChangeEventArgs() = default;

        hstring OrganizerId();
        hstring TournamentId();
        hstring TeamId();

    private:
        hstring m_organizerId{ L"" };
		hstring m_tournamentId{ L"" };
		hstring m_teamId{ L"" };
    };
}