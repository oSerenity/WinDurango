#pragma once
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct InventoryItem : InventoryItemT<InventoryItem>
    {
        InventoryItem() = default;

        Windows::Foundation::Uri Url();
        InventoryItemState InventoryItemState();
        MediaItemType MediaItemType();
        hstring ProductId();
        uint32_t TitleId();
        Windows::Foundation::Collections::IVectorView<hstring> ContainerIds();
        Windows::Foundation::DateTime RightsObtainedDate();
        Windows::Foundation::DateTime StartDate();
        Windows::Foundation::DateTime EndDate();
        Windows::Foundation::Uri ConsumableUrl();
        uint32_t ConsumableBalance();
        bool IsTrialEntitlement();
        Windows::Foundation::TimeSpan TrialTimeRemaining();

    private:
		Windows::Foundation::Uri m_url{ nullptr };
		Marketplace::InventoryItemState m_inventoryItemState{ InventoryItemState::Enabled };
		Marketplace::MediaItemType m_mediaItemType{ MediaItemType::Unknown };
        hstring m_productId{ L"" };
		uint32_t m_titleId{ 0 };
        Windows::Foundation::Collections::IVectorView<hstring> m_containerIds = single_threaded_vector<hstring>().GetView();
		Windows::Foundation::DateTime m_rightsObtainedDate = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::DateTime m_startDate = Windows::Foundation::DateTime::clock::now();
    	Windows::Foundation::DateTime m_endDate = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::Uri m_consumableUrl{ nullptr };
		uint32_t m_consumableBalance{ 0 };
		bool m_isTrialEntitlement{ false };
		Windows::Foundation::TimeSpan m_trialTimeRemaining = Windows::Foundation::TimeSpan{ 0 };
    };
}