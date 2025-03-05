#pragma once
#include "Windows.Xbox.Management.Deployment.ContentMetadataPackager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentMetadataPackager : ContentMetadataPackagerT<ContentMetadataPackager>
    {
        ContentMetadataPackager() = default;

        Foundation::Collections::PropertySet PackageContentMetadata(guid const& deviceId, guid const& contentId, hstring const& oneStoreProductId, ContentMetadata const& metadata);

    private:
        Foundation::Collections::PropertySet m_packageContentMetadata{};
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentMetadataPackager : ContentMetadataPackagerT<ContentMetadataPackager, implementation::ContentMetadataPackager>
    {
    };
}