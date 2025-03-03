#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubActionSetting : ClubActionSettingT<ClubActionSetting>
    {
        ClubActionSetting() = default;

        ClubRole RequiredRole();
        Windows::Foundation::Collections::IVectorView<ClubRole> AllowedValues();
        bool CanViewerChangeSetting();
        bool CanViewerAct();

    private:
		ClubRole m_requiredRole{ ClubRole::Member };
		Windows::Foundation::Collections::IVector<ClubRole> m_allowedValues = single_threaded_vector<ClubRole>();
		bool m_canViewerChangeSetting{ false };
		bool m_canViewerAct{ false };
    };
}