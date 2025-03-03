#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.Club.h"
#include "Microsoft.Xbox.Services.Clubs.Club.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring Club::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_clubId;
    }

    ClubType Club::Type()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_clubType;
    }

    Windows::Foundation::DateTime Club::Created()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_created;
    }

    hstring Club::Owner()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_clubOwner;
    }

    hstring Club::TitleFamilyId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleFamilyId;
    }

    hstring Club::TitleFamilyName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleFamilyId;
    }

    hstring Club::ShortName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_shortName;
    }

    ClubProfile Club::Profile()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_profile;
    }

    hstring Club::GlyphImageUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_glyphImageUrl;
    }

    hstring Club::BannerImageUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bannerImageUrl;
    }

    bool Club::IsClubSuspended()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isClubSuspended;
    }

    Windows::Foundation::DateTime Club::SuspendedUntil()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_suspendedUntil;
    }

    hstring Club::FounderXuid()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_clubOwner;
    }

    uint32_t Club::FollowersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_followersCount;
    }

    uint32_t Club::PresenceCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_presenceCount;
    }

    uint32_t Club::PresenceTodayCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceTodayCount;
    }

    uint32_t Club::MembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_membersCount;
    }

    uint32_t Club::ModeratorsCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_moderatorsCount;
    }

    uint32_t Club::RecommendedCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_recommendedCount;
    }

    uint32_t Club::RequestedToJoinCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_requestedToJoinCount;
    }

    uint32_t Club::ReportCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_reportCount;
    }

    uint32_t Club::ReporteItemsCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_reporteItemsCount;
    }

    ClubActionSettings Club::ActionSettings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_actionSettings;
    }

    Windows::Foundation::Collections::IVectorView<ClubRole> Club::ViewerRoles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_viewerRoles.GetView();
    }

    Windows::Foundation::IAsyncOperation<ClubRoster> Club::GetRosterAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_roster;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubUserPresenceRecord>> Club::GetClubUserPresenceRecordsAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_clubUserPresenceRecords.GetView();
    }

    Windows::Foundation::IAsyncAction Club::RenameClubAsync(hstring newName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::GetRolesAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_viewerRoles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRoleRecord>> Club::GetRoleRecordsAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_roleRecords.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRoleRecord>> Club::GetRoleRecordsAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_roleRecords.GetView();
    }

    Windows::Foundation::IAsyncOperation<ClubPresenceCounts> Club::GetPresenceCountsAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::IAsyncAction Club::SetPresenceWithinClubAsync(ClubUserPresence presence)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::AddUserToClubAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.Append(ClubRole{ ClubRole::Member });

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::AddUserToClubAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_viewerRoles.Append(ClubRole{});

        co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::RemoveUserFromClubAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_viewerRoles.RemoveAtEnd();

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::RemoveUserFromClubAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_viewerRoles.RemoveAtEnd();

        co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::FollowClubAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.Append({ ClubRole::Follower });

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::UnfollowClubAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.RemoveAtEnd();

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::BanUserFromClubAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.Append(ClubRole{ ClubRole::Banned });

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::UnbanUserFromClubAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.RemoveAtEnd();

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::AddClubModeratorAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.Append(ClubRole{ ClubRole::Moderator });

		co_return m_roles.GetView();
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<ClubRole>> Club::RemoveClubModeratorAsync(hstring xuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewerRoles.RemoveAtEnd();

		co_return m_roles.GetView();
    }
}
