#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentChangeSubscription.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentChangeSubscription : TournamentChangeSubscriptionT<TournamentChangeSubscription>
    {
        TournamentChangeSubscription() = default;

        RealTimeActivity::RealTimeActivitySubscriptionState State();
        hstring OrganizerId();
        hstring TournamentId();

    private:
		RealTimeActivity::RealTimeActivitySubscriptionState m_state{ RealTimeActivity::RealTimeActivitySubscriptionState::Closed };
        hstring m_organizerId{ L"" };
        hstring m_tournamentId{ L"" };
    };
}