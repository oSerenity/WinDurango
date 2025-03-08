#pragma once
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.g.h"

namespace WinDurango::impl
{
	class ConnectedStorage;
}

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ContainerInfoQueryResult : ContainerInfoQueryResultT<ContainerInfoQueryResult>
    {
        ContainerInfoQueryResult() = default;
        ContainerInfoQueryResult(hstring containerNamePrefix, WinDurango::impl::ConnectedStorage* connectedStorage) {
            this->m_containerNamePrefix = containerNamePrefix;
			m_connectedStorage = connectedStorage;
        }

        Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo>> GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems);
        Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo>> GetContainerInfoAsync();
        Foundation::IAsyncOperation<uint32_t> GetItemCountAsync();
        Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo2>> GetContainerInfo2Async(uint32_t startIndex, uint32_t maxNumberOfItems);
        Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo2>> GetContainerInfo2Async();

    private:
        hstring m_containerNamePrefix;
		WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}