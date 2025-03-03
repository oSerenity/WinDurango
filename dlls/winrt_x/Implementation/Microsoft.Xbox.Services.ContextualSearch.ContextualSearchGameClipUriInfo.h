#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipUriInfo : ContextualSearchGameClipUriInfoT<ContextualSearchGameClipUriInfo>
    {
        ContextualSearchGameClipUriInfo() = default;

        Windows::Foundation::Uri Url();
        uint64_t FileSize();
        ContextualSearchGameClipUriType UriType();
        Windows::Foundation::DateTime Expiration();

    private:
		Windows::Foundation::Uri m_url{ nullptr };
		uint64_t m_fileSize{ 0 };
		ContextualSearchGameClipUriType m_uriType{ ContextualSearchGameClipUriType::Original };
		Windows::Foundation::DateTime m_expiration{ Windows::Foundation::DateTime::clock::now() };
    };
}