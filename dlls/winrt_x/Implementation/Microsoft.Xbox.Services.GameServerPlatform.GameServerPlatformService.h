#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerPlatformService : GameServerPlatformServiceT<GameServerPlatformService>
    {
        GameServerPlatformService() = default;

        Windows::Foundation::IAsyncOperation<ClusterResult> AllocateClusterAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sessionTemplateName, hstring sessionName, bool abortIfQueued);
        Windows::Foundation::IAsyncOperation<ClusterResult> AllocateClusterInlineAsync(uint32_t gameServerTitleId, hstring serviceConfigurationId, hstring sandboxId, hstring ticketId, hstring gsiSetId, hstring gameVariantId, uint64_t maxAllowedPlayers, hstring location, bool abortIfQueued);
        Windows::Foundation::IAsyncOperation<GameServerTicketStatus> GetTicketStatusAsync(uint32_t gameServerTitleId, hstring ticketId);
        Windows::Foundation::IAsyncOperation<GameServerMetadataResult> GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale);
        Windows::Foundation::IAsyncOperation<GameServerMetadataResult> GetGameServerMetadataAsync(uint32_t titleId, uint32_t maxAllowedPlayers, bool publisherOnly, uint32_t maxVariants, hstring locale, Windows::Foundation::Collections::IMapView<hstring, hstring> filterTags);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<QualityOfServiceServer>> GetQualityOfServiceServersAsync();
        Windows::Foundation::IAsyncOperation<AllocationResult> AllocateSessionHost(uint32_t gameServerTitleId, Windows::Foundation::Collections::IVectorView<hstring> locations, hstring sessionId, hstring cloudGameId, hstring gameModeId, hstring sessionCookie);
        Windows::Foundation::IAsyncOperation<AllocationResult> GetSessionHostAllocationStatus(uint32_t gameServerTitleId, hstring sessionId);

    private:
        ClusterResult m_clusterResult{ nullptr };
		GameServerTicketStatus m_gameServerTicketStatus{ nullptr };
		GameServerMetadataResult m_gameServerMetadataResult{ nullptr };
        Windows::Foundation::Collections::IVectorView<QualityOfServiceServer> m_qualityOfServiceServers = single_threaded_vector<QualityOfServiceServer>().GetView();
		AllocationResult m_allocationResult{ nullptr };
    };
}