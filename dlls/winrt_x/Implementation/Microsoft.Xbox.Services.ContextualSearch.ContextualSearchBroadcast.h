#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchBroadcast : ContextualSearchBroadcastT<ContextualSearchBroadcast>
    {
        ContextualSearchBroadcast() = default;

        hstring XboxUserId();
        hstring Provider();
        hstring BroadcasterIdFromProvider();
        uint64_t Viewers();
        Windows::Foundation::DateTime StartedDate();
        Windows::Foundation::Collections::IMapView<hstring, hstring> CurrentStats();

    private:
		hstring m_xboxUserId{ L"XboxUserId" };
		hstring m_provider{ L"Provider" };
		hstring m_broadcasterIdFromProvider{ L"BroadcasterIdFromProvider" };
		uint64_t m_viewers{ 0 };
		Windows::Foundation::DateTime m_startedDate{ Windows::Foundation::DateTime::clock::now() };
        Windows::Foundation::Collections::IMapView<hstring, hstring> m_currentStats = single_threaded_map<hstring, hstring>().GetView();
    };
}