#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItem.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItem.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    MediaItemType CatalogItem::MediaItemType()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_mediaItemType;
    }

    hstring CatalogItem::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
    }

    hstring CatalogItem::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    hstring CatalogItem::ReducedName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_reducedName;
    }

    uint32_t CatalogItem::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    Windows::Foundation::DateTime CatalogItem::ReleaseDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_releaseDate;
    }

    hstring CatalogItem::ProductId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_productId;
    }

    hstring CatalogItem::SandboxId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sandboxId;
    }

    bool CatalogItem::IsBundle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isBundle;
    }

    bool CatalogItem::IsPartOfAnyBundle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isPartOfAnyBundle;
    }

    Windows::Foundation::Collections::IVectorView<CatalogItemImage> CatalogItem::Images()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_images;
    }

    Windows::Foundation::Collections::IVectorView<hstring> CatalogItem::AvailabilityContentIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_availabilityContentIds;
    }
}