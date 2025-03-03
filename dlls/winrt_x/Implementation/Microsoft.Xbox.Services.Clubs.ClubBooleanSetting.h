#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubBooleanSetting.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubBooleanSetting : ClubBooleanSettingT<ClubBooleanSetting>
    {
        ClubBooleanSetting() = default;

        bool Value();
        bool CanViewerChangeSetting();

    private:
		bool m_value{ false };
		bool m_canViewerChangeSetting{ false };
    };
}