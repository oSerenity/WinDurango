#include "pch.h"
#include "Windows.Xbox.Input.ControllerInputManager.h"
#include "Windows.Xbox.Input.ControllerInputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    IController ControllerInputManager::GetControllerFromIndex(uint32_t index)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_controller;
    }
}