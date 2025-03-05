#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    Foundation::IAsyncOperation<CheckForUpdateResult> PackageTransferManager::CheckForUpdateAsync(IDownloadableContentPackage package)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<RequestUpdatePackageResult> PackageTransferManager::RequestUpdatePackageAsync(IDownloadableContentPackage package)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<RequestUpdatePackageResult> PackageTransferManager::RequestUpdateCurrentPackageAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Deployment::PackageTransferManager PackageTransferManager::Current()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        if (m_packageTransferManager == Deployment::PackageTransferManager{ nullptr })
            m_packageTransferManager = make<PackageTransferManager>();

        return m_packageTransferManager;
    }

    Deployment::PackageTransferManager PackageTransferManager::Create(Windows::ApplicationModel::Package const& package)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void PackageTransferManager::UpdateInstallOrder(Foundation::Collections::IIterable<uint32_t> const& chunkIds, UpdateInstallOrderBehavior const& updateBehavior)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    bool PackageTransferManager::IsChunkInstalled(uint32_t chunkId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return true;
    }

    bool PackageTransferManager::AreChunksInstalled(Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    uint32_t PackageTransferManager::FindChunkFromFile(hstring const& path)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    PackageTransferStatus PackageTransferManager::TransferStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    PackageTransferType PackageTransferManager::TransferType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    ChunkSpecifiers PackageTransferManager::AvailableChunkSpecifiers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    InstallationState PackageTransferManager::GetInstallationState(Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    InstallationState PackageTransferManager::GetInstallationState(ChunkSpecifiers const& specifiers)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<PackageTransferWatcher> PackageTransferManager::AddChunkSpecifiersAsync(ChunkSpecifiers additionalSpecifiers)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction PackageTransferManager::RemoveChunkSpecifiersAsync(ChunkSpecifiers removeSpecifiers)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}