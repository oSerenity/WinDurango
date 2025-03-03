#pragma once
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct BrowseCatalogResult : BrowseCatalogResultT<BrowseCatalogResult>
    {
        BrowseCatalogResult() = default;

        Windows::Foundation::Collections::IVectorView<CatalogItem> Items();
        uint32_t TotalCount();
        Windows::Foundation::IAsyncOperation<Marketplace::BrowseCatalogResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();

    private:
        Windows::Foundation::Collections::IVectorView<CatalogItem> m_items = single_threaded_vector<CatalogItem>().GetView();
		uint32_t m_totalCount{ 0 };
		Marketplace::BrowseCatalogResult m_browseCatalogResult{ nullptr };
		bool m_hasNext{ false };
    };
}