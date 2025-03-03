#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::Uri InventoryItem::Url()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_url;
    }

    InventoryItemState InventoryItem::InventoryItemState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_inventoryItemState;
    }

    MediaItemType InventoryItem::MediaItemType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mediaItemType;
    }

    hstring InventoryItem::ProductId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_productId;
    }

    uint32_t InventoryItem::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    Windows::Foundation::Collections::IVectorView<hstring> InventoryItem::ContainerIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_containerIds;
    }

    Windows::Foundation::DateTime InventoryItem::RightsObtainedDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rightsObtainedDate;
    }

    Windows::Foundation::DateTime InventoryItem::StartDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_startDate;
    }

    Windows::Foundation::DateTime InventoryItem::EndDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_endDate;
    }

    Windows::Foundation::Uri InventoryItem::ConsumableUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_consumableUrl;
    }

    uint32_t InventoryItem::ConsumableBalance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_consumableBalance;
    }

    bool InventoryItem::IsTrialEntitlement()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isTrialEntitlement;
    }

    Windows::Foundation::TimeSpan InventoryItem::TrialTimeRemaining()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_trialTimeRemaining;
    }
}