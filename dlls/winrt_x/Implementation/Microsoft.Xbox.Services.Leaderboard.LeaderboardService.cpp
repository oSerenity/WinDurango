#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring sortOrder, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupWithSkipToRankAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t skipToRank, hstring sortOrder, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }

    Windows::Foundation::IAsyncOperation<LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupWithSkipToUserAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring skipToXboxUserId, hstring sortOrder, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_leaderboardResult;
    }
}