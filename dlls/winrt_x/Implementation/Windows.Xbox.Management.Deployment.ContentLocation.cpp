#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.h"
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    ContentLocation::ContentLocation(hstring const& path)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_path = path;
    }

    Foundation::Collections::IVectorView<IContentInstallationInfo> ContentLocation::InstallationInfos()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_installationInfos;
    }

    IContentMetadata ContentLocation::BundleMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bundleMetadata;
    }

    IContentInstallationInfo ContentLocation::DefaultInstallationInfo()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_defaultInstallationInfo;
    }

    ContentLocationContentType ContentLocation::ContentType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_contentType;
    }

    uint32_t ContentLocation::DiscNumber()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_discNumber;
    }

    uint32_t ContentLocation::DiscCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_discCount;
    }

    hstring ContentLocation::DiscSetId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_discSetId;
    }

    Foundation::Collections::IVectorView<hstring> ContentLocation::PackageTitles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageTitles;
    }

    Foundation::Collections::IVectorView<IContentInstallationInfo> ContentLocation::HiddenInstallationInfos()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hiddenInstallationInfos;
    }
}