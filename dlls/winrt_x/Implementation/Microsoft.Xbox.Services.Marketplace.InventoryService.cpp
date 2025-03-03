#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsAsync(MediaItemType mediaItemType)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsAsync(MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(MediaItemType mediaItemType, InventoryItemState inventoryItemState, InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItemResult;
    }

    Windows::Foundation::IAsyncOperation<InventoryItem> InventoryService::GetInventoryItemAsync(InventoryItem inventoryItem)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_inventoryItem;
    }

    Windows::Foundation::IAsyncOperation<ConsumeInventoryItemResult> InventoryService::ConsumeInventoryItemAsync(InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_consumeInventoryItemResult;
    }
}