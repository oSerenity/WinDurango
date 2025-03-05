#pragma once
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata>
    {
        ContentMetadata() = default;

        ContentMetadata(ContentMetadataInitData const& initData);
        ContentMetadata(ContentMetadataInitData const& initData, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(ContentMetadataInitData const& initData, guid const& siblingId, guid const& variantId, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(ContentMetadataInitData const& initData, guid const& siblingId, guid const& variantId, Foundation::Collections::IVectorView<guid> const& relatedMedia, Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, guid const& gameHubId, bool isGameHub);
        hstring Name();
        guid ProductId();
        Foundation::Uri LogoUri();
        Foundation::Uri SmallLogoUri();
        Foundation::Uri WideLogoUri();
        hstring DownloadUri();
        CatalogType CatalogType();
        uint64_t Size();
        MetadataSource MetadataSource();
        uint32_t TitleId();
        Foundation::Collections::IVectorView<guid> RelatedMedia();
        ApplicationModel::State::Internal::GameAttributes Attributes();
        Foundation::Collections::IVectorView<hstring> RelatedMediaFamilyNames();
        hstring Ratings();
        guid SiblingId();
        guid VariantId();
        guid GameHubId();
        bool IsGameHub();

    private:
        ContentMetadataInitData m_initData;
        Foundation::Collections::IVectorView<guid> m_relatedMedia = single_threaded_vector<guid>().GetView();
		Foundation::Collections::IVectorView<hstring> m_relatedMediaFamilyNames = single_threaded_vector<hstring>().GetView();
        hstring m_name{ L"" };
		guid m_productId{ guid(L"") };
		Foundation::Uri m_logoUri{ nullptr };
		Foundation::Uri m_smallLogoUri{ nullptr };
		Foundation::Uri m_wideLogoUri{ nullptr };
		hstring m_downloadUri{ L"" };
		Deployment::CatalogType m_catalogType{ CatalogType::Unknown };
		uint64_t m_size{ 0 };
		Deployment::MetadataSource m_metadataSource{ MetadataSource::Unknown };
		uint32_t m_titleId{ 0 };
        ApplicationModel::State::Internal::GameAttributes m_attributes;
		hstring m_ratings{ L"" };
		guid m_siblingId{ guid(L"") };
		guid m_variantId{ guid(L"") };
		guid m_gameHubId{ guid(L"") };
		bool m_isGameHub{ false };
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata, implementation::ContentMetadata>
    {
    };
}