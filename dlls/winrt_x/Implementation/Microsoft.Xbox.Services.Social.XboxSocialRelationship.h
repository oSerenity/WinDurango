#pragma once
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct XboxSocialRelationship : XboxSocialRelationshipT<XboxSocialRelationship>
    {
        XboxSocialRelationship() = default;

        hstring XboxUserId();
        bool IsFavorite();
        bool IsFollowingCaller();
        Windows::Foundation::Collections::IVectorView<hstring> SocialNetworks();

    private:
		hstring m_xboxUserId{ L"12345678" };
		bool m_isFavorite{ false };
		bool m_isFollowingCaller{ false };
		Windows::Foundation::Collections::IVectorView<hstring> m_socialNetworks{ single_threaded_vector<hstring>().GetView() };
    };
}