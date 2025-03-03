#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsSearchResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Windows::Foundation::Collections::IVectorView<Club> ClubsSearchResult::Clubs()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_clubs;
    }

    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::Collections::IVectorView<ClubSearchFacetResult>> ClubsSearchResult::SearchFacetResults()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_searchFacetResults;
    }
}