#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipsResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    Windows::Foundation::IAsyncOperation<ContextualSearch::ContextualSearchGameClipsResult> ContextualSearchGameClipsResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_contextualSearchGameClipsResult;
    }

    Windows::Foundation::Collections::IVectorView<ContextualSearchGameClip> ContextualSearchGameClipsResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_items.GetView();
    }
}