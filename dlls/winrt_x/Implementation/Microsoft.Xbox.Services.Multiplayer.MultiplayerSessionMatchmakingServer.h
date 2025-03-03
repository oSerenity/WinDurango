#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMatchmakingServer : MultiplayerSessionMatchmakingServerT<MultiplayerSessionMatchmakingServer>
    {
        MultiplayerSessionMatchmakingServer() = default;

        MatchmakingStatus Status();
        hstring StatusDetails();
        Windows::Foundation::TimeSpan TypicalWait();
        MultiplayerSessionReference TargetSessionRef();

    private:
		MatchmakingStatus m_status{ MatchmakingStatus::None };
        hstring m_statusDetails{ L"" };
		Windows::Foundation::TimeSpan m_typicalWait{ 0 };
        MultiplayerSessionReference m_targetSessionRef{ nullptr };
    };
}