#pragma once
#include "Windows.Xbox.ApplicationModel.Store.Product.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    struct Product
    {
        Product() = default;

        static Foundation::IAsyncAction ShowPurchaseAsync(System::IUser requestingUser, hstring offer);
        static Foundation::IAsyncAction ShowDetailsAsync(System::IUser requestingUser, hstring productId);
        static Foundation::IAsyncAction ShowMarketplaceAsync(System::IUser requestingUser, ProductItemTypes inputProductItemType, hstring inputProductId, ProductItemTypes resultProductItemTypes);
        static Foundation::IAsyncAction ShowRedeemCodeAsync(System::IUser user, hstring offer);
        static Foundation::IAsyncAction ShowSubscriptionAsync(System::IUser user, hstring productId, uint32_t privilegeId);
        static Foundation::IAsyncOperation<PrivilegeCheckResult> CheckPrivilegeAsync(System::IUser user, uint32_t privilegeId, bool attemptResolution, hstring friendlyDisplay);
        static Foundation::IAsyncOperation<PrivilegeCheckResult> CheckPrivilegesAsync(System::IUser user, Foundation::Collections::IVectorView<uint32_t> privilegeIds, bool attemptResolution, hstring friendlyDisplay);
        static event_token ProductPurchased(ProductPurchasedEventHandler const& handler);
        static void ProductPurchased(event_token const& token) noexcept;
        static Foundation::IAsyncAction ShowPurchaseForStoreIdAsync(System::IUser requestingUser, hstring storeId);
        static Foundation::IAsyncAction ShowDetailsForStoreIdAsync(System::IUser requestingUser, hstring storeId);
        static Foundation::IAsyncAction ShowUpsellAsync(System::IUser requestingUser, uint32_t privilegeId, hstring prioritizedSku, uint32_t upsellEntryPoint, hstring referProductId);
        static Foundation::IAsyncAction ShowUpsellThirdPartyNoticeAsync(System::IUser requestingUser);
    private:
        inline static event<ProductPurchasedEventHandler> m_productPurchasedEvent;

        inline static auto m_privilegeCheckResult = PrivilegeCheckResult::NoIssue;
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::Store::factory_implementation
{
    struct Product : ProductT<Product, implementation::Product>
    {
    };
}