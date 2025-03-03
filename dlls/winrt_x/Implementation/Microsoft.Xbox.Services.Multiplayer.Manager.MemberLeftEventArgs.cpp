#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberLeftEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Windows::Foundation::Collections::IVectorView<MultiplayerMember> MemberLeftEventArgs::Members()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_members;
    }
}