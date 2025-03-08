#include "pch.h"
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.h"
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.g.cpp"
#include "../ConnectedStorage/ConnectedStorage.h"
#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.Storage.FileProperties.h>
#include <winrt/Windows.Foundation.Collections.h>

namespace winrt::Windows::Xbox::Storage::implementation
{
    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo>> ContainerInfoQueryResult::GetContainerInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo>> ContainerInfoQueryResult::GetContainerInfoAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<uint32_t> ContainerInfoQueryResult::GetItemCountAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo2>> ContainerInfoQueryResult::GetContainerInfo2Async(uint32_t startIndex, uint32_t maxNumberOfItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<ContainerInfo2>> ContainerInfoQueryResult::GetContainerInfo2Async()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return co_await m_connectedStorage->GetContainerInfo2Async();
    }
}