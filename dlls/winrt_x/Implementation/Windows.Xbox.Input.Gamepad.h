#pragma once
#include "Windows.Xbox.Input.Gamepad.g.h"
#include <Xinput.h>

namespace winrt::Windows::Xbox::Input::implementation
{
    struct Gamepad : GamepadT<Gamepad>
    {
        Gamepad() = default;
        Gamepad(uint64_t id) : m_id(id) {}

        static Foundation::Collections::IVectorView<IGamepad> Gamepads();
        static event_token GamepadAdded(Foundation::EventHandler<GamepadAddedEventArgs> const& handler);
        static void GamepadAdded(event_token const& token) noexcept;
        static event_token GamepadRemoved(Foundation::EventHandler<GamepadRemovedEventArgs> const& handler);
        static void GamepadRemoved(event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        System::User User();
        INavigationReading GetNavigationReading();
        RawNavigationReading GetRawNavigationReading();
        event_token NavigationReadingChanged(Foundation::TypedEventHandler<NavigationController, INavigationReadingChangedEventArgs> const& handler);
        void NavigationReadingChanged(event_token const& token) noexcept;
        void SetVibration(GamepadVibration const& value);
        IGamepadReading GetCurrentReading();
        RawGamepadReading GetRawCurrentReading();
        event_token ReadingChanged(Foundation::TypedEventHandler<Input::Gamepad, IGamepadReadingChangedEventArgs> const& handler);
        void ReadingChanged(event_token const& token) noexcept;
        bool IsTrusted();
        inline static Foundation::Collections::IVector<IGamepad> staticGamepads = { nullptr };
        uint64_t m_id{ 0 };

        inline static std::pair<WORD, GamepadButtons> const gamepadButtons[] =
        {
            { XINPUT_GAMEPAD_DPAD_UP, GamepadButtons::DPadUp },
            { XINPUT_GAMEPAD_DPAD_DOWN, GamepadButtons::DPadDown },
            { XINPUT_GAMEPAD_DPAD_LEFT, GamepadButtons::DPadLeft },
            { XINPUT_GAMEPAD_DPAD_RIGHT, GamepadButtons::DPadRight },
            { XINPUT_GAMEPAD_START, GamepadButtons::Menu },
            { XINPUT_GAMEPAD_BACK, GamepadButtons::View },
            { XINPUT_GAMEPAD_LEFT_THUMB, GamepadButtons::LeftThumbstick },
            { XINPUT_GAMEPAD_RIGHT_THUMB, GamepadButtons::RightThumbstick },
            { XINPUT_GAMEPAD_LEFT_SHOULDER, GamepadButtons::LeftShoulder },
            { XINPUT_GAMEPAD_RIGHT_SHOULDER, GamepadButtons::RightShoulder },
            { XINPUT_GAMEPAD_A, GamepadButtons::A },
            { XINPUT_GAMEPAD_B, GamepadButtons::B },
            { XINPUT_GAMEPAD_X, GamepadButtons::X },
            { XINPUT_GAMEPAD_Y, GamepadButtons::Y },
        };
        
        inline static std::pair<WORD, GamepadButtons> const keyboardButtons[] =
        {
            { VK_UP, GamepadButtons::DPadUp },
            { VK_DOWN, GamepadButtons::DPadDown },
            { VK_LEFT, GamepadButtons::DPadLeft },
            { VK_RIGHT, GamepadButtons::DPadRight },
            { VK_RETURN, GamepadButtons::Menu },
            { VK_ESCAPE, GamepadButtons::View },
            { VK_LSHIFT, GamepadButtons::LeftThumbstick },
            { VK_RSHIFT, GamepadButtons::RightThumbstick },
            { VK_LCONTROL, GamepadButtons::LeftShoulder },
            { VK_RCONTROL, GamepadButtons::RightShoulder },
            { 'A', GamepadButtons::A },
            { 'B', GamepadButtons::B},
            { 'X', GamepadButtons::X },
            { 'Y', GamepadButtons::Y},
        };
    };
}
namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Gamepad : GamepadT<Gamepad, implementation::Gamepad>
    {
    };
}
