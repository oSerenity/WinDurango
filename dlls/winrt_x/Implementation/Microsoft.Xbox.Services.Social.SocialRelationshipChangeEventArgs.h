#pragma once
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialRelationshipChangeEventArgs : SocialRelationshipChangeEventArgsT<SocialRelationshipChangeEventArgs>
    {
        SocialRelationshipChangeEventArgs() = default;

        hstring CallerXboxUserId();
        SocialNotificationType SocialNotification();
        Windows::Foundation::Collections::IVectorView<hstring> XboxUserIds();

    private:
        hstring m_callerXboxUserId{ L"" };
		SocialNotificationType m_socialNotification{ SocialNotificationType::Unknown };
		Windows::Foundation::Collections::IVectorView<hstring> m_xboxUserIds{ single_threaded_vector<hstring>().GetView() };
    };
}