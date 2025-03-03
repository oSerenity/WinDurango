#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemAvailability.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemAvailability.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    hstring CatalogItemAvailability::ContentId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_contentId;
    }

    Windows::Foundation::Collections::IVectorView<hstring> CatalogItemAvailability::AcceptablePaymentInstrumentTypes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_acceptablePaymentInstrumentTypes;
    }

    hstring CatalogItemAvailability::AvailabilityTitle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_availabilityTitle;
    }

    hstring CatalogItemAvailability::AvailabilityDescription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_availabilityDescription;
    }

    hstring CatalogItemAvailability::CurrencyCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_currencyCode;
    }

    hstring CatalogItemAvailability::DisplayPrice()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayPrice;
    }

    hstring CatalogItemAvailability::DisplayListPrice()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayListPrice;
    }

    hstring CatalogItemAvailability::DistributionType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_distributionType;
    }

    bool CatalogItemAvailability::IsPurchasable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isPurchasable;
    }

    double CatalogItemAvailability::ListPrice()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_listPrice;
    }

    double CatalogItemAvailability::Price()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_price;
    }

    uint32_t CatalogItemAvailability::ConsumableQuantity()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_consumableQuantity;
    }

    hstring CatalogItemAvailability::PromotionalText()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_promotionalText;
    }

    hstring CatalogItemAvailability::SignedOffer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_signedOffer;
    }

    hstring CatalogItemAvailability::OfferId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_offerId;
    }

    hstring CatalogItemAvailability::OfferDisplayDataJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_offerDisplayDataJson;
    }
}