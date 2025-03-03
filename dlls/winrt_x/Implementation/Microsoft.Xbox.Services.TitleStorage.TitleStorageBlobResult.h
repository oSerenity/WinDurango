#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.g.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobResult : TitleStorageBlobResultT<TitleStorageBlobResult>
    {
        TitleStorageBlobResult() = default;

        Windows::Storage::Streams::IBuffer BlobBuffer();
        TitleStorageBlobMetadata BlobMetadata();

    private:
		Windows::Storage::Streams::IBuffer m_blobBuffer{ nullptr };
		TitleStorageBlobMetadata m_blobMetadata{ nullptr };
    };
}