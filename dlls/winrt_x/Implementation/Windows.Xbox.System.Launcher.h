#pragma once
#include "Windows.Xbox.System.Launcher.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct Launcher
    {
        Launcher() = default;

        static Foundation::IAsyncOperation<bool> NavigateBackAsync();
    };
}

namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct Launcher : LauncherT<Launcher, implementation::Launcher>
    {
    };
}