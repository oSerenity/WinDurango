#include "pch.h"
#include "Windows.Xbox.Input.NavigationController.h"
#include "Windows.Xbox.Input.NavigationController.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    Foundation::Collections::IVectorView<INavigationController> NavigationController::NavigationControllers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_navigationControllers;
    }

    event_token NavigationController::NavigationControllerAdded(Foundation::EventHandler<NavigationControllerAddedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_navigationControllerAddedToken;
    }

    void NavigationController::NavigationControllerAdded(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_navigationControllerAddedToken = token;
    }

    event_token NavigationController::NavigationControllerRemoved(Foundation::EventHandler<NavigationControllerRemovedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_navigationControllerRemovedToken;
    }

    void NavigationController::NavigationControllerRemoved(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_navigationControllerRemovedToken = token;
    }

    uint64_t NavigationController::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    hstring NavigationController::Type()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_type;
    }

    System::User NavigationController::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_user;
    }

    INavigationReading NavigationController::GetNavigationReading()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_navigationReading;
    }

    RawNavigationReading NavigationController::GetRawNavigationReading()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_rawNavigationReading;
    }

    event_token NavigationController::NavigationReadingChanged(Foundation::TypedEventHandler<Input::NavigationController, INavigationReadingChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_navigationReadingChangedToken;
    }

    void NavigationController::NavigationReadingChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_navigationReadingChangedToken = token;
    }
}