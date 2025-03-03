#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamChangeEventArgs::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_organizerId;
    }

    hstring TeamChangeEventArgs::TournamentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentId;
    }

    hstring TeamChangeEventArgs::TeamId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_teamId;
    }
}