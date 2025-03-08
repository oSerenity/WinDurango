#include "pch.h"
#include "Windows.Xbox.UI.Accessibility.h"
#include "Windows.Xbox.UI.Accessibility.g.cpp"

namespace winrt::Windows::Xbox::UI::implementation
{
    void Accessibility::SetSpeechToTextPositionHint(SpeechToTextPositionHint const& position)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void Accessibility::SendSpeechToTextString(hstring const& speakerName, hstring const& content, SpeechToTextType const& type)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}