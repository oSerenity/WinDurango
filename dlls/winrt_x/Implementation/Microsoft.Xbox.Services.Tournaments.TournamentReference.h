#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentReference.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentReference : TournamentReferenceT<TournamentReference>
    {
        TournamentReference() = default;

        hstring DefinitionName();
        hstring TournamentId();
        hstring Organizer();
        hstring ServiceConfigurationId();

    private:
        hstring m_definitionName{ L"" };
        hstring m_tournamentId{ L"" };
        hstring m_organizer{ L"" };
        hstring m_serviceConfigurationId{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TournamentReference : TournamentReferenceT<TournamentReference, implementation::TournamentReference>
    {
    };
}