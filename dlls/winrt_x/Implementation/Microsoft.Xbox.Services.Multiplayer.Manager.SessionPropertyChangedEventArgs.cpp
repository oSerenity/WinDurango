#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.SessionPropertyChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.SessionPropertyChangedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring SessionPropertyChangedEventArgs::Properties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_properties;
    }
}