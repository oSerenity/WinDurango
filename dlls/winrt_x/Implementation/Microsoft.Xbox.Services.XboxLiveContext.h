#pragma once
#include "Microsoft.Xbox.Services.XboxLiveContext.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveContext : XboxLiveContextT<XboxLiveContext>
    {
        XboxLiveContext() = default;

        XboxLiveContext(Windows::Xbox::System::User const& user);
        Windows::Xbox::System::User User();
        Social::ProfileService ProfileService();
        Social::SocialService SocialService();
        Social::ReputationService ReputationService();
        Achievements::AchievementService AchievementService();
        Leaderboard::LeaderboardService LeaderboardService();
        UserStatistics::UserStatisticsService UserStatisticsService();
        Matchmaking::MatchmakingService MatchmakingService();
        Multiplayer::MultiplayerService MultiplayerService();
        Tournaments::TournamentService TournamentService();
        RealTimeActivity::RealTimeActivityService RealTimeActivityService();
        Presence::PresenceService PresenceService();
        GameServerPlatform::GameServerPlatformService GameServerPlatformService();
        TitleStorage::TitleStorageService TitleStorageService();
        Privacy::PrivacyService PrivacyService();
        System::StringService StringService();
        ContextualSearch::ContextualSearchService ContextualSearchService();
        Clubs::ClubsService ClubsService();
        Marketplace::CatalogService CatalogService();
        Marketplace::InventoryService InventoryService();
        EntertainmentProfile::EntertainmentProfileListService EntertainmentProfileListService();
        XboxLiveContextSettings Settings();
        XboxLiveAppConfiguration AppConfig();
    };
}

namespace winrt::Microsoft::Xbox::Services::factory_implementation
{
    struct XboxLiveContext : XboxLiveContextT<XboxLiveContext, implementation::XboxLiveContext>
    {
    };
}