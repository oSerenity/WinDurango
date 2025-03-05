#include "pch.h"
#include "Windows.Xbox.Input.BrokeredInteractions.h"
#include "Windows.Xbox.Input.BrokeredInteractions.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    InputMode BrokeredInteractions::SmartglassInputMode()
    {
        LOG_FUNCTION_NAME();

		return m_SmartglassInputMode;
    }

    void BrokeredInteractions::SmartglassInputMode(InputMode const& mode)
    {
        LOG_FUNCTION_NAME();

		m_SmartglassInputMode = mode;
    }

    ManipulationMode BrokeredInteractions::SmartglassManipulationModes()
    {
        LOG_FUNCTION_NAME();

		return m_SmartglassManipulationModes;
    }

    void BrokeredInteractions::SmartglassManipulationModes(ManipulationMode const& mode)
    {
        LOG_FUNCTION_NAME();

		m_SmartglassManipulationModes = mode;
    }

    InputMode BrokeredInteractions::GamepadInputMode()
    {
        LOG_FUNCTION_NAME();

		return m_GamepadInputMode;
    }

    void BrokeredInteractions::GamepadInputMode(InputMode const& mode)
    {
        LOG_FUNCTION_NAME();

		m_GamepadInputMode = mode;
    }

    ManipulationMode BrokeredInteractions::GamepadManipulationModes()
    {
        LOG_FUNCTION_NAME();

		return m_GamepadManipulationModes;
    }

    void BrokeredInteractions::GamepadManipulationModes(ManipulationMode const& mode)
    {
        LOG_FUNCTION_NAME();

		m_GamepadManipulationModes = mode;
    }

    void BrokeredInteractions::SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_FUNCTION_NAME();

		m_manipulationRectLeft = left;
		m_manipulationRectTop = top;
		m_manipulationRectRight = right;
		m_manipulationRectBottom = bottom;
    }

    void BrokeredInteractions::SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_FUNCTION_NAME();

		m_systemCursorAttractionRectLeft = left;
		m_systemCursorAttractionRectTop = top;
		m_systemCursorAttractionRectRight = right;
		m_systemCursorAttractionRectBottom = bottom;
    }

    void BrokeredInteractions::ForceGamepadCursorActivation(int32_t x, int32_t y)
    {
        LOG_FUNCTION_NAME();

		m_forceGamepadCursorActivationRectX = x;
		m_forceGamepadCursorActivationRectY = y;
    }

    void BrokeredInteractions::SetCursorPos(int32_t x, int32_t y)
    {
        LOG_FUNCTION_NAME();

		m_cursorPosX = x;
		m_cursorPosY = y;
    }
}