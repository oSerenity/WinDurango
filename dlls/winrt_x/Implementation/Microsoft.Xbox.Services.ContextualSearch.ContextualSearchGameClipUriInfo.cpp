#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipUriInfo.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    Windows::Foundation::Uri ContextualSearchGameClipUriInfo::Url()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_url;
    }

    uint64_t ContextualSearchGameClipUriInfo::FileSize()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_fileSize;
    }

    ContextualSearchGameClipUriType ContextualSearchGameClipUriInfo::UriType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_uriType;
    }

    Windows::Foundation::DateTime ContextualSearchGameClipUriInfo::Expiration()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_expiration;
    }
}