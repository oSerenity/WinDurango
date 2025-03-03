#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamSummary : TeamSummaryT<TeamSummary>
    {
        TeamSummary() = default;

        hstring Id();
        TeamState TeamState();
        uint64_t Ranking();

    private:
        hstring m_id{ L"" };
		Tournaments::TeamState m_teamState{ TeamState::Unknown };
        uint64_t m_ranking{ 0 };
    };
}