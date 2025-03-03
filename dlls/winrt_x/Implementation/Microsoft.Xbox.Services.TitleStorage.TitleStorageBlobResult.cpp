#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    Windows::Storage::Streams::IBuffer TitleStorageBlobResult::BlobBuffer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_blobBuffer;
    }

    TitleStorageBlobMetadata TitleStorageBlobResult::BlobMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_blobMetadata;
    }
}