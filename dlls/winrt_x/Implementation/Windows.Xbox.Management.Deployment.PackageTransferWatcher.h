#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.h"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher>
    {
        PackageTransferWatcher() = default;

        static Deployment::PackageTransferWatcher Create(Windows::ApplicationModel::Package const& package, Foundation::Collections::IIterable<uint32_t> const& chunkIds);
        static Deployment::PackageTransferWatcher Create(Windows::ApplicationModel::Package const& package);
        static Deployment::PackageTransferWatcher CreateForChunkSpecifiers(Windows::ApplicationModel::Package const& package, ChunkSpecifiers const& specifiers);
        static Deployment::PackageTransferWatcher CreateForContentPackage(IContentPackage const& package);
        static Deployment::PackageTransferWatcher CreateForDownloadableContentPackage(IDownloadableContentPackage const& package);
        Foundation::Collections::IVectorView<uint32_t> ChunkIds();
        event_token ChunkCompleted(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ChunkCompletedEventArgs> const& handler);
        void ChunkCompleted(event_token const& cookie) noexcept;
        event_token ProgressChanged(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ProgressChangedEventArgs> const& handler);
        void ProgressChanged(event_token const& cookie) noexcept;
        event_token TransferCompleted(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferCompletedEventArgs> const& handler);
        void TransferCompleted(event_token const& cookie) noexcept;
        PackageTransferStatus TransferStatus();
        PackageTransferType TransferType();
        event_token TransferStatusChanged(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferStatusChangedEventArgs> const& handler);
        void TransferStatusChanged(event_token const& cookie) noexcept;

    private:
		static inline Windows::ApplicationModel::Package m_package = { nullptr };
		static inline Deployment::PackageTransferWatcher n_watcher = { nullptr };
		static inline ChunkSpecifiers m_specifiers = { nullptr };

		Foundation::Collections::IVectorView<uint32_t> m_chunkIds = single_threaded_vector<uint32_t>().GetView();

		event<Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ChunkCompletedEventArgs>> m_chunkCompletedEvent;
		event<Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ProgressChangedEventArgs>> m_progressChangedEvent;
		event<Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferCompletedEventArgs>> m_transferCompletedEvent;
		event<Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferStatusChangedEventArgs>> m_transferStatusChangedEvent;

        PackageTransferStatus m_transferStatus = PackageTransferStatus::None;
		PackageTransferType m_transferType = PackageTransferType::None;
    };
}

namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher, implementation::PackageTransferWatcher>
    {
    };
}