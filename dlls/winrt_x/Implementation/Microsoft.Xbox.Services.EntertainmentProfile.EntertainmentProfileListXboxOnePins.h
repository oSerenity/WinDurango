#pragma once
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListXboxOnePins.g.h"

namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    struct EntertainmentProfileListXboxOnePins : EntertainmentProfileListXboxOnePinsT<EntertainmentProfileListXboxOnePins>
    {
        EntertainmentProfileListXboxOnePins() = default;

        Windows::Foundation::IAsyncAction AddItemAsync(Marketplace::MediaItemType itemType, hstring providerId, hstring provider, Windows::Foundation::Uri imageUrl, Windows::Foundation::Uri providerLogoImageUrl, hstring title, hstring subTitle, hstring locale);
        Windows::Foundation::IAsyncAction RemoveItemAsync(hstring providerId, hstring provider);
        Windows::Foundation::IAsyncOperation<EntertainmentProfileListContainsItemResult> ContainsItemAsync(hstring providerId, hstring provider);

    private:
        EntertainmentProfileListContainsItemResult m_containsItemResult{ nullptr };
    };
}