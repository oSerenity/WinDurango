#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.PreferredColor.h"
#include "Microsoft.Xbox.Services.Social.Manager.PreferredColor.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    hstring PreferredColor::PrimaryColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_primaryColor;
    }

    hstring PreferredColor::SecondaryColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_secondaryColor;
    }

    hstring PreferredColor::TertiaryColor()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tertiaryColor;
    }
}