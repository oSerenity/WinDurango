#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamChangeSubscription : TeamChangeSubscriptionT<TeamChangeSubscription>
    {
        TeamChangeSubscription() = default;

        RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring OrganizerId();
        hstring TournamentId();
        hstring TeamId();

    private:
		RealTimeActivity::RealTimeActivitySubscriptionState m_state{ RealTimeActivity::RealTimeActivitySubscriptionState::Closed };
		hstring m_organizerId{ L"" };
		hstring m_tournamentId{ L"" };
        hstring m_teamId{ L"" };
    };
}