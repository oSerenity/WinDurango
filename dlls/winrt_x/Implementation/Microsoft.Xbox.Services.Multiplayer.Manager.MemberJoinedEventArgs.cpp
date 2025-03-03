#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MemberJoinedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Windows::Foundation::Collections::IVectorView<MultiplayerMember> MemberJoinedEventArgs::Members()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_members;
    }
}