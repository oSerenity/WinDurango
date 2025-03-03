#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchConfiguredStat>> ContextualSearchService::GetConfigurationAsync(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_configuredStats;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_broadcasts;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_broadcasts;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ContextualSearchBroadcast>> ContextualSearchService::GetBroadcastsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, ContextualSearchFilterOperator filterOperator, hstring filterStatValue)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_broadcasts;
    }

    Windows::Foundation::IAsyncOperation<ContextualSearchGameClipsResult> ContextualSearchService::GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring filterStatName, ContextualSearchFilterOperator filterOperator, hstring filterStatValue)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_gameClipsResult;
    }

    Windows::Foundation::IAsyncOperation<ContextualSearchGameClipsResult> ContextualSearchService::GetGameClipsAsync(uint32_t titleId, uint32_t skipItems, uint32_t maxItems, hstring orderByStatName, bool orderAscending, hstring searchQuery)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_gameClipsResult;
    }
}