#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsService.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsService : ClubsServiceT<ClubsService>
    {
        ClubsService() = default;

        Windows::Foundation::IAsyncOperation<Club> GetClubAsync(hstring clubId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> GetClubsAsync(Windows::Foundation::Collections::IVectorView<hstring> clubIds);
        Windows::Foundation::IAsyncOperation<ClubsOwnedResult> GetClubsOwnedAsync();
        Windows::Foundation::IAsyncOperation<Club> CreateClubAsync(hstring name, ClubType type, hstring titleFamilyId);
        Windows::Foundation::IAsyncAction DeleteClubAsync(hstring clubId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> GetClubAssociationsAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> GetClubAssociationsAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRecommendation>> GetClubRecommendationsAsync();
        Windows::Foundation::IAsyncOperation<ClubsSearchResult> SearchClubsAsync(hstring queryString, Windows::Foundation::Collections::IVectorView<hstring> titleIds, Windows::Foundation::Collections::IVectorView<hstring> tags);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubSearchAutoComplete>> SuggestClubsAsync(hstring queryString, Windows::Foundation::Collections::IVectorView<hstring> titleIds, Windows::Foundation::Collections::IVectorView<hstring> tags);

    private:
        Windows::Foundation::Collections::IVectorView<Club> m_clubs = single_threaded_vector<Club>().GetView();
        ClubsOwnedResult m_clubsOwnedResult{ nullptr };
		Windows::Foundation::Collections::IVectorView<Club> m_clubAssociations = single_threaded_vector<Club>().GetView();
		Windows::Foundation::Collections::IVectorView<ClubRecommendation> m_clubRecommendations = single_threaded_vector<ClubRecommendation>().GetView();
		ClubsSearchResult m_clubsSearchResult{ nullptr };
		Windows::Foundation::Collections::IVectorView<ClubSearchAutoComplete> m_clubSearchAutoComplete = single_threaded_vector<ClubSearchAutoComplete>().GetView();
    };
}