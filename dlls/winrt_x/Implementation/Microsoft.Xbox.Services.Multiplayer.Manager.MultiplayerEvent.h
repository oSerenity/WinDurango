#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerEvent : MultiplayerEventT<MultiplayerEvent>
    {
        MultiplayerEvent() = default;

        int32_t ErrorCode();
        hstring ErrorMessage();
        Windows::Foundation::IInspectable Context();
        MultiplayerEventType EventType();
        MultiplayerEventArgs EventArgs();
        MultiplayerSessionType SessionType();

    private:
		int32_t m_errorCode{ 0 };
        hstring m_errorMessage{ L"" };
		Windows::Foundation::IInspectable m_context;
		MultiplayerEventType m_eventType{ MultiplayerEventType::ArbitrationComplete };
		MultiplayerEventArgs m_eventArgs{ nullptr };
		MultiplayerSessionType m_sessionType{ MultiplayerSessionType::GameSession };
    };
}