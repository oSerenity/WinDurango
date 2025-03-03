#pragma once
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct PreviousMatchMetadata : PreviousMatchMetadataT<PreviousMatchMetadata>
    {
        PreviousMatchMetadata() = default;

        TournamentTeamResult Result();
        Windows::Foundation::DateTime EndTime();
        MatchMetadata MatchDetails();

    private:
		TournamentTeamResult m_result{ nullptr };
		Windows::Foundation::DateTime m_endTime{ Windows::Foundation::DateTime::clock::now() };
		MatchMetadata m_matchDetails{ nullptr };
    };
}