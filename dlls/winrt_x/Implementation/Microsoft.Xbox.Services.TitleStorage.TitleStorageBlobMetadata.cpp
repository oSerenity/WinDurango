#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_storageType = storageType;
		m_blobPath = blobPath;
		m_xboxUserId = xboxUserId;
    }

    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_storageType = storageType;
		m_blobPath = blobPath;
		m_blobType = blobType;
		m_xboxUserId = xboxUserId;
    }

    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, Windows::Foundation::DateTime const& clientTimestamp)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_storageType = storageType;
		m_blobPath = blobPath;
		m_blobType = blobType;
		m_xboxUserId = xboxUserId;
		m_displayName = displayName;
		m_eTag = eTag;
		m_clientTimestamp = clientTimestamp;
    }

    TitleStorage::TitleStorageBlobMetadata TitleStorageBlobMetadata::CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    hstring TitleStorageBlobMetadata::BlobPath()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_blobPath;
    }

    TitleStorageBlobType TitleStorageBlobMetadata::BlobType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_blobType;
    }

    TitleStorageType TitleStorageBlobMetadata::StorageType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_storageType;
    }

    hstring TitleStorageBlobMetadata::DisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayName;
    }

    hstring TitleStorageBlobMetadata::ETag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_eTag;
    }

    Windows::Foundation::DateTime TitleStorageBlobMetadata::ClientTimestamp()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_clientTimestamp;
    }

    void TitleStorageBlobMetadata::set(Windows::Foundation::DateTime const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_clientTimestamp = value;
    }

    uint64_t TitleStorageBlobMetadata::Length()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_length;
    }

    hstring TitleStorageBlobMetadata::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring TitleStorageBlobMetadata::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    hstring TitleStorageBlobMetadata::MultiplayerSessionTemplateName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_multiplayerSessionTemplateName;
    }

    hstring TitleStorageBlobMetadata::MultiplayerSessionName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_multiplayerSessionName;
    }
}