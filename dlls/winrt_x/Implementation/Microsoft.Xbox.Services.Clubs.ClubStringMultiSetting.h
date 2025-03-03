#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubStringMultiSetting : ClubStringMultiSettingT<ClubStringMultiSetting>
    {
        ClubStringMultiSetting() = default;

        Windows::Foundation::Collections::IVectorView<hstring> Values();
        Windows::Foundation::Collections::IVectorView<hstring> AllowedValues();
        bool CanViewerChangeSetting();

    private:
		Windows::Foundation::Collections::IVectorView<hstring> m_values = single_threaded_vector<hstring>().GetView();
		Windows::Foundation::Collections::IVectorView<hstring> m_allowedValues = single_threaded_vector<hstring>().GetView();
		bool m_canViewerChangeSetting{ false };
    };
}