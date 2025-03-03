#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipThumbnail.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClipThumbnail : ContextualSearchGameClipThumbnailT<ContextualSearchGameClipThumbnail>
    {
        ContextualSearchGameClipThumbnail() = default;

        Windows::Foundation::Uri Url();
        uint64_t FileSize();
        ContextualSearchGameClipThumbnailType ThumbnailType();

    private:
		Windows::Foundation::Uri m_url{ nullptr };
		uint64_t m_fileSize{ 0 };
		ContextualSearchGameClipThumbnailType m_thumbnailType{ ContextualSearchGameClipThumbnailType::SmallThumbnail };
    };
}