#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobMetadataResult : TitleStorageBlobMetadataResultT<TitleStorageBlobMetadataResult>
    {
        TitleStorageBlobMetadataResult() = default;

        Windows::Foundation::Collections::IVectorView<TitleStorageBlobMetadata> Items();
        Windows::Foundation::IAsyncOperation<TitleStorage::TitleStorageBlobMetadataResult> GetNextAsync(uint32_t maxItems);
        bool HasNext();

    private:
		Windows::Foundation::Collections::IVectorView<TitleStorageBlobMetadata> m_items{ single_threaded_vector<TitleStorageBlobMetadata>().GetView() };
		TitleStorage::TitleStorageBlobMetadataResult m_result{ nullptr };
		bool m_hasNext{ false };
    };
}