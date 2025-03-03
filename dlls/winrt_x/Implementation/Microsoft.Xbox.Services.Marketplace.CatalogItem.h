#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItem.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItem : CatalogItemT<CatalogItem>
    {
        CatalogItem() = default;

        MediaItemType MediaItemType();
        hstring Id();
        hstring Name();
        hstring ReducedName();
        uint32_t TitleId();
        Windows::Foundation::DateTime ReleaseDate();
        hstring ProductId();
        hstring SandboxId();
        bool IsBundle();
        bool IsPartOfAnyBundle();
        Windows::Foundation::Collections::IVectorView<CatalogItemImage> Images();
        Windows::Foundation::Collections::IVectorView<hstring> AvailabilityContentIds();

    private:
		Marketplace::MediaItemType m_mediaItemType{ MediaItemType::Unknown };
        hstring m_id{ L"" };
		hstring m_name{ L"" };
		hstring m_reducedName{ L"" };
		uint32_t m_titleId{ 0 };
		Windows::Foundation::DateTime m_releaseDate = Windows::Foundation::DateTime::clock::now();
		hstring m_productId{ L"" };
		hstring m_sandboxId{ L"" };
		bool m_isBundle{ false };
		bool m_isPartOfAnyBundle{ false };
        Windows::Foundation::Collections::IVectorView<CatalogItemImage> m_images = single_threaded_vector<CatalogItemImage>().GetView();
		Windows::Foundation::Collections::IVectorView<hstring> m_availabilityContentIds = single_threaded_vector<hstring>().GetView();
    };
}