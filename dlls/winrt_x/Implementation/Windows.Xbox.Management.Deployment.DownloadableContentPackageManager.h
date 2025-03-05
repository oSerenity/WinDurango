#pragma once
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager>
    {
        DownloadableContentPackageManager() = default;

        Foundation::Collections::IVectorView<IDownloadableContentPackage> FindPackages(InstalledPackagesFilter const& filter);
        event_token DownloadableContentPackageInstallCompleted(DownloadableContentPackageInstallCompletedEventHandler const& handler);
        void DownloadableContentPackageInstallCompleted(event_token const& eventCookie) noexcept;
        event_token DownloadableContentPackageInstallCompletedWithDetails(Foundation::EventHandler<IDownloadableContentPackageInstallCompletedEventArgs> const& eventHandler);
        void DownloadableContentPackageInstallCompletedWithDetails(event_token const& eventCookie) noexcept;

    private:
        Foundation::Collections::IVectorView<IDownloadableContentPackage> m_packages = single_threaded_vector<IDownloadableContentPackage>().GetView();

		event<DownloadableContentPackageInstallCompletedEventHandler> m_downloadableContentPackageInstallCompleted;
		event<Foundation::EventHandler<IDownloadableContentPackageInstallCompletedEventArgs>> m_downloadableContentPackageInstallCompletedWithDetails;
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct DownloadableContentPackageManager : DownloadableContentPackageManagerT<DownloadableContentPackageManager, implementation::DownloadableContentPackageManager>
    {
    };
}