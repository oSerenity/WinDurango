#pragma once
#include "Microsoft.Xbox.Services.Clubs.Club.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct Club : ClubT<Club>
    {
        Club() = default;

        hstring Id();
        ClubType Type();
        Windows::Foundation::DateTime Created();
        hstring Owner();
        hstring TitleFamilyId();
        hstring TitleFamilyName();
        hstring ShortName();
        ClubProfile Profile();
        hstring GlyphImageUrl();
        hstring BannerImageUrl();
        bool IsClubSuspended();
        Windows::Foundation::DateTime SuspendedUntil();
        hstring FounderXuid();
        uint32_t FollowersCount();
        uint32_t PresenceCount();
        uint32_t PresenceTodayCount();
        uint32_t MembersCount();
        uint32_t ModeratorsCount();
        uint32_t RecommendedCount();
        uint32_t RequestedToJoinCount();
        uint32_t ReportCount();
        uint32_t ReporteItemsCount();
        ClubActionSettings ActionSettings();
        Windows::Foundation::Collections::IVectorView<ClubRole> ViewerRoles();
        Windows::Foundation::IAsyncOperation<ClubRoster> GetRosterAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubUserPresenceRecord>> GetClubUserPresenceRecordsAsync();
        Windows::Foundation::IAsyncAction RenameClubAsync(hstring newName);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> GetRolesAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRoleRecord>> GetRoleRecordsAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRoleRecord>> GetRoleRecordsAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<ClubPresenceCounts> GetPresenceCountsAsync();
        Windows::Foundation::IAsyncAction SetPresenceWithinClubAsync(ClubUserPresence presence);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> AddUserToClubAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> AddUserToClubAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> RemoveUserFromClubAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> RemoveUserFromClubAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> FollowClubAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> UnfollowClubAsync();
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> BanUserFromClubAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> UnbanUserFromClubAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> AddClubModeratorAsync(hstring xuid);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> RemoveClubModeratorAsync(hstring xuid);

    private:
		hstring m_clubId = MAKE_HSTRING("MyClub");
    	ClubType m_clubType = ClubType::Public;
		Windows::Foundation::DateTime m_created = Windows::Foundation::DateTime::clock::now();
		hstring m_clubOwner = MAKE_HSTRING("The Durangler");
		hstring m_titleFamilyId = MAKE_HSTRING("MyTitleFamilyId");
		hstring m_titleFamilyName = MAKE_HSTRING("MyTitleFamilyName");
		hstring m_shortName = MAKE_HSTRING("MyShortName");
        ClubProfile m_profile{ nullptr };
		hstring m_glyphImageUrl = MAKE_HSTRING("MyGlyphImageUrl");
		hstring m_bannerImageUrl = MAKE_HSTRING("MyBannerImageUrl");
		bool m_isClubSuspended = false;
		Windows::Foundation::DateTime m_suspendedUntil = Windows::Foundation::DateTime::clock::now();
		hstring m_founderXuid = MAKE_HSTRING("MyFounderXuid");
		uint32_t m_followersCount = 0;
		uint32_t m_presenceCount = 0;
		uint32_t m_presenceTodayCount = 0;
		uint32_t m_membersCount = 0;
		uint32_t m_moderatorsCount = 0;
		uint32_t m_recommendedCount = 0;
		uint32_t m_requestedToJoinCount = 0;
		uint32_t m_reportCount = 0;
		uint32_t m_reporteItemsCount = 0;
		ClubActionSettings m_actionSettings{ nullptr };
		Windows::Foundation::Collections::IVector<ClubRole> m_viewerRoles = single_threaded_vector<ClubRole>();
		ClubRoster m_roster{ nullptr };
		Windows::Foundation::Collections::IVector<ClubUserPresenceRecord> m_clubUserPresenceRecords = single_threaded_vector<ClubUserPresenceRecord>();
		hstring m_xuid = MAKE_HSTRING("MyXuid");
		Windows::Foundation::Collections::IVector<ClubRole> m_roles = single_threaded_vector<ClubRole>();
		Windows::Foundation::Collections::IVector<ClubRoleRecord> m_roleRecords = single_threaded_vector<ClubRoleRecord>();
		ClubPresenceCounts m_presenceCounts{ nullptr };
    };
}