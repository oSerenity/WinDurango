#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    Windows::Foundation::IAsyncOperation<TitleStorageQuota> TitleStorageService::GetQuotaAsync(hstring serviceConfigurationId, TitleStorageType storageType)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_quota;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageQuota> TitleStorageService::GetQuotaForSessionStorageAsync(hstring serviceConfigurationId, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_quota;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataAsync(hstring serviceConfigurationId, TitleStorageType storageType, hstring blobPath, hstring xboxUserId, uint32_t skipItems, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_blobMetadataResult;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadataResult> TitleStorageService::GetBlobMetadataForSessionStorageAsync(hstring serviceConfigurationId, hstring blobPath, hstring multiplayerSessionTemplateName, hstring multiplayerSessionName, uint32_t skipItems, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_blobMetadataResult;
    }

    Windows::Foundation::IAsyncAction TitleStorageService::DeleteBlobAsync(TitleStorageBlobMetadata blobMetadata, bool deleteOnlyIfETagMatches)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_blobResult;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageBlobResult> TitleStorageService::DownloadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, hstring selectQuery, uint32_t preferredDownloadBlockSize)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_blobResult;
    }

    Windows::Foundation::IAsyncOperation<TitleStorageBlobMetadata> TitleStorageService::UploadBlobAsync(TitleStorageBlobMetadata blobMetadata, Windows::Storage::Streams::IBuffer blobBuffer, TitleStorageETagMatchCondition etagMatchCondition, uint32_t preferredUploadBlockSize)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_blobMetadata;
    }
}