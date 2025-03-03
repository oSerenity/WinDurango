#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemAvailability.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItemAvailability : CatalogItemAvailabilityT<CatalogItemAvailability>
    {
        CatalogItemAvailability() = default;

        hstring ContentId();
        Windows::Foundation::Collections::IVectorView<hstring> AcceptablePaymentInstrumentTypes();
        hstring AvailabilityTitle();
        hstring AvailabilityDescription();
        hstring CurrencyCode();
        hstring DisplayPrice();
        hstring DisplayListPrice();
        hstring DistributionType();
        bool IsPurchasable();
        double ListPrice();
        double Price();
        uint32_t ConsumableQuantity();
        hstring PromotionalText();
        hstring SignedOffer();
        hstring OfferId();
        hstring OfferDisplayDataJson();

    private:
        hstring m_contentId{ L"" };
        Windows::Foundation::Collections::IVectorView<hstring> m_acceptablePaymentInstrumentTypes = single_threaded_vector<hstring>().GetView();
		hstring m_availabilityTitle{ L"" };
		hstring m_availabilityDescription{ L"" };
		hstring m_currencyCode{ L"" };
		hstring m_displayPrice{ L"" };
		hstring m_displayListPrice{ L"" };
		hstring m_distributionType{ L"" };
		bool m_isPurchasable{ false };
		double m_listPrice{ 0 };
		double m_price{ 0 };
		uint32_t m_consumableQuantity{ 0 };
		hstring m_promotionalText{ L"" };
		hstring m_signedOffer{ L"" };
		hstring m_offerId{ L"" };
		hstring m_offerDisplayDataJson{ L"" };
    };
}