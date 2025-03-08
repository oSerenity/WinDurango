#pragma once
#include "Windows.Xbox.UI.Accessibility.g.h"

namespace winrt::Windows::Xbox::UI::implementation
{
    struct Accessibility
    {
        Accessibility() = default;

        static void SetSpeechToTextPositionHint(SpeechToTextPositionHint const& position);
        static void SendSpeechToTextString(hstring const& speakerName, hstring const& content, SpeechToTextType const& type);
    };
}

namespace winrt::Windows::Xbox::UI::factory_implementation
{
    struct Accessibility : AccessibilityT<Accessibility, implementation::Accessibility>
    {
    };
}