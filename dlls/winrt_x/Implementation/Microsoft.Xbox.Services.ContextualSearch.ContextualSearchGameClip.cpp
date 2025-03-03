#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClip.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClip.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchGameClip::ClipName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_clipName;
    }

    uint64_t ContextualSearchGameClip::DurationInSeconds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_durationInSeconds;
    }

    hstring ContextualSearchGameClip::GameClipId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameClipId;
    }

    hstring ContextualSearchGameClip::GameClipLocale()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameClipLocale;
    }

    Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipUriInfo> ContextualSearchGameClip::GameClipUris()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameClipUris;
    }

    Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipThumbnail> ContextualSearchGameClip::Thumbnails()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_thumbnails;
    }

    ContextualSearchGameClipType ContextualSearchGameClip::GameClipType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameClipType;
    }

    uint64_t ContextualSearchGameClip::Views()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_views;
    }

    hstring ContextualSearchGameClip::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipStat> ContextualSearchGameClip::Stats()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_stats;
    }
}