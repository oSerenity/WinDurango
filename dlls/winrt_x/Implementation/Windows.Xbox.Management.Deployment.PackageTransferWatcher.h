#pragma once
#include "Windows.Xbox.Management.Deployment.PackageTransferWatcher.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//////////

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher>
    {
        PackageTransferWatcher() = default;

        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher Create(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Foundation::Collections::IIterable<uint32_t> const& chunkIds);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher Create(winrt::Windows::ApplicationModel::Package const& package);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForChunkSpecifiers(winrt::Windows::ApplicationModel::Package const& package, winrt::Windows::Xbox::Management::Deployment::ChunkSpecifiers const& specifiers);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForContentPackage(winrt::Windows::Xbox::Management::Deployment::IContentPackage const& package);
        static winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher CreateForDownloadableContentPackage(winrt::Windows::Xbox::Management::Deployment::IDownloadableContentPackage const& package);
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> ChunkIds();
        winrt::event_token ChunkCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ChunkCompletedEventArgs> const& handler);
        void ChunkCompleted(winrt::event_token const& cookie) noexcept;
        winrt::event_token ProgressChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::ProgressChangedEventArgs> const& handler);
        void ProgressChanged(winrt::event_token const& cookie) noexcept;
        winrt::event_token TransferCompleted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferCompletedEventArgs> const& handler);
        void TransferCompleted(winrt::event_token const& cookie) noexcept;
        winrt::Windows::Xbox::Management::Deployment::PackageTransferStatus TransferStatus();
        winrt::Windows::Xbox::Management::Deployment::PackageTransferType TransferType();
        winrt::event_token TransferStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Management::Deployment::PackageTransferWatcher, winrt::Windows::Xbox::Management::Deployment::TransferStatusChangedEventArgs> const& handler);
        void TransferStatusChanged(winrt::event_token const& cookie) noexcept;
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct PackageTransferWatcher : PackageTransferWatcherT<PackageTransferWatcher, implementation::PackageTransferWatcher>
    {
    };
}
