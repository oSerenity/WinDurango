#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentRequest : TournamentRequestT<TournamentRequest>
    {
        TournamentRequest() = default;

        TournamentRequest(bool filterResultsForUser);
        uint32_t MaxItems();
        void MaxItems(uint32_t value);
        Windows::Foundation::Collections::IVectorView<TournamentState> StateFilter();
        void StateFilter(Windows::Foundation::Collections::IVectorView<TournamentState> const& states);
        TournamentOrderBy OrderBy();
        void OrderBy(TournamentOrderBy const& value);
        TournamentSortOrder SortOrder();
        void SortOrder(TournamentSortOrder const& value);
        hstring OrganizerId();
        void OrganizerId(hstring const& value);

    private:
		bool m_filterResultsForUser{ false };
		uint32_t m_maxItems{ 0 };
		Windows::Foundation::Collections::IVectorView<TournamentState> m_stateFilter{ single_threaded_vector<TournamentState>().GetView() };
		TournamentOrderBy m_orderBy{ TournamentOrderBy::StartTime };
		TournamentSortOrder m_sortOrder{ TournamentSortOrder::Ascending };
        hstring m_organizerId{ L"" };
    };
}
namespace winrt::Microsoft::Xbox::Services::Tournaments::factory_implementation
{
    struct TournamentRequest : TournamentRequestT<TournamentRequest, implementation::TournamentRequest>
    {
    };
}