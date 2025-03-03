#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubStringSetting : ClubStringSettingT<ClubStringSetting>
    {
        ClubStringSetting() = default;

        hstring Value();
        Windows::Foundation::Collections::IVectorView<hstring> AllowedValues();
        bool CanViewerChangeSetting();

    private:
        hstring m_value = MAKE_HSTRING("");
		Windows::Foundation::Collections::IVectorView<hstring> m_allowedValues = single_threaded_vector<hstring>().GetView();
		bool m_canViewerChangeSetting{ true };
    };
}