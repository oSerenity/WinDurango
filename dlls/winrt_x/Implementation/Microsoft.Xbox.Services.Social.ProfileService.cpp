#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ProfileService.h"
#include "Microsoft.Xbox.Services.Social.ProfileService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    Windows::Foundation::IAsyncOperation<XboxUserProfile> ProfileService::GetUserProfileAsync(hstring xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userProfile;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<XboxUserProfile>> ProfileService::GetUserProfilesAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userProfiles;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<XboxUserProfile>> ProfileService::GetUserProfilesForSocialGroupAsync(hstring socialGroup)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_userProfilesForSocialGroup;
    }
}