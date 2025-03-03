#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.JoinLobbyCompletedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.JoinLobbyCompletedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring JoinLobbyCompletedEventArgs::InvitedXboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_invitedXboxUserId;
    }
}