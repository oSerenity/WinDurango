#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    Windows::Foundation::IAsyncOperation<ClusterResult> GameServerPlatformService::AllocateClusterAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sessionTemplateName, hstring sessionName, bool abortIfQueued)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_clusterResult;
    }

    Windows::Foundation::IAsyncOperation<ClusterResult> GameServerPlatformService::AllocateClusterInlineAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sandboxId, hstring ticketId, hstring gsiSetId, hstring gameVariantId, uint64_t maxAllowedPlayers, hstring location, bool abortIfQueued)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clusterResult;
    }

    Windows::Foundation::IAsyncOperation<GameServerTicketStatus> GameServerPlatformService::GetTicketStatusAsync(uint32_t gameServerTitleId, hstring ticketId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_gameServerTicketStatus;
    }

    Windows::Foundation::IAsyncOperation<GameServerMetadataResult> GameServerPlatformService::GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_gameServerMetadataResult;
    }

    Windows::Foundation::IAsyncOperation<GameServerMetadataResult> GameServerPlatformService::GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale, Windows::Foundation::Collections::IMapView<hstring, hstring> filterTags)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_gameServerMetadataResult;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<QualityOfServiceServer>> GameServerPlatformService::GetQualityOfServiceServersAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_qualityOfServiceServers;
    }

    Windows::Foundation::IAsyncOperation<AllocationResult> GameServerPlatformService::AllocateSessionHost(uint32_t gameServerTitleId, Windows::Foundation::Collections::IVectorView<hstring> locations, hstring sessionId, hstring cloudGameId, hstring gameModeId, hstring sessionCookie)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_allocationResult;
    }

    Windows::Foundation::IAsyncOperation<AllocationResult> GameServerPlatformService::GetSessionHostAllocationStatus(uint32_t gameServerTitleId, hstring sessionId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_allocationResult;
    }
}