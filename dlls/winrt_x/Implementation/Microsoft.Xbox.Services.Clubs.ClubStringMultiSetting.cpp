#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::Values()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_values;
    }

    Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::AllowedValues()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_allowedValues;
    }

    bool ClubStringMultiSetting::CanViewerChangeSetting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_canViewerChangeSetting;
    }
}