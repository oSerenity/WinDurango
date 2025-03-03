#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamSummary.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamSummary::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    TeamState TeamSummary::TeamState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamState;
    }

    uint64_t TeamSummary::Ranking()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_ranking;
    }
}