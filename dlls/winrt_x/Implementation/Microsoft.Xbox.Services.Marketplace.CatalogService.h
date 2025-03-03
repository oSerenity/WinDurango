#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogService : CatalogServiceT<CatalogService>
    {
        CatalogService() = default;

        Windows::Foundation::IAsyncOperation<BrowseCatalogResult> BrowseCatalogAsync(hstring parentId, MediaItemType parentMediaType, MediaItemType childMediaType, CatalogSortOrder orderBy, uint32_t skipItems, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<BrowseCatalogResult> BrowseCatalogBundlesAsync(hstring parentId, MediaItemType parentMediaType, hstring productId, BundleRelationshipType relationship, uint32_t skipItems, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<CatalogItemDetails>> GetCatalogItemDetailsAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds);

    private:
		BrowseCatalogResult m_catalog{ nullptr };
		Windows::Foundation::Collections::IVectorView<CatalogItemDetails> m_catalogItemDetails = single_threaded_vector<CatalogItemDetails>().GetView();
    };
}