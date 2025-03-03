#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchBroadcast::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    hstring ContextualSearchBroadcast::Provider()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_provider;
    }

    hstring ContextualSearchBroadcast::BroadcasterIdFromProvider()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_broadcasterIdFromProvider;
    }

    uint64_t ContextualSearchBroadcast::Viewers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_viewers;
    }

    Windows::Foundation::DateTime ContextualSearchBroadcast::StartedDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_startedDate;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> ContextualSearchBroadcast::CurrentStats()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_currentStats;
    }
}