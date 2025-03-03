#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubActionSettings.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubActionSettings : ClubActionSettingsT<ClubActionSettings>
    {
        ClubActionSettings() = default;

        ClubActionSetting PostToFeed();
        ClubActionSetting ViewFeed();
        ClubActionSetting WriteInChat();
        ClubActionSetting ViewChat();
        ClubActionSetting SetChatTopic();
        ClubActionSetting JoinLookingForGame();
        ClubActionSetting CreateLookingForGame();
        ClubActionSetting ViewLookingForGame();
        ClubActionSetting InviteOrAcceptJoinRequests();
        ClubActionSetting KickOrBan();
        ClubActionSetting ViewRoster();
        ClubActionSetting UpdateProfile();
        ClubActionSetting DeleteProfile();
        ClubActionSetting ViewProfile();
    };
}