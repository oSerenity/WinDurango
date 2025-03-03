#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipThumbnail.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipThumbnail.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    Windows::Foundation::Uri ContextualSearchGameClipThumbnail::Url()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_url;
    }

    uint64_t ContextualSearchGameClipThumbnail::FileSize()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_fileSize;
    }

    ContextualSearchGameClipThumbnailType ContextualSearchGameClipThumbnail::ThumbnailType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_thumbnailType;
    }
}