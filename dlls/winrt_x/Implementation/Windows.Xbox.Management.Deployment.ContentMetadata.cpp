#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentMetadata::ContentMetadata(ContentMetadataInitData const& initData)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_initData = initData;
		m_attributes = ApplicationModel::State::Internal::GameAttributes();
    }

    ContentMetadata::ContentMetadata(ContentMetadataInitData const& initData, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_initData = initData;
		m_relatedMedia = relatedMedia;
		m_relatedMediaFamilyNames = relatedMediaFamilyNames;
		m_attributes = ApplicationModel::State::Internal::GameAttributes();
    }

    ContentMetadata::ContentMetadata(ContentMetadataInitData const& initData, guid const& siblingId, guid const& variantId, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_initData = initData;
		m_siblingId = siblingId;
		m_variantId = variantId;
		m_relatedMedia = relatedMedia;
		m_relatedMediaFamilyNames = relatedMediaFamilyNames;
		m_attributes = ApplicationModel::State::Internal::GameAttributes();
    }

    ContentMetadata::ContentMetadata(ContentMetadataInitData const& initData, guid const& siblingId, guid const& variantId, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, guid const& gameHubId, bool isGameHub)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_initData = initData;
		m_siblingId = siblingId;
		m_variantId = variantId;
		m_relatedMedia = relatedMedia;
		m_relatedMediaFamilyNames = relatedMediaFamilyNames;
		m_gameHubId = gameHubId;
		m_isGameHub = isGameHub;
		m_attributes = ApplicationModel::State::Internal::GameAttributes();
    }

    hstring ContentMetadata::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    guid ContentMetadata::ProductId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_productId;
    }

    Foundation::Uri ContentMetadata::LogoUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_logoUri;
    }

    Foundation::Uri ContentMetadata::SmallLogoUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_smallLogoUri;
    }

    Foundation::Uri ContentMetadata::WideLogoUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_wideLogoUri;
    }

    hstring ContentMetadata::DownloadUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_downloadUri;
    }

    CatalogType ContentMetadata::CatalogType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_catalogType;
    }

    uint64_t ContentMetadata::Size()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_size;
    }

    MetadataSource ContentMetadata::MetadataSource()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_metadataSource;
    }

    uint32_t ContentMetadata::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleId;
    }

    Foundation::Collections::IVectorView<guid> ContentMetadata::RelatedMedia()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_relatedMedia;
    }

    ApplicationModel::State::Internal::GameAttributes ContentMetadata::Attributes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_attributes;
    }

    Foundation::Collections::IVectorView<hstring> ContentMetadata::RelatedMediaFamilyNames()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_relatedMediaFamilyNames;
    }

    hstring ContentMetadata::Ratings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ratings;
    }

    guid ContentMetadata::SiblingId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_siblingId;
    }

    guid ContentMetadata::VariantId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_variantId;
    }

    guid ContentMetadata::GameHubId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameHubId;
    }

    bool ContentMetadata::IsGameHub()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isGameHub;
    }
}