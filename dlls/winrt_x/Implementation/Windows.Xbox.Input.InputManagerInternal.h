#pragma once
#include "Windows.Xbox.Input.InputManagerInternal.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct InputManagerInternal
    {
        InputManagerInternal() = default;

        static void OverrideKinectInteractionMode(KinectInteractionMode const& mode, uint32_t durationMilliseconds);
        static void SetManipulationRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void SetSystemCursorAttractionRect(int32_t left, int32_t top, int32_t right, int32_t bottom);
        static void ForceGamepadCursorActivation(int32_t x, int32_t y);
        static void SetCursorPos(int32_t x, int32_t y);

    private:
        static inline KinectInteractionMode m_kinectInteractionMode = KinectInteractionMode::Normal;
		static inline uint32_t m_kinectInteractionModeDuration = 0;

		static inline int32_t m_manipulationRectLeft = 0;
		static inline int32_t m_manipulationRectTop = 0;
		static inline int32_t m_manipulationRectRight = 0;
        static inline int32_t m_manipulationRectBottom = 0;

		static inline int32_t m_systemCursorAttractionRectLeft = 0;
		static inline int32_t m_systemCursorAttractionRectTop = 0;
		static inline int32_t m_systemCursorAttractionRectRight = 0;
		static inline int32_t m_systemCursorAttractionRectBottom = 0;

		static inline int32_t m_forceGamepadCursorActivationX = 0;
		static inline int32_t m_forceGamepadCursorActivationY = 0;

    	static inline int32_t m_cursorPosX = 0;
		static inline int32_t m_cursorPosY = 0;
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct InputManagerInternal : InputManagerInternalT<InputManagerInternal, implementation::InputManagerInternal>
    {
    };
}