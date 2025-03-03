#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    MultiplayerMember MemberPropertyChangedEventArgs::Member()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_member;
    }

    hstring MemberPropertyChangedEventArgs::Properties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_properties;
    }
}