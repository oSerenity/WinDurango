#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MemberLeftEventArgs : MemberLeftEventArgsT<MemberLeftEventArgs>
    {
        MemberLeftEventArgs() = default;

        Windows::Foundation::Collections::IVectorView<MultiplayerMember> Members();

    private:
		Windows::Foundation::Collections::IVectorView<MultiplayerMember> m_members = single_threaded_vector<MultiplayerMember>().GetView();
    };
}
