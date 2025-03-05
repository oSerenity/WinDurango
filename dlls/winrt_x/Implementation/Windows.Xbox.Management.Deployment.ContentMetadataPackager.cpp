#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.h"
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    Foundation::Collections::PropertySet ContentMetadataPackager::PackageContentMetadata(guid const& deviceId, guid const& contentId, hstring const& oneStoreProductId, ContentMetadata const& metadata)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_packageContentMetadata = Foundation::Collections::PropertySet();

		m_packageContentMetadata.Insert(L"DeviceId", box_value(deviceId));
		m_packageContentMetadata.Insert(L"ContentId", box_value(contentId));
		m_packageContentMetadata.Insert(L"OneStoreProductId", box_value(oneStoreProductId));
		m_packageContentMetadata.Insert(L"Metadata", box_value(metadata));

		return m_packageContentMetadata;
    }
}