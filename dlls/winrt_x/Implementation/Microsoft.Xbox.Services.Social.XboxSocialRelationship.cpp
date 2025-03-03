#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxSocialRelationship::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    bool XboxSocialRelationship::IsFavorite()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isFavorite;
    }

    bool XboxSocialRelationship::IsFollowingCaller()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isFollowingCaller;
    }

    Windows::Foundation::Collections::IVectorView<hstring> XboxSocialRelationship::SocialNetworks()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialNetworks;
    }
}