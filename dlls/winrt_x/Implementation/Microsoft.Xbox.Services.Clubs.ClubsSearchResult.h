#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsSearchResult : ClubsSearchResultT<ClubsSearchResult>
    {
        ClubsSearchResult() = default;

        Windows::Foundation::Collections::IVectorView<Club> Clubs();
        Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<ClubSearchFacetResult>> SearchFacetResults();

    private:
        Windows::Foundation::Collections::IVectorView<Club> m_clubs = single_threaded_vector<Club>().GetView();
		Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<ClubSearchFacetResult>> m_searchFacetResults = 
            single_threaded_map<hstring, Windows::Foundation::Collections::IVectorView<ClubSearchFacetResult>>().GetView();
    };
}