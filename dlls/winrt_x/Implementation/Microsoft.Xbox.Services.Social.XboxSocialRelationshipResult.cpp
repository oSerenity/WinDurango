#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    Windows::Foundation::Collections::IVectorView<XboxSocialRelationship> XboxSocialRelationshipResult::Items()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_items;
    }

    uint32_t XboxSocialRelationshipResult::TotalCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_totalCount;
    }

    bool XboxSocialRelationshipResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }

    Windows::Foundation::IAsyncOperation<Social::XboxSocialRelationshipResult> XboxSocialRelationshipResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_next;
    }
}