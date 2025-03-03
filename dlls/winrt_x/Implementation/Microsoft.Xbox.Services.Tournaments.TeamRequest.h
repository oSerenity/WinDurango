#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamRequest : TeamRequestT<TeamRequest>
    {
        TeamRequest() = default;

        TeamRequest(hstring const& organizerId, hstring const& tournamentId, bool filterResultsForUser);
        uint32_t MaxItems();
        void MaxItems(uint32_t value);
        Windows::Foundation::Collections::IVectorView<TeamState> StateFilter();
        void StateFilter(Windows::Foundation::Collections::IVectorView<TeamState> const& states);
        TeamOrderBy OrderBy();
        void OrderBy(TeamOrderBy const& value);

    private:
        hstring m_organizerId{ L"" };
        hstring m_tournamentId{ L"" };
		bool m_filterResultsForUser{ false };
        uint32_t m_maxItems{ 0 };
		Windows::Foundation::Collections::IVectorView<TeamState> m_stateFilter{ single_threaded_vector<TeamState>().GetView() };
        TeamOrderBy m_orderBy{ TeamOrderBy::Name };
    };
}

namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TeamRequest : TeamRequestT<TeamRequest, implementation::TeamRequest>
    {
    };
}