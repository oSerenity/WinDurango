#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    Windows::Foundation::Collections::IVectorView<TitleStorageBlobMetadata> TitleStorageBlobMetadataResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_items;
    }

    Windows::Foundation::IAsyncOperation<TitleStorage::TitleStorageBlobMetadataResult> TitleStorageBlobMetadataResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_result;
    }

    bool TitleStorageBlobMetadataResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasNext;
    }
}