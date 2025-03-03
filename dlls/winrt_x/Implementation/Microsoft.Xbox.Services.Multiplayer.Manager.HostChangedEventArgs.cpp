#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.HostChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.HostChangedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    MultiplayerMember HostChangedEventArgs::HostMember()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostMember;
    }
}