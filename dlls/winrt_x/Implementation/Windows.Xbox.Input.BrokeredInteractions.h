#pragma once
#include "Windows.Xbox.Input.BrokeredInteractions.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct BrokeredInteractions
    {
        BrokeredInteractions() = default;

        static InputMode SmartglassInputMode();
        static void SmartglassInputMode(InputMode const& mode);
        static ManipulationMode SmartglassManipulationModes();
        static void SmartglassManipulationModes(ManipulationMode const& mode);
        static InputMode GamepadInputMode();
        static void GamepadInputMode(InputMode const& mode);
        static ManipulationMode GamepadManipulationModes();
        static void GamepadManipulationModes(ManipulationMode const& mode);
        static void SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void ForceGamepadCursorActivation(int32_t x, int32_t y);
        static void SetCursorPos(int32_t x, int32_t y);

    private:
        static inline auto m_SmartglassInputMode = InputMode::DirectionalNavigation;
		static inline auto m_SmartglassManipulationModes = ManipulationMode::None;
		static inline auto m_GamepadInputMode = InputMode::DirectionalNavigation;
		static inline auto m_GamepadManipulationModes = ManipulationMode::None;

		static inline int32_t m_manipulationRectLeft = 0;
		static inline int32_t m_manipulationRectTop = 0;
		static inline int32_t m_manipulationRectRight = 0;
		static inline int32_t m_manipulationRectBottom = 0;
		static inline int32_t m_manipulationRectX = 0;
		static inline int32_t m_manipulationRectY = 0;

		static inline int32_t m_systemCursorAttractionRectLeft = 0;
		static inline int32_t m_systemCursorAttractionRectTop = 0;
		static inline int32_t m_systemCursorAttractionRectRight = 0;
		static inline int32_t m_systemCursorAttractionRectBottom = 0;

        static inline int32_t m_forceGamepadCursorActivationRectX = 0;
		static inline int32_t m_forceGamepadCursorActivationRectY = 0;

		static inline int32_t m_cursorPosX = 0;
		static inline int32_t m_cursorPosY = 0;
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BrokeredInteractions : BrokeredInteractionsT<BrokeredInteractions, implementation::BrokeredInteractions>
    {
    };
}