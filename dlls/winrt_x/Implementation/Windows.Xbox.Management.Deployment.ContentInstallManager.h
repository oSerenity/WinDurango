#pragma once
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentInstallManager
    {
        ContentInstallManager() = default;

        static void StartInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update);
        static void QueueInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update);
        static void Uninstall(hstring const& packageInstanceId);
        static void CancelInstall(hstring const& packageInstanceId);
        static void PauseInstall(hstring const& packageInstanceId);
        static void ResumeInstall(hstring const& packageInstanceId);
        static Foundation::IAsyncAction RegistrationAsync(hstring packageInstanceId, uint32_t timeout);
        static bool IsInstalled(guid const& contentId);
        static InstallQueueItemState GetQueuedItemState(hstring const& packageInstanceId);
        static hresult GetQueuedItemError(hstring const& packageInstanceId);
        static float GetQueuedItemInstallationProgress(hstring const& packageInstanceId);
        static InstallQueueItemInstallationType GetQueuedItemInstallationType(hstring const& packageInstanceId);
        static uint64_t GetQueuedItemPackageSize(hstring const& packageInstanceId);
        static uint64_t GetQueuedUpdateDiskSpaceRequired(hstring const& packageInstanceId);
        static void GetPackagePersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated);
        static void DeletePackagePersistentLocalStorageById(guid const& contentId);
        static void GetPackageSharedStorageInfoById(guid const& contentId, uint64_t& sharedStorageSize, bool& allocated);
        static void GetPackageAppSpecificStorageById(hstring const& packageInstanceId, uint64_t& appSpecificSize);
        static RegistrationState GetPackageRegistrationState(hstring const& packageInstanceId);
        static hstring GetPackageRegionSpecifier(hstring const& packageInstanceId, RegionSpecifierKey const& key, RegionSpecifierType const& type);
        static void StartPackageCopyFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId);
        static void StartPackageMoveFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId);
        static guid FindDeviceWithAvailableSpaceForQueuedPackage(hstring const& packageInstanceId);
        static void ReQueuePackageInstallToDevice(hstring const& packageInstanceId, guid const& deviceId);
        static void StartGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update);
        static void QueueGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update);
        static void QueueGroupLanInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId);
        static void QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value);
        static void QueryPackageUpgrade(guid const& productId, bool& isUpgraded, hstring& upgradedPackageFamilyName);
        static uint32_t GetInstallingItemCountForDisc(hstring const& discSetId);
        static Foundation::Collections::IVectorView<hstring> GetShrinkablePackages();
        static void GetTrimmedPackageSize(hstring const& packageInstanceId, uint64_t& currentPackageSize, uint64_t& trimmedPackageSize);
        static void TrimPackage(hstring const& packageInstanceId);
        static void PauseAllInstalls();
        static void ResumeAllInstalls();
        static void CancelAllInstalls();
        static void StartPackageCopyFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId, hstring const& applicationId);
        static void StartPackageMoveFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId, hstring const& applicationId);
        static void StartInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update, guid const& destDeviceId);
        static void QueueInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update, guid const& destDeviceId);
        static void StartGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId);
        static void QueueGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId);
        static void QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value, guid const& destDeviceId);
        static void GetPersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated, uint32_t& xcrdId);
        static void DeletePersistentLocalStorageById(hstring const& packageInstanceId);
        static void GetPersistentLocalStorageDeviceInfoById(hstring const& packageInstanceId, uint64_t& size, bool& allocated, guid& deviceId);
        static void QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value, guid const& destDeviceId, hstring const& applicationId);
        static void PreIndexCloudPackage(guid const& contentId, hstring const& oneStoreProductId);
        static Foundation::IAsyncAction InstallWithAppInfoAsync(ApplicationModel::State::Internal::IAppInfo appInfo, bool installDlc);
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentInstallManager : ContentInstallManagerT<ContentInstallManager, implementation::ContentInstallManager>
    {
    };
}