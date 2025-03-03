#pragma once
#include "Microsoft.Xbox.Services.Social.ProfileService.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ProfileService : ProfileServiceT<ProfileService>
    {
        ProfileService() = default;

        Windows::Foundation::IAsyncOperation<XboxUserProfile> GetUserProfileAsync(hstring xboxUserId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<XboxUserProfile>> GetUserProfilesAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<XboxUserProfile>> GetUserProfilesForSocialGroupAsync(hstring socialGroup);

    private:
        XboxUserProfile m_userProfile{ nullptr };
		Windows::Foundation::Collections::IVectorView<XboxUserProfile> m_userProfiles{ single_threaded_vector<XboxUserProfile>().GetView() };
		Windows::Foundation::Collections::IVectorView<XboxUserProfile> m_userProfilesForSocialGroup{ single_threaded_vector<XboxUserProfile>().GetView() };
    };
}