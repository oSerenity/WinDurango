#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentTeamResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentTeamResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TournamentGameResultState TournamentTeamResult::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    void TournamentTeamResult::State(TournamentGameResultState const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_state = value;
    }

    uint64_t TournamentTeamResult::Ranking()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ranking;
    }

    void TournamentTeamResult::Ranking(uint64_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_ranking = value;
    }
}