#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryItemsResult : InventoryItemsResultT<InventoryItemsResult>
    {
        InventoryItemsResult() = default;

        Windows::Foundation::Collections::IVectorView<InventoryItem> Items();
        uint32_t TotalItems();
        Windows::Foundation::IAsyncOperation<Marketplace::InventoryItemsResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();

    private:
		Windows::Foundation::Collections::IVectorView<InventoryItem> m_items = single_threaded_vector<InventoryItem>().GetView();
        uint32_t m_totalItems{ 0 };
		Marketplace::InventoryItemsResult m_nextItemsResult{ nullptr };
		bool m_hasNext{ false };
    };
}