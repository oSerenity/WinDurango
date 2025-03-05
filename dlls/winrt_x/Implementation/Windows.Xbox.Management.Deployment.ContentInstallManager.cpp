#include "pch.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.h"
#include "Windows.Xbox.Management.Deployment.ContentInstallManager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    void ContentInstallManager::StartInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::Uninstall(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::CancelInstall(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::PauseInstall(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::ResumeInstall(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction ContentInstallManager::RegistrationAsync(hstring packageInstanceId, uint32_t timeout)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    bool ContentInstallManager::IsInstalled(guid const& contentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    InstallQueueItemState ContentInstallManager::GetQueuedItemState(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    hresult ContentInstallManager::GetQueuedItemError(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    float ContentInstallManager::GetQueuedItemInstallationProgress(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    InstallQueueItemInstallationType ContentInstallManager::GetQueuedItemInstallationType(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint64_t ContentInstallManager::GetQueuedItemPackageSize(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint64_t ContentInstallManager::GetQueuedUpdateDiskSpaceRequired(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetPackagePersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::DeletePackagePersistentLocalStorageById(guid const& contentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetPackageSharedStorageInfoById(guid const& contentId, uint64_t& sharedStorageSize, bool& allocated)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetPackageAppSpecificStorageById(hstring const& packageInstanceId, uint64_t& appSpecificSize)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    RegistrationState ContentInstallManager::GetPackageRegistrationState(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    hstring ContentInstallManager::GetPackageRegionSpecifier(hstring const& packageInstanceId, RegionSpecifierKey const& key, RegionSpecifierType const& type)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartPackageCopyFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartPackageMoveFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    guid ContentInstallManager::FindDeviceWithAvailableSpaceForQueuedPackage(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::ReQueuePackageInstallToDevice(hstring const& packageInstanceId, guid const& deviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupLanInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueryPackageUpgrade(guid const& productId, bool& isUpgraded, hstring& upgradedPackageFamilyName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint32_t ContentInstallManager::GetInstallingItemCountForDisc(hstring const& discSetId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::Collections::IVectorView<hstring> ContentInstallManager::GetShrinkablePackages()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetTrimmedPackageSize(hstring const& packageInstanceId, uint64_t& currentPackageSize, uint64_t& trimmedPackageSize)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::TrimPackage(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::PauseAllInstalls()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::ResumeAllInstalls()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::CancelAllInstalls()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartPackageCopyFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartPackageMoveFromStorage(Foundation::Collections::IVectorView<hstring> const& packageInstanceIds, guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueInstall(hstring const& source, guid const& contentId, IContentMetadata const& metadata, InstallUpdateBehavior const& update, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::StartGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupInstall(Foundation::Collections::IVectorView<IContentInstallationInfo> const& value, InstallUpdateBehavior const& update, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value, guid const& destDeviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetPersistentLocalStorageInfoById(hstring const& packageInstanceId, uint64_t& persistentLocalStorageSize, bool& allocated, uint32_t& xcrdId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::DeletePersistentLocalStorageById(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::GetPersistentLocalStorageDeviceInfoById(hstring const& packageInstanceId, uint64_t& size, bool& allocated, guid& deviceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::QueueGroupInstallByOneStoreProductId(Foundation::Collections::IVectorView<hstring> const& value, guid const& destDeviceId, hstring const& applicationId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void ContentInstallManager::PreIndexCloudPackage(guid const& contentId, hstring const& oneStoreProductId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction ContentInstallManager::InstallWithAppInfoAsync(ApplicationModel::State::Internal::IAppInfo appInfo, bool installDlc)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}