#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState TeamChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    hstring TeamChangeSubscription::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_organizerId;
    }

    hstring TeamChangeSubscription::TournamentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournamentId;
    }

    hstring TeamChangeSubscription::TeamId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_teamId;
    }
}