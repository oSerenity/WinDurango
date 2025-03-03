#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct TitleHistory : TitleHistoryT<TitleHistory>
    {
        TitleHistory() = default;

        bool HasUserPlayed();
        Windows::Foundation::DateTime LastTimeUserPlayed();

    private:
		bool m_hasUserPlayed{ false };
		Windows::Foundation::DateTime m_lastTimeUserPlayed{ Windows::Foundation::DateTime::clock::now() };
    };
}