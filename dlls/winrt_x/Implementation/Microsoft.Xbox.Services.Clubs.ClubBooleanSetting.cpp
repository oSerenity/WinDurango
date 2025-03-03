#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubBooleanSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubBooleanSetting.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    bool ClubBooleanSetting::Value()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_value;
    }

    bool ClubBooleanSetting::CanViewerChangeSetting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canViewerChangeSetting;
    }
}
