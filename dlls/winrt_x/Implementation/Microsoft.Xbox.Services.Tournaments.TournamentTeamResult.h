#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentTeamResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentTeamResult : TournamentTeamResultT<TournamentTeamResult>
    {
        TournamentTeamResult() = default;

        TournamentGameResultState State();
        void State(TournamentGameResultState const& value);
        uint64_t Ranking();
        void Ranking(uint64_t value);

    private:
		TournamentGameResultState m_state{ TournamentGameResultState::Draw };
		uint64_t m_ranking{ 0 };
    };
}

namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TournamentTeamResult : TournamentTeamResultT<TournamentTeamResult, implementation::TournamentTeamResult>
    {
    };
}