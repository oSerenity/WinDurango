#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::IAsyncOperation<BrowseCatalogResult> CatalogService::BrowseCatalogAsync(hstring parentId, MediaItemType parentMediaType, MediaItemType childMediaType, CatalogSortOrder orderBy, uint32_t skipItems, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_catalog;
    }

    Windows::Foundation::IAsyncOperation<BrowseCatalogResult> CatalogService::BrowseCatalogBundlesAsync(hstring parentId, MediaItemType parentMediaType, hstring productId, BundleRelationshipType relationship, uint32_t skipItems, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_catalog;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<CatalogItemDetails>> CatalogService::GetCatalogItemDetailsAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_catalogItemDetails;
    }
}