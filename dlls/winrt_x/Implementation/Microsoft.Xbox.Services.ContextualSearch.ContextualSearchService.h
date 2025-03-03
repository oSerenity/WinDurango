#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchService : ContextualSearchServiceT<ContextualSearchService>
    {
        ContextualSearchService() = default;

        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchConfiguredStat>> GetConfigurationAsync(uint32_t titleId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, ContextualSearchFilterOperator filterOperator, hstring filterStatValue);
        Windows::Foundation::IAsyncOperation<ContextualSearchGameClipsResult> GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, ContextualSearchFilterOperator filterOperator, hstring filterStatValue);
        Windows::Foundation::IAsyncOperation<ContextualSearchGameClipsResult> GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery);

    private:
        Windows::Foundation::Collections::IVectorView<ContextualSearchConfiguredStat> m_configuredStats = single_threaded_vector<ContextualSearchConfiguredStat>().GetView();
		Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast> m_broadcasts = single_threaded_vector<ContextualSearchBroadcast>().GetView();
        ContextualSearchGameClipsResult m_gameClipsResult{ nullptr };
    };
}