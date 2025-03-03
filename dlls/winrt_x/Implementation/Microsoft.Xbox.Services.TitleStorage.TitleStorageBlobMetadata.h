#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata>
    {
        TitleStorageBlobMetadata() = default;

        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag);
        TitleStorageBlobMetadata(hstring const& serviceConfigurationId, TitleStorageType const& storageType, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, Windows::Foundation::DateTime const& clientTimestamp);
        static TitleStorage::TitleStorageBlobMetadata CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag);
        hstring BlobPath();
        TitleStorageBlobType BlobType();
        TitleStorageType StorageType();
        hstring DisplayName();
        hstring ETag();
        Windows::Foundation::DateTime ClientTimestamp();
        void set(Windows::Foundation::DateTime const& value);
        uint64_t Length();
        hstring ServiceConfigurationId();
        hstring XboxUserId();
        hstring MultiplayerSessionTemplateName();
        hstring MultiplayerSessionName();

    private:
        hstring m_serviceConfigurationId{ L"" };
        TitleStorageType m_storageType{ TitleStorageType::GlobalStorage };
        hstring m_blobPath{ L"" };
		TitleStorageBlobType m_blobType{ TitleStorageBlobType::Binary };
		hstring m_xboxUserId{ L"" };
		hstring m_displayName{ L"" };
		hstring m_eTag{ L"" };
		Windows::Foundation::DateTime m_clientTimestamp{ Windows::Foundation::DateTime::clock::now() };
		uint64_t m_length{ 0 };
        hstring m_multiplayerSessionTemplateName{ L"" };
        hstring m_multiplayerSessionName{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::TitleStorage::factory_implementation
{
    struct TitleStorageBlobMetadata : TitleStorageBlobMetadataT<TitleStorageBlobMetadata, implementation::TitleStorageBlobMetadata>
    {
    };
}