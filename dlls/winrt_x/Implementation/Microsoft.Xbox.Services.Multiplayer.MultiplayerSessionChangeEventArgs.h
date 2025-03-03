#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionChangeEventArgs : MultiplayerSessionChangeEventArgsT<MultiplayerSessionChangeEventArgs>
    {
        MultiplayerSessionChangeEventArgs() = default;

        MultiplayerSessionReference SessionReference();
        hstring Branch();
        uint64_t ChangeNumber();

    private:
		MultiplayerSessionReference m_sessionReference{ nullptr };
        hstring m_branch{ L"" };
		uint64_t m_changeNumber{ 0 };
    };
}