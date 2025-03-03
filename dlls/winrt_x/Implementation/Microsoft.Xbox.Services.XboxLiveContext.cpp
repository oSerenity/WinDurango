#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.h"

#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Social.SocialService.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    XboxLiveContext::XboxLiveContext(Windows::Xbox::System::User const& user)
    {
        printf("[Microsoft::Xbox::Services::XboxLiveContext] Constructor called\n");
        //m_MultiplayerService = winrt::make<Multiplayer::implementation::MultiplayerService>();
    }

    Windows::Xbox::System::User XboxLiveContext::User()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [User] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Social::ProfileService XboxLiveContext::ProfileService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ProfileService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Social::SocialService XboxLiveContext::SocialService()
    {
        return winrt::make<Social::implementation::SocialService>( );
    }

    Social::ReputationService XboxLiveContext::ReputationService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ReputationService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Achievements::AchievementService XboxLiveContext::AchievementService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [AchievementService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [LeaderboardService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [UserStatisticsService] THIS FUNCTION IS STUBBED !!!!\n");
		return winrt::make<UserStatistics::implementation::UserStatisticsService>( );
    }

    Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [MatchmakingService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
        return winrt::make<Multiplayer::implementation::MultiplayerService>( );
    }

    Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [TournamentService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    RealTimeActivity::RealTimeActivityService XboxLiveContext::RealTimeActivityService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [RealTimeActivityService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Presence::PresenceService XboxLiveContext::PresenceService()
    {
		return winrt::make<Presence::implementation::PresenceService>( );
    }

    GameServerPlatform::GameServerPlatformService XboxLiveContext::GameServerPlatformService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [GameServerPlatformService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [TitleStorageService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [PrivacyService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    System::StringService XboxLiveContext::StringService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [StringService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ContextualSearchService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Clubs::ClubsService XboxLiveContext::ClubsService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ClubsService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [CatalogService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [InventoryService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [EntertainmentProfileListService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    XboxLiveContextSettings XboxLiveContext::Settings()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [Settings] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }

    XboxLiveAppConfiguration XboxLiveContext::AppConfig()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [AppConfig] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
}