#include "pch.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.h"
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.cpp"

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    Deployment::PackageTransferWatcher PackageTransferWatcher::Create(Windows::ApplicationModel::Package const& package, Foundation::Collections::IIterable<uint32_t> const& chunkIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<PackageTransferWatcher>();
    }

    Deployment::PackageTransferWatcher PackageTransferWatcher::Create(Windows::ApplicationModel::Package const& package)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return winrt::make<PackageTransferWatcher>();
    }

    Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForChunkSpecifiers(Windows::ApplicationModel::Package const& package, ChunkSpecifiers const& specifiers)
    {
        LOG_FUNCTION_NAME();
    	PRINT_UNIMPLEMENTED_FUNCTION();

		return winrt::make<PackageTransferWatcher>();
    }

    Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForContentPackage(IContentPackage const& package)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<PackageTransferWatcher>();
    }

    Deployment::PackageTransferWatcher PackageTransferWatcher::CreateForDownloadableContentPackage(IDownloadableContentPackage const& package)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<PackageTransferWatcher>();
    }

    Foundation::Collections::IVectorView<uint32_t> PackageTransferWatcher::ChunkIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chunkIds;
    }

    event_token PackageTransferWatcher::ChunkCompleted(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ChunkCompletedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chunkCompletedEvent.add(handler);
    }

    void PackageTransferWatcher::ChunkCompleted(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_chunkCompletedEvent.remove(cookie);
    }

    event_token PackageTransferWatcher::ProgressChanged(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, ProgressChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_progressChangedEvent.add(handler);
    }

    void PackageTransferWatcher::ProgressChanged(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_progressChangedEvent.remove(cookie);
    }

    event_token PackageTransferWatcher::TransferCompleted(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferCompletedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_transferCompletedEvent.add(handler);
    }

    void PackageTransferWatcher::TransferCompleted(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_transferCompletedEvent.remove(cookie);
    }

    PackageTransferStatus PackageTransferWatcher::TransferStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_transferStatus;
    }

    PackageTransferType PackageTransferWatcher::TransferType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_transferType;
    }

    event_token PackageTransferWatcher::TransferStatusChanged(Foundation::TypedEventHandler<Deployment::PackageTransferWatcher, TransferStatusChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_transferStatusChangedEvent.add(handler);
    }

    void PackageTransferWatcher::TransferStatusChanged(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_transferStatusChangedEvent.remove(cookie);
    }
}