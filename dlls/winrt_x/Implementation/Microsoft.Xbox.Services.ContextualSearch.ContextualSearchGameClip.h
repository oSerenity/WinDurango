#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClip.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchGameClip : ContextualSearchGameClipT<ContextualSearchGameClip>
    {
        ContextualSearchGameClip() = default;

        hstring ClipName();
        uint64_t DurationInSeconds();
        hstring GameClipId();
        hstring GameClipLocale();
        Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipUriInfo> GameClipUris();
        Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipThumbnail> Thumbnails();
        ContextualSearchGameClipType GameClipType();
        uint64_t Views();
        hstring XboxUserId();
        Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipStat> Stats();

    private:
		hstring m_clipName{ L"ClipName" };
		uint64_t m_durationInSeconds{ 0 };
		hstring m_gameClipId{ L"GameClipId" };
		hstring m_gameClipLocale{ L"GameClipLocale" };
        Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipUriInfo> m_gameClipUris = single_threaded_vector<ContextualSearchGameClipUriInfo>().GetView();
		Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipThumbnail> m_thumbnails = single_threaded_vector<ContextualSearchGameClipThumbnail>().GetView();
		ContextualSearchGameClipType m_gameClipType{ ContextualSearchGameClipType::Achievement };
		uint64_t m_views{ 0 };
		hstring m_xboxUserId{ L"XboxUserId" };
		Windows::Foundation::Collections::IVectorView<ContextualSearchGameClipStat> m_stats = single_threaded_vector<ContextualSearchGameClipStat>().GetView();
    };
}