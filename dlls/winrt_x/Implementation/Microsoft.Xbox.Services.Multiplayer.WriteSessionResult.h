#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct WriteSessionResult : WriteSessionResultT<WriteSessionResult>
    {
        WriteSessionResult() = default;

        bool Succeeded();
        MultiplayerSession Session();
        WriteSessionStatus Status();

    private:
		bool m_succeeded{ false };
		MultiplayerSession m_session{ nullptr };
		WriteSessionStatus m_status{ WriteSessionStatus::Unknown };
    };
}