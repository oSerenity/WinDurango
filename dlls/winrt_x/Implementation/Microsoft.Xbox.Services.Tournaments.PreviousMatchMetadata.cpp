#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.PreviousMatchMetadata.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TournamentTeamResult PreviousMatchMetadata::Result()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_result;
    }

    Windows::Foundation::DateTime PreviousMatchMetadata::EndTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_endTime;
    }

    MatchMetadata PreviousMatchMetadata::MatchDetails()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchDetails;
    }
}