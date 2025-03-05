#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentInstallationInfo::ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, guid const& contentId, hstring const& packageFamilyName, guid const& siblingId, guid const& variantId, ConsoleGeneration const& generation, IContentMetadata const& metadata)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_path = path;
		m_oneStoreProductId = oneStoreProductId;
		m_contentId = contentId;
		m_packageFamilyName = packageFamilyName;
		m_siblingId = siblingId;
		m_variantId = variantId;
		m_generation = generation;
		m_metadata = metadata;
    }

    ContentInstallationInfo::ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, guid const& contentId, hstring const& packageFamilyName, IContentMetadata const& metadata)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_path = path;
		m_oneStoreProductId = oneStoreProductId;
		m_contentId = contentId;
		m_packageFamilyName = packageFamilyName;
		m_metadata = metadata;
    }

    hstring ContentInstallationInfo::Path()
    {
        LOG_FUNCTION_NAME();

        return m_path;
    }

    guid ContentInstallationInfo::ContentId()
    {
        LOG_FUNCTION_NAME();

		return m_contentId;
    }

    IContentMetadata ContentInstallationInfo::Metadata()
    {
        LOG_FUNCTION_NAME();

        return m_metadata;
    }

    hstring ContentInstallationInfo::OneStoreProductId()
    {
        LOG_FUNCTION_NAME();

		return m_oneStoreProductId;
    }

    hstring ContentInstallationInfo::PackageFamilyName()
    {
        LOG_FUNCTION_NAME();

        return m_packageFamilyName;
    }

    bool ContentInstallationInfo::InstallByDefault()
    {
        LOG_FUNCTION_NAME();

        return m_installByDefault;
    }
}