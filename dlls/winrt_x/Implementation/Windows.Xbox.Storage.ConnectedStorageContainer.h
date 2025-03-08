#pragma once
#include "Windows.Xbox.Storage.ConnectedStorageContainer.g.h"

namespace WinDurango::impl
{
	class ConnectedStorage;
}

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ConnectedStorageContainer : ConnectedStorageContainerT<ConnectedStorageContainer>
    {
        ConnectedStorageContainer() = default;
        ConnectedStorageContainer(hstring name, WinDurango::impl::ConnectedStorage* connectedStorage)
        {
			containerName = name;
			m_connectedStorage = connectedStorage;
        }

        hstring Name();
        Xbox::Storage::ConnectedStorageSpace OwningSpace();
        Foundation::IAsyncAction SubmitUpdatesAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete);
        Foundation::IAsyncAction ReadAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToRead);
        Foundation::IAsyncOperation<Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>> GetAsync(Foundation::Collections::IIterable<hstring> blobsToRead);
        Foundation::IAsyncAction SubmitPropertySetUpdatesAsync(Foundation::Collections::IPropertySet blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete);
        Foundation::IAsyncAction SubmitUpdatesAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName);
        Foundation::IAsyncAction SubmitPropertySetUpdatesAsync(Foundation::Collections::IPropertySet blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName);
        Xbox::Storage::BlobInfoQueryResult CreateBlobInfoQuery(hstring const& blobNamePrefix);

        hstring containerName;
        WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}