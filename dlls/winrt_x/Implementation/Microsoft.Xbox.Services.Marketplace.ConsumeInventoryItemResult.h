#pragma once
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct ConsumeInventoryItemResult : ConsumeInventoryItemResultT<ConsumeInventoryItemResult>
    {
        ConsumeInventoryItemResult() = default;

        Windows::Foundation::Uri ConsumableUrl();
        uint32_t ConsumableBalance();
        hstring TransactionId();

    private:
		Windows::Foundation::Uri m_consumableUrl{ nullptr };
		uint32_t m_consumableBalance{ 0 };
		hstring m_transactionId{ L"" };
    };
}