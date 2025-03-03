#pragma once
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct XboxSocialRelationshipResult : XboxSocialRelationshipResultT<XboxSocialRelationshipResult>
    {
        XboxSocialRelationshipResult() = default;

        Windows::Foundation::Collections::IVectorView<XboxSocialRelationship> Items();
        uint32_t TotalCount();
        bool HasNext();
        Windows::Foundation::IAsyncOperation<Social::XboxSocialRelationshipResult> GetNextAsync(uint32_t maxItems);

    private:
		Windows::Foundation::Collections::IVectorView<XboxSocialRelationship> m_items{ single_threaded_vector<XboxSocialRelationship>().GetView() };
		uint32_t m_totalCount{ 0 };
		bool m_hasNext{ false };
		Social::XboxSocialRelationshipResult m_next{ nullptr };
    };
}