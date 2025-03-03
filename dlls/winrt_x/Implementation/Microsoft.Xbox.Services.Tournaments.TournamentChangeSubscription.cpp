#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    RealTimeActivity::RealTimeActivitySubscriptionState TournamentChangeSubscription::State()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_state;
    }

    hstring TournamentChangeSubscription::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_organizerId;
    }

    hstring TournamentChangeSubscription::TournamentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tournamentId;
    }
}