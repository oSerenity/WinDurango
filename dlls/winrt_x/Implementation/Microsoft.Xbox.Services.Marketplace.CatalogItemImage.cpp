#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemImage.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemImage.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    hstring CatalogItemImage::Id()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    Windows::Foundation::Uri CatalogItemImage::ResizeUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_resizeUrl;
    }

    Windows::Foundation::Collections::IVectorView<hstring> CatalogItemImage::Purposes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_purposes;
    }

    hstring CatalogItemImage::Purpose()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_purpose;
    }

    uint32_t CatalogItemImage::Height()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_height;
    }

    uint32_t CatalogItemImage::Width()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_width;
    }
}