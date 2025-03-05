#include "pch.h"
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.h"
#include "Windows.Xbox.Management.Deployment.DownloadableContentPackageManager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    Foundation::Collections::IVectorView<IDownloadableContentPackage> DownloadableContentPackageManager::FindPackages(InstalledPackagesFilter const& filter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_packages;
    }

	event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(DownloadableContentPackageInstallCompletedEventHandler const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_downloadableContentPackageInstallCompleted.add(handler);
    }

	void DownloadableContentPackageManager::DownloadableContentPackageInstallCompleted(event_token const& eventCookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_downloadableContentPackageInstallCompleted.remove(eventCookie);
    }

	event_token DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(Foundation::EventHandler<IDownloadableContentPackageInstallCompletedEventArgs> const& eventHandler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_downloadableContentPackageInstallCompletedWithDetails.add(eventHandler);
    }

    void DownloadableContentPackageManager::DownloadableContentPackageInstallCompletedWithDetails(event_token const& eventCookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_downloadableContentPackageInstallCompletedWithDetails.remove(eventCookie);
    }
}