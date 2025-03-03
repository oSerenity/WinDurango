#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipStat.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipStat : ContextualSearchGameClipStatT<ContextualSearchGameClipStat>
    {
        ContextualSearchGameClipStat() = default;

        hstring Name();
        hstring Value();
        hstring MinValue();
        hstring MaxValue();
        hstring DeltaValue();

    private:
		hstring m_name{ L"Name" };
		hstring m_value{ L"Value" };
		hstring m_minValue{ L"MinValue" };
		hstring m_maxValue{ L"MaxValue" };
		hstring m_deltaValue{ L"DeltaValue" };
    };
}