#pragma once
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentInstallManager
    {
        ContentInstallManager() = default;

        static void StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update);
        static void QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update);
        static void Uninstall(hstring const& packageInstanceId);
        static void CancelInstall(hstring const& packageInstanceId);
        static void PauseInstall(hstring const& packageInstanceId);
        static void ResumeInstall(hstring const& packageInstanceId);
        static winrt::Windows::Foundation::IAsyncAction RegistrationAsync(hstring packageInstanceId, uint32_t timeout);
        static bool IsInstalled(winrt::guid const& contentId);
        static winrt::Windows::Xbox::Management::Deployment::InstallQueueItemState GetQueuedItemState(hstring const& packageInstanceId);
        static winrt::hresult GetQueuedItemError(hstring const& packageInstanceId);
        static float GetQueuedItemInstallationProgress(hstring const& packageInstanceId);
        static winrt::Windows::Xbox::Management::Deployment::InstallQueueItemInstallationType GetQueuedItemInstallationType(hstring const& packageInstanceId);
        static uint64_t GetQueuedItemPackageSize(hstring const& packageInstanceId);
        static uint64_t GetQueuedUpdateDiskSpaceRequired(hstring const& packageInstanceId);
        static void GetPackagePersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated);
        static void DeletePackagePersistentLocalStorageById(winrt::guid const& contentId);
        static void GetPackageSharedStorageInfoById(winrt::guid const& contentId, uint64_t& sharedStorageSize, bool& allocated);
        static void GetPackageAppSpecificStorageById(hstring const& packageInstanceId, uint64_t& appSpecificSize);
        static winrt::Windows::Xbox::Management::Deployment::RegistrationState GetPackageRegistrationState(hstring const& packageInstanceId);
        static hstring GetPackageRegionSpecifier(hstring const& packageInstanceId, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierKey const& key, winrt::Windows::Xbox::Management::Deployment::RegionSpecifierType const& type);
        static void StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId);
        static void StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId);
        static winrt::guid FindDeviceWithAvailableSpaceForQueuedPackage(hstring const& packageInstanceId);
        static void ReQueuePackageInstallToDevice(hstring const& packageInstanceId, winrt::guid const& deviceId);
        static void StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update);
        static void QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update);
        static void QueueGroupLanInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId);
        static void QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value);
        static void QueryPackageUpgrade(winrt::guid const& productId, bool& isUpgraded, hstring& upgradedPackageFamilyName);
        static uint32_t GetInstallingItemCountForDisc(hstring const& discSetId);
        static winrt::Windows::Foundation::Collections::IVectorView<hstring> GetShrinkablePackages();
        static void GetTrimmedPackageSize(hstring const& packageInstanceId, uint64_t& currentPackageSize, uint64_t& trimmedPackageSize);
        static void TrimPackage(hstring const& packageInstanceId);
        static void PauseAllInstalls();
        static void ResumeAllInstalls();
        static void CancelAllInstalls();
        static void StartPackageCopyFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId);
        static void StartPackageMoveFromStorage(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, winrt::guid const& destDeviceId, hstring const& applicationId);
        static void StartInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId);
        static void QueueInstall(hstring const& source, winrt::guid const& contentId, winrt::Windows::Xbox::Management::Deployment::IContentMetadata const& metadata, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId);
        static void StartGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId);
        static void QueueGroupInstall(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Management::Deployment::IContentInstallationInfo> const& value, winrt::Windows::Xbox::Management::Deployment::InstallUpdateBehavior const& update, winrt::guid const& destDeviceId);
        static void QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId);
        static void GetPersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated, uint32_t& xcrdId);
        static void DeletePersistentLocalStorageById(hstring const& packageInstanceId);
        static void GetPersistentLocalStorageDeviceInfoById(hstring const& packageInstanceId, uint64_t& size, bool& allocated, winrt::guid& deviceId);
        static void QueueGroupInstallByOneStoreProductId(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& value, winrt::guid const& destDeviceId, hstring const& applicationId);
        static void PreIndexCloudPackage(winrt::guid const& contentId, hstring const& oneStoreProductId);
        static winrt::Windows::Foundation::IAsyncAction InstallWithAppInfoAsync(winrt::Windows::Xbox::ApplicationModel::State::Internal::IAppInfo appInfo, bool installDlc);
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentInstallManager : ContentInstallManagerT<ContentInstallManager, implementation::ContentInstallManager>
    {
    };
}
