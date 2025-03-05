#include "pch.h"
#include "Windows.Xbox.Input.NavigationReading.h"
#include "Windows.Xbox.Input.NavigationReading.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    Foundation::DateTime NavigationReading::Timestamp()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_Timestamp;
    }

    NavigationButtons NavigationReading::Buttons()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_Buttons;
    }

    bool NavigationReading::IsUpPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsUpPressed;
    }

    bool NavigationReading::IsDownPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_IsDownPressed;
    }

    bool NavigationReading::IsLeftPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsLeftPressed;
    }

    bool NavigationReading::IsRightPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsRightPressed;
    }

    bool NavigationReading::IsMenuPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsMenuPressed;
    }

    bool NavigationReading::IsViewPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsViewPressed;
    }

    bool NavigationReading::IsPreviousPagePressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsPreviousPagePressed;
    }

    bool NavigationReading::IsNextPagePressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsNextPagePressed;
    }

    bool NavigationReading::IsAcceptPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsAcceptPressed;
    }

    bool NavigationReading::IsCancelPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsCancelPressed;
    }

    bool NavigationReading::IsXPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsXPressed;
    }

    bool NavigationReading::IsYPressed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_IsYPressed;
    }
}