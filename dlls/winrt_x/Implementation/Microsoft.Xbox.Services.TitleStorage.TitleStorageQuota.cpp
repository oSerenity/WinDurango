#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.g.cpp"

namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    hstring TitleStorageQuota::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_serviceConfigurationId;
    }

    TitleStorageType TitleStorageQuota::StorageType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_storageType;
    }

    hstring TitleStorageQuota::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    hstring TitleStorageQuota::MultiplayerSessionTemplateName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_multiplayerSessionTemplateName;
    }

    hstring TitleStorageQuota::MultiplayerSessionName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_multiplayerSessionName;
    }

    uint64_t TitleStorageQuota::UsedBytes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_usedBytes;
    }

    uint64_t TitleStorageQuota::QuotaBytes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_quotaBytes;
    }
}