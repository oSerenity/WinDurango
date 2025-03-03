#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.g.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardService : LeaderboardServiceT<LeaderboardService>
    {
        LeaderboardService() = default;

        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring sortOrder, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardForSocialGroupWithSkipToRankAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t skipToRank, hstring sortOrder, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<LeaderboardResult> GetLeaderboardForSocialGroupWithSkipToUserAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring skipToXboxUserId, hstring sortOrder, uint32_t maxItems);

    private:
        LeaderboardResult m_leaderboardResult{ nullptr };
    };
}