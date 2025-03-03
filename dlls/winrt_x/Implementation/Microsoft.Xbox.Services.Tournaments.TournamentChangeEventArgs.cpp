#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TournamentChangeEventArgs::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_organizerId;
    }

    hstring TournamentChangeEventArgs::TournamentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tournamentId;
    }
}