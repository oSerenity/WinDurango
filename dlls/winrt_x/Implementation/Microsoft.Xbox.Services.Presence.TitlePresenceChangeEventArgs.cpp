#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring TitlePresenceChangeEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    uint32_t TitlePresenceChangeEventArgs::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    TitlePresenceState TitlePresenceChangeEventArgs::TitleState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleState;
    }
}