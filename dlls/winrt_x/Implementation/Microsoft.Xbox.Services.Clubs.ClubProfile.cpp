#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubProfile.h"
#include "Microsoft.Xbox.Services.Clubs.ClubProfile.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    ClubStringSetting ClubProfile::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    ClubStringSetting ClubProfile::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_description;
    }

    ClubBooleanSetting ClubProfile::MatureContentEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_matureContentEnabled;
    }

    ClubBooleanSetting ClubProfile::WatchClubTitlesOnly()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_watchClubTitlesOnly;
    }

    ClubBooleanSetting ClubProfile::IsSearchable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isSearchable;
    }

    ClubBooleanSetting ClubProfile::IsRecommendable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isRecommendable;
    }

    ClubBooleanSetting ClubProfile::RequestToJoinEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_requestToJoinEnabled;
    }

    ClubBooleanSetting ClubProfile::LeaveEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_leaveEnabled;
    }

    ClubBooleanSetting ClubProfile::TransferOwnershipEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_transferOwnershipEnabled;
    }

    ClubStringSetting ClubProfile::DisplayImageUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayImageUrl;
    }

    ClubStringSetting ClubProfile::BackgroundImageUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_backgroundImageUrl;
    }

    ClubStringMultiSetting ClubProfile::Tags()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tags;
    }

    ClubStringSetting ClubProfile::PreferredLocale()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_preferredLocale;
    }

    ClubStringMultiSetting ClubProfile::AssociatedTitles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_associatedTitles;
    }

    ClubStringSetting ClubProfile::PrimaryColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_primaryColor;
    }

    ClubStringSetting ClubProfile::SecondayColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secondaryColor;
    }

    ClubStringSetting ClubProfile::TertiaryColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tertiaryColor;
    }
}
