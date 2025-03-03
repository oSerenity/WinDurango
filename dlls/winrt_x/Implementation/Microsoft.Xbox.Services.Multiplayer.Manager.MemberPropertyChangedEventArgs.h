#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberPropertyChangedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberPropertyChangedEventArgs : MemberPropertyChangedEventArgsT<MemberPropertyChangedEventArgs>
    {
        MemberPropertyChangedEventArgs() = default;

        MultiplayerMember Member();
        hstring Properties();

    private:
		MultiplayerMember m_member{ nullptr };
		hstring m_properties{ L"" };
    };
}