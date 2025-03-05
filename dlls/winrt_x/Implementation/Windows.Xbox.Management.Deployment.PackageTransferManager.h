#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferManager.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferManager : PackageTransferManagerT<PackageTransferManager>
    {
        PackageTransferManager() = default;

        static Foundation::IAsyncOperation<CheckForUpdateResult> CheckForUpdateAsync(IDownloadableContentPackage package);
        static Foundation::IAsyncOperation<RequestUpdatePackageResult> RequestUpdatePackageAsync(IDownloadableContentPackage package);
        static Foundation::IAsyncOperation<RequestUpdatePackageResult> RequestUpdateCurrentPackageAsync();
        static Deployment::PackageTransferManager Current();
        static Deployment::PackageTransferManager Create(Windows::ApplicationModel::Package const& package);
        void UpdateInstallOrder(Foundation::Collections::IIterable<uint32_t> const& chunkIds, UpdateInstallOrderBehavior const& updateBehavior);
        bool IsChunkInstalled(uint32_t chunkId);
        bool AreChunksInstalled(Foundation::Collections::IIterable<uint32_t> const& chunkIds);
        uint32_t FindChunkFromFile(hstring const& path);
        PackageTransferStatus TransferStatus();
        PackageTransferType TransferType();
        ChunkSpecifiers AvailableChunkSpecifiers();
        InstallationState GetInstallationState(Foundation::Collections::IIterable<uint32_t> const& chunkIds);
        InstallationState GetInstallationState(ChunkSpecifiers const& specifiers);
        Foundation::IAsyncOperation<PackageTransferWatcher> AddChunkSpecifiersAsync(ChunkSpecifiers additionalSpecifiers);
        Foundation::IAsyncAction RemoveChunkSpecifiersAsync(ChunkSpecifiers removeSpecifiers);

        inline static Deployment::PackageTransferManager m_packageTransferManager = { nullptr };
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferManager : PackageTransferManagerT<PackageTransferManager, implementation::PackageTransferManager>
    {
    };
}