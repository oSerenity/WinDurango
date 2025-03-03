#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemDetails.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemDetails.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    MediaItemType CatalogItemDetails::MediaItemType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mediaItemType;
    }

    hstring CatalogItemDetails::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    hstring CatalogItemDetails::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    hstring CatalogItemDetails::ReducedName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_reducedName;
    }

    hstring CatalogItemDetails::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_description;
    }

    uint32_t CatalogItemDetails::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleId;
    }

    Windows::Foundation::DateTime CatalogItemDetails::ReleaseDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_releaseDate;
    }

    hstring CatalogItemDetails::ProductId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_productId;
    }

    hstring CatalogItemDetails::SandboxId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sandboxId;
    }

    bool CatalogItemDetails::IsBundle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isBundle;
    }

    bool CatalogItemDetails::IsPartOfAnyBundle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isPartOfAnyBundle;
    }

    Windows::Foundation::Collections::IVectorView<CatalogItemImage> CatalogItemDetails::Images()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_images;
    }

    Windows::Foundation::Collections::IVectorView<CatalogItemAvailability> CatalogItemDetails::Availabilities()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_availabilities;
    }
}