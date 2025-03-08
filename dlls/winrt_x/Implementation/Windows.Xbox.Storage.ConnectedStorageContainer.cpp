#include "pch.h"
#include "Windows.Xbox.Storage.ConnectedStorageContainer.h"
#include "Windows.Xbox.Storage.ConnectedStorageContainer.g.cpp"
#include "../ConnectedStorage/ConnectedStorage.h"
#include "Windows.Xbox.Storage.BlobInfoQueryResult.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    hstring ConnectedStorageContainer::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return containerName;
    }

    ConnectedStorageSpace ConnectedStorageContainer::OwningSpace()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction ConnectedStorageContainer::SubmitUpdatesAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_await m_connectedStorage->Upload(Name( ), blobsToWrite, blobsToDelete);
    }

    Foundation::IAsyncAction ConnectedStorageContainer::ReadAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToRead)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_await m_connectedStorage->Read(Name( ), blobsToRead);
    }

    Foundation::IAsyncOperation<Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer>> ConnectedStorageContainer::GetAsync(Foundation::Collections::IIterable<hstring> blobsToRead)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction ConnectedStorageContainer::SubmitPropertySetUpdatesAsync(Foundation::Collections::IPropertySet blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction ConnectedStorageContainer::SubmitUpdatesAsync(Foundation::Collections::IMapView<hstring, Windows::Storage::Streams::IBuffer> blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_await m_connectedStorage->Upload(Name(), blobsToWrite, blobsToDelete, displayName);
    }

    Foundation::IAsyncAction ConnectedStorageContainer::SubmitPropertySetUpdatesAsync(Foundation::Collections::IPropertySet blobsToWrite, Foundation::Collections::IIterable<hstring> blobsToDelete, hstring displayName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Storage::BlobInfoQueryResult ConnectedStorageContainer::CreateBlobInfoQuery(hstring const& blobNamePrefix)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<BlobInfoQueryResult>(Name(), blobNamePrefix, m_connectedStorage);
    }
}
