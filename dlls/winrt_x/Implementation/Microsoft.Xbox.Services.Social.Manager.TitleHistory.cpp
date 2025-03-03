#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.h"
#include "Microsoft.Xbox.Services.Social.Manager.TitleHistory.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    bool TitleHistory::HasUserPlayed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasUserPlayed;
    }

    Windows::Foundation::DateTime TitleHistory::LastTimeUserPlayed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_lastTimeUserPlayed;
    }
}