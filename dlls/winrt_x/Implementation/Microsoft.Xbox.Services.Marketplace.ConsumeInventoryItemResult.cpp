#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.h"
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    Windows::Foundation::Uri ConsumeInventoryItemResult::ConsumableUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_consumableUrl;
    }

    uint32_t ConsumeInventoryItemResult::ConsumableBalance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_consumableBalance;
    }

    hstring ConsumeInventoryItemResult::TransactionId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_transactionId;
    }
}