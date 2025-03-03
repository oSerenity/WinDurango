#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::Collections::IVectorView<CatalogItem> BrowseCatalogResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_items;
    }

    uint32_t BrowseCatalogResult::TotalCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_totalCount;
    }

    Windows::Foundation::IAsyncOperation<Marketplace::BrowseCatalogResult> BrowseCatalogResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_browseCatalogResult;
    }

    bool BrowseCatalogResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }
}