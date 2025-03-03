#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipsResult : ContextualSearchGameClipsResultT<ContextualSearchGameClipsResult>
    {
        ContextualSearchGameClipsResult() = default;

        Windows::Foundation::IAsyncOperation<ContextualSearch::ContextualSearchGameClipsResult> GetNextAsync(uint32_t maxItems);
        Windows::Foundation::Collections::IVectorView<ContextualSearchGameClip> Items();

    private:
		ContextualSearch::ContextualSearchGameClipsResult m_contextualSearchGameClipsResult{ nullptr };
		Windows::Foundation::Collections::IVector<ContextualSearchGameClip> m_items = winrt::single_threaded_vector<ContextualSearchGameClip>();
    };
}