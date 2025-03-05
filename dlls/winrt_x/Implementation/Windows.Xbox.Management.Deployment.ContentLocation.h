#pragma once
#include "Windows.Xbox.Management.Deployment.ContentLocation.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentLocation : ContentLocationT<ContentLocation>
    {
        ContentLocation() = default;

        ContentLocation(hstring const& path);
        Foundation::Collections::IVectorView<IContentInstallationInfo> InstallationInfos();
        IContentMetadata BundleMetadata();
        IContentInstallationInfo DefaultInstallationInfo();
        ContentLocationContentType ContentType();
        uint32_t DiscNumber();
        uint32_t DiscCount();
        hstring DiscSetId();
        Foundation::Collections::IVectorView<hstring> PackageTitles();
        Foundation::Collections::IVectorView<IContentInstallationInfo> HiddenInstallationInfos();

    private:
        hstring m_path{ L"" };
        Foundation::Collections::IVectorView<IContentInstallationInfo> m_installationInfos = single_threaded_vector<IContentInstallationInfo>().GetView();
		IContentMetadata m_bundleMetadata{ nullptr };
		IContentInstallationInfo m_defaultInstallationInfo{ nullptr };
		ContentLocationContentType m_contentType{ ContentLocationContentType::XboxOne };
		uint32_t m_discNumber{ 0 };
		uint32_t m_discCount{ 0 };
		hstring m_discSetId{ L"" };
		Foundation::Collections::IVectorView<hstring> m_packageTitles = single_threaded_vector<hstring>().GetView();
		Foundation::Collections::IVectorView<IContentInstallationInfo> m_hiddenInstallationInfos = single_threaded_vector<IContentInstallationInfo>().GetView();
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentLocation : ContentLocationT<ContentLocation, implementation::ContentLocation>
    {
    };
}