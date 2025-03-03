#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberJoinedEventArgs : MemberJoinedEventArgsT<MemberJoinedEventArgs>
    {
        MemberJoinedEventArgs() = default;

        Windows::Foundation::Collections::IVectorView<MultiplayerMember> Members();

    private:
        Windows::Foundation::Collections::IVectorView<MultiplayerMember> m_members = single_threaded_vector<MultiplayerMember>().GetView();
    };
}