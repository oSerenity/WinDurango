#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubActionSetting.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    ClubRole ClubActionSetting::RequiredRole()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_requiredRole;
    }

    Windows::Foundation::Collections::IVectorView<ClubRole> ClubActionSetting::AllowedValues()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_allowedValues.GetView();
    }

    bool ClubActionSetting::CanViewerChangeSetting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canViewerChangeSetting;
    }

    bool ClubActionSetting::CanViewerAct()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canViewerAct;
    }
}
