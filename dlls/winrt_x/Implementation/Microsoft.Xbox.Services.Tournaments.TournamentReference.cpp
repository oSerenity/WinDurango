#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentReference.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentReference.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TournamentReference::DefinitionName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_definitionName;
    }

    hstring TournamentReference::TournamentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentId;
    }

    hstring TournamentReference::Organizer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_organizer;
    }

    hstring TournamentReference::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }
}