#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubStringSetting::Value()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_value;
    }

    Windows::Foundation::Collections::IVectorView<hstring> ClubStringSetting::AllowedValues()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_allowedValues;
    }

    bool ClubStringSetting::CanViewerChangeSetting()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canViewerChangeSetting;
    }
}