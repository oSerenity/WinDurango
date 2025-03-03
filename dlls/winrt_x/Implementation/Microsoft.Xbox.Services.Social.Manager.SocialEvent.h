#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct SocialEvent : SocialEventT<SocialEvent>
    {
        SocialEvent() = default;

        Windows::Xbox::System::User User();
        SocialEventType EventType();
        Windows::Foundation::Collections::IVectorView<hstring> UsersAffected();
        int32_t ErrorCode();
        hstring ErrorMessage();
        SocialEventArgs EventArgs();

    private:
		Windows::Xbox::System::User m_user{ nullptr };
		SocialEventType m_eventType{ SocialEventType::LocalUserAdded };
        Windows::Foundation::Collections::IVectorView<hstring> m_usersAffected{ single_threaded_vector<hstring>().GetView() };
		int32_t m_errorCode{ 0 };
        hstring m_errorMessage{ L"" };
		SocialEventArgs m_eventArgs{ nullptr };
    };
}