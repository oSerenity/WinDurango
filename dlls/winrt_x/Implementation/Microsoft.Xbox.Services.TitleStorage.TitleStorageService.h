#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.g.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageService : TitleStorageServiceT<TitleStorageService>
    {
        TitleStorageService() = default;

        Windows::Foundation::IAsyncOperation<TitleStorageQuota> GetQuotaAsync(hstring serviceConfigurationId, TitleStorageType storageType);
        Windows::Foundation::IAsyncOperation<TitleStorageQuota> GetQuotaForSessionStorageAsync(hstring serviceConfigurationId, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName);
        Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadataResult> GetBlobMetadataAsync(hstring serviceConfigurationId, TitleStorageType storageType, hstring blobPath, hstring xboxUserId, uint32_t skipItems, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadataResult> GetBlobMetadataForSessionStorageAsync(hstring serviceConfigurationId, hstring blobPath, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName, uint32_t skipItems, uint32_t maxItems);
        Windows::Foundation::IAsyncAction DeleteBlobAsync(TitleStorageBlobMetadata blobMetadata, bool deleteOnlyIfETagMatches);
        Windows::Foundation::IAsyncOperation<TitleStorageBlobResult> DownloadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery);
        Windows::Foundation::IAsyncOperation<TitleStorageBlobResult> DownloadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery, uint32_t preferredDownloadBlockSize);
        Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadata> UploadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, uint32_t preferredUploadBlockSize);

    private:
        TitleStorageQuota m_quota{ nullptr };
        TitleStorageBlobMetadataResult m_blobMetadataResult{ nullptr };
        TitleStorageBlobResult m_blobResult{ nullptr };
        TitleStorageBlobMetadata m_blobMetadata{ nullptr };
    };
}