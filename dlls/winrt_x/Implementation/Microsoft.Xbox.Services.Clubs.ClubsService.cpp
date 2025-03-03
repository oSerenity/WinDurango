#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Windows::Foundation::IAsyncOperation<Club> ClubsService::GetClubAsync(hstring clubId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clubs.GetAt(0);
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> ClubsService::GetClubsAsync(Windows::Foundation::Collections::IVectorView<hstring> clubIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clubs;
    }

    Windows::Foundation::IAsyncOperation<ClubsOwnedResult> ClubsService::GetClubsOwnedAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_clubsOwnedResult;
    }

    Windows::Foundation::IAsyncOperation<Club> ClubsService::CreateClubAsync(hstring name, ClubType type, hstring titleFamilyId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        Club m_newClub{ nullptr };

		// TODO: Add the new club to the IVectorView of clubs, as well as update the m_clubsOwnedResult.

        co_return m_newClub;
    }

    Windows::Foundation::IAsyncAction ClubsService::DeleteClubAsync(hstring clubId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		// TODO: Remove the club from the IVectorView of clubs, as well as update the m_clubsOwnedResult.

		co_return;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> ClubsService::GetClubAssociationsAsync()
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Club>> ClubsService::GetClubAssociationsAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_clubAssociations;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRecommendation>> ClubsService::GetClubRecommendationsAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_clubRecommendations;
    }

    Windows::Foundation::IAsyncOperation<ClubsSearchResult> ClubsService::SearchClubsAsync(hstring queryString, Windows::Foundation::Collections::IVectorView<hstring> titleIds, Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clubsSearchResult;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubSearchAutoComplete>> ClubsService::SuggestClubsAsync(hstring queryString, Windows::Foundation::Collections::IVectorView<hstring> titleIds, Windows::Foundation::Collections::IVectorView<hstring> tags)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clubSearchAutoComplete;
    }
}