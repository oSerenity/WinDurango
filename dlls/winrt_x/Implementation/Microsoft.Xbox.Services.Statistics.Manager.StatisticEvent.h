#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.g.h"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticEvent : StatisticEventT<StatisticEvent>
    {
        StatisticEvent() = default;

        Windows::Xbox::System::User User();
        StatisticEventType EventType();
        int32_t ErrorCode();
        hstring ErrorMessage();
        StatisticEventArgs EventArgs();

    private:
		Windows::Xbox::System::User m_user{ nullptr };
		StatisticEventType m_eventType{ StatisticEventType::LocalUserAdded };
		int32_t m_errorCode{ 0 };
        hstring m_errorMessage{ L"" };
		StatisticEventArgs m_eventArgs{ nullptr };
    };
}