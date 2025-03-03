#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryService : InventoryServiceT<InventoryService>
    {
        InventoryService() = default;

        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsAsync(MediaItemType mediaItemType);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsAsync(MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements);
        Windows::Foundation::IAsyncOperation<InventoryItemsResult> GetInventoryItemsForAllUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements);
        Windows::Foundation::IAsyncOperation<InventoryItem> GetInventoryItemAsync(InventoryItem inventoryItem);
        Windows::Foundation::IAsyncOperation<ConsumeInventoryItemResult> ConsumeInventoryItemAsync(InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId);

    private:
        InventoryItemsResult m_inventoryItemResult{ nullptr };
		InventoryItem m_inventoryItem{ nullptr };
		ConsumeInventoryItemResult m_consumeInventoryItemResult{ nullptr };
    };
}