#pragma once
#include "Windows.Xbox.Input.ControllerInputManager.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct ControllerInputManager : ControllerInputManagerT<ControllerInputManager>
    {
        ControllerInputManager() = default;

        IController GetControllerFromIndex(uint32_t index);

    private:
		IController m_controller{ };
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct ControllerInputManager : ControllerInputManagerT<ControllerInputManager, implementation::ControllerInputManager>
    {
    };
}