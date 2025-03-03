#include "pch.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.g.cpp"

namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    Windows::Foundation::IAsyncAction EntertainmentProfileListXboxOnePins::AddItemAsync(Marketplace::MediaItemType itemType, hstring providerId, hstring provider, Windows::Foundation::Uri imageUrl, Windows::Foundation::Uri providerLogoImageUrl, hstring title, hstring subTitle, hstring locale)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncAction EntertainmentProfileListXboxOnePins::RemoveItemAsync(hstring providerId, hstring provider)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncOperation<EntertainmentProfileListContainsItemResult> EntertainmentProfileListXboxOnePins::ContainsItemAsync(hstring providerId, hstring provider)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_containsItemResult;
    }
}