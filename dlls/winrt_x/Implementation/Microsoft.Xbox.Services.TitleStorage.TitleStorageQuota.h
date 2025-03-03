#pragma once
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.g.h"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    struct TitleStorageQuota : TitleStorageQuotaT<TitleStorageQuota>
    {
        TitleStorageQuota() = default;

        hstring ServiceConfigurationId();
        TitleStorageType StorageType();
        hstring XboxUserId();
        hstring MultiplayerSessionTemplateName();
        hstring MultiplayerSessionName();
        uint64_t UsedBytes();
        uint64_t QuotaBytes();

    private:
        hstring m_serviceConfigurationId{ L"serviceConfigurationId" };
		TitleStorageType m_storageType{ TitleStorageType::GlobalStorage };
		hstring m_xboxUserId{ L"xboxUserId" };
		hstring m_multiplayerSessionTemplateName{ L"multiplayerSessionTemplateName" };
		hstring m_multiplayerSessionName{ L"multiplayerSessionName" };
		uint64_t m_usedBytes{ 0 };
		uint64_t m_quotaBytes{ 0 };
    };
}