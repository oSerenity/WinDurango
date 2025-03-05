// ReSharper disable CppPassValueParameterByConstReference
#pragma once
#include "Windows.Xbox.Input.GamepadReading.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct GamepadReading : GamepadReadingT<GamepadReading>
    {
        GamepadReading(RawGamepadReading reading) : m_Reading(reading) {}
        GamepadReading() = default;

        Foundation::DateTime Timestamp();
        GamepadButtons Buttons();
        bool IsDPadUpPressed();
        bool IsDPadDownPressed();
        bool IsDPadLeftPressed();
        bool IsDPadRightPressed();
        bool IsMenuPressed();
        bool IsViewPressed();
        bool IsLeftThumbstickPressed();
        bool IsRightThumbstickPressed();
        bool IsLeftShoulderPressed();
        bool IsRightShoulderPressed();
        bool IsAPressed();
        bool IsBPressed();
        bool IsXPressed();
        bool IsYPressed();
        float LeftTrigger();
        float RightTrigger();
        float LeftThumbstickX();
        float LeftThumbstickY();
        float RightThumbstickX();
        float RightThumbstickY();
        bool IsPaddle1Pressed();
        bool IsPaddle2Pressed();
        bool IsPaddle3Pressed();
        bool IsPaddle4Pressed();

    private:
        RawGamepadReading m_Reading{};
		Foundation::DateTime m_Timestamp = Foundation::DateTime::clock::now();
    };
}