#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserAddedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserAddedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring UserAddedEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }
}