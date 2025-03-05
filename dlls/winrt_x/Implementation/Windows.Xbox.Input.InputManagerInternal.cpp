#include "pch.h"
#include "Windows.Xbox.Input.InputManagerInternal.h"
#include "Windows.Xbox.Input.InputManagerInternal.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManagerInternal::OverrideKinectInteractionMode(KinectInteractionMode const& mode, uint32_t durationMilliseconds)
    {
        LOG_FUNCTION_NAME();

		m_kinectInteractionMode = mode;
		m_kinectInteractionModeDuration = durationMilliseconds;
    }

    void InputManagerInternal::SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_FUNCTION_NAME();

		m_manipulationRectLeft = left;
		m_manipulationRectTop = top;
		m_manipulationRectRight = right;
		m_manipulationRectBottom = bottom;
    }

    void InputManagerInternal::SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom)
    {
        LOG_FUNCTION_NAME();

		m_systemCursorAttractionRectLeft = left;
		m_systemCursorAttractionRectTop = top;
		m_systemCursorAttractionRectRight = right;
		m_systemCursorAttractionRectBottom = bottom;
    }

    void InputManagerInternal::ForceGamepadCursorActivation(int32_t x, int32_t y)
    {
        LOG_FUNCTION_NAME();

		m_forceGamepadCursorActivationX = x;
		m_forceGamepadCursorActivationY = y;
    }

    void InputManagerInternal::SetCursorPos(int32_t x, int32_t y)
    {
        LOG_FUNCTION_NAME();

		m_cursorPosX = x;
		m_cursorPosY = y;
    }
}