#pragma once
#include "Microsoft.Xbox.Services.Social.Manager.PreferredColor.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    struct PreferredColor : PreferredColorT<PreferredColor>
    {
        PreferredColor() = default;

        hstring PrimaryColor();
        hstring SecondaryColor();
        hstring TertiaryColor();

    private:
        hstring m_primaryColor{ L"" };
        hstring m_secondaryColor{ L"" };
        hstring m_tertiaryColor{ L"" };
    };
}