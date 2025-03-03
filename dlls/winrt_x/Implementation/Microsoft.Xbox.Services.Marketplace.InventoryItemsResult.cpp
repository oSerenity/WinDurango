#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::Collections::IVectorView<InventoryItem> InventoryItemsResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_items;
    }

    uint32_t InventoryItemsResult::TotalItems()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_totalItems;
    }

    Windows::Foundation::IAsyncOperation<Marketplace::InventoryItemsResult> InventoryItemsResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_nextItemsResult;
    }

    bool InventoryItemsResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }
}