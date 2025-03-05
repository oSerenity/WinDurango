#pragma once
#include "Windows.Xbox.Management.Deployment.ContentInstallationInfo.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo>
    {
        ContentInstallationInfo() = default;

        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, guid const& contentId, hstring const& packageFamilyName, guid const& siblingId, guid const& variantId, ConsoleGeneration const& generation, IContentMetadata const& metadata);
        ContentInstallationInfo(hstring const& path, hstring const& oneStoreProductId, guid const& contentId, hstring const& packageFamilyName, IContentMetadata const& metadata);
        hstring Path();
        guid ContentId();
        IContentMetadata Metadata();
        hstring OneStoreProductId();
        hstring PackageFamilyName();
        bool InstallByDefault();

    private:
		hstring m_path{ L"" };
		hstring m_oneStoreProductId{ L"" };
		guid m_contentId{ L"" };
		hstring m_packageFamilyName{ L"" };
		guid m_siblingId{ L"" };
		guid m_variantId{ L"" };
		ConsoleGeneration m_generation{ ConsoleGeneration::Gen8 };
		IContentMetadata m_metadata{ nullptr };
		bool m_installByDefault{ true };
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentInstallationInfo : ContentInstallationInfoT<ContentInstallationInfo, implementation::ContentInstallationInfo>
    {
    };
}