#pragma once
#include "Microsoft.Xbox.Services.Social.XboxUserProfile.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct XboxUserProfile : XboxUserProfileT<XboxUserProfile>
    {
        XboxUserProfile() = default;

        hstring ApplicationDisplayName();
        Windows::Foundation::Uri ApplicationDisplayPictureResizeUri();
        hstring GameDisplayName();
        Windows::Foundation::Uri GameDisplayPictureResizeUri();
        hstring Gamerscore();
        hstring Gamertag();
        hstring XboxUserId();

    private:
		hstring m_applicationDisplayName{ L"ApplicationDisplayName" };
		Windows::Foundation::Uri m_applicationDisplayPictureResizeUri{ nullptr };
		hstring m_gameDisplayName{ L"GameDisplayName" };
		Windows::Foundation::Uri m_gameDisplayPictureResizeUri{ nullptr };
		hstring m_gamerscore{ L"Gamerscore" };
		hstring m_gamertag{ L"Gamertag" };
		hstring m_xboxUserId{ L"XboxUserId" };
    };
}