#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubProfile.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubProfile : ClubProfileT<ClubProfile>
    {
        ClubProfile() = default;

        ClubStringSetting Name();
        ClubStringSetting Description();
        ClubBooleanSetting MatureContentEnabled();
        ClubBooleanSetting WatchClubTitlesOnly();
        ClubBooleanSetting IsSearchable();
        ClubBooleanSetting IsRecommendable();
        ClubBooleanSetting RequestToJoinEnabled();
        ClubBooleanSetting LeaveEnabled();
        ClubBooleanSetting TransferOwnershipEnabled();
        ClubStringSetting DisplayImageUrl();
        ClubStringSetting BackgroundImageUrl();
        ClubStringMultiSetting Tags();
        ClubStringSetting PreferredLocale();
        ClubStringMultiSetting AssociatedTitles();
        ClubStringSetting PrimaryColor();
        ClubStringSetting SecondayColor();
        ClubStringSetting TertiaryColor();

    private:
        ClubStringSetting m_name{ nullptr };
		ClubStringSetting m_description{ nullptr };
		ClubBooleanSetting m_matureContentEnabled{ nullptr };
		ClubBooleanSetting m_watchClubTitlesOnly{ nullptr };
		ClubBooleanSetting m_isSearchable{ nullptr };
		ClubBooleanSetting m_isRecommendable{ nullptr };
		ClubBooleanSetting m_requestToJoinEnabled{ nullptr };
		ClubBooleanSetting m_leaveEnabled{ nullptr };
		ClubBooleanSetting m_transferOwnershipEnabled{ nullptr };
		ClubStringSetting m_displayImageUrl{ nullptr };
		ClubStringSetting m_backgroundImageUrl{ nullptr };
		ClubStringMultiSetting m_tags{ nullptr };
		ClubStringSetting m_preferredLocale{ nullptr };
		ClubStringMultiSetting m_associatedTitles{ nullptr };
		ClubStringSetting m_primaryColor{ nullptr };
		ClubStringSetting m_secondaryColor{ nullptr };
		ClubStringSetting m_tertiaryColor{ nullptr };
    };
}
