#include "pch.h"
#include "Windows.Xbox.Storage.BlobInfoQueryResult.h"
#include "Windows.Xbox.Storage.BlobInfoQueryResult.g.cpp"
#include "../ConnectedStorage/ConnectedStorage.h"
#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Storage.FileProperties.h>

namespace winrt::Windows::Xbox::Storage::implementation
{
    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<BlobInfo>> BlobInfoQueryResult::GetBlobInfoAsync(uint32_t startIndex, uint32_t maxNumberOfItems)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        co_await resume_background( );
    }

    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<BlobInfo>> BlobInfoQueryResult::GetBlobInfoAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return co_await m_connectedStorage->GetBlobInfoAsync(parentName, prefix);
    }

    Foundation::IAsyncOperation<uint32_t> BlobInfoQueryResult::GetItemCountAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_await resume_background( );
    }
}