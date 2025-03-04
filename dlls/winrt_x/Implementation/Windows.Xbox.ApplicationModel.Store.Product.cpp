#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Store.Product.h"
#include "Windows.Xbox.ApplicationModel.Store.Product.g.cpp"
#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    Foundation::IAsyncAction Product::ShowPurchaseAsync(System::IUser requestingUser, hstring offer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncAction Product::ShowDetailsAsync(System::IUser requestingUser, hstring productId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncAction Product::ShowMarketplaceAsync(System::IUser requestingUser, ProductItemTypes inputProductItemType, hstring inputProductId, ProductItemTypes resultProductItemTypes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncAction Product::ShowRedeemCodeAsync(System::IUser user, hstring offer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncAction Product::ShowSubscriptionAsync(System::IUser user, hstring productId, uint32_t privilegeId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncOperation<PrivilegeCheckResult> Product::CheckPrivilegeAsync(System::IUser user, uint32_t privilegeId, bool attemptResolution, hstring friendlyDisplay)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_privilegeCheckResult;
    }

    Foundation::IAsyncOperation<PrivilegeCheckResult> Product::CheckPrivilegesAsync(System::IUser user, Foundation::Collections::IVectorView<uint32_t> privilegeIds, bool attemptResolution, hstring friendlyDisplay)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_privilegeCheckResult;
    }

    event_token Product::ProductPurchased(ProductPurchasedEventHandler const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_productPurchasedEvent.add(handler);
    }

    void Product::ProductPurchased(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_productPurchasedEvent.remove(token);
    }

    Foundation::IAsyncAction Product::ShowPurchaseForStoreIdAsync(System::IUser requestingUser, hstring storeId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction Product::ShowDetailsForStoreIdAsync(System::IUser requestingUser, hstring storeId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction Product::ShowUpsellAsync(System::IUser requestingUser, uint32_t privilegeId, hstring prioritizedSku, uint32_t upsellEntryPoint, hstring referProductId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction Product::ShowUpsellThirdPartyNoticeAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}