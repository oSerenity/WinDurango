#include "pch.h"
#include "Windows.Xbox.Input.BodyController.h"
#include "Windows.Xbox.Input.BodyController.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    Foundation::Collections::IVectorView<IBodyController> BodyController::BodyControllers()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bodyControllers;
    }

    event_token BodyController::BodyControllerAdded(Foundation::EventHandler<BodyControllerAddedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bodyControllerAddedToken;
    }

    void BodyController::BodyControllerAdded(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_bodyControllerAddedToken = token;
    }

    event_token BodyController::BodyControllerRemoved(Foundation::EventHandler<BodyControllerRemovedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bodyControllerRemovedToken;
    }

    void BodyController::BodyControllerRemoved(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_bodyControllerRemovedToken = token;
    }

    uint64_t BodyController::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    hstring BodyController::Type()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_type;
    }

    System::User BodyController::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    	
        return m_user;
    }

    uint32_t BodyController::BiometricUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_biometricUserId;
    }

    event_token BodyController::BiometricUserChanged(Foundation::TypedEventHandler<Input::BodyController, IBiometricUserChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_biometricUserChangedToken;
    }

    void BodyController::BiometricUserChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_biometricUserChangedToken = token;
    }

    IBodyControllerReading BodyController::GetCurrentReading()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_currentReading;
    }

    event_token BodyController::ReadingChanged(Foundation::TypedEventHandler<Input::BodyController, IBodyControllerReadingChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_readingChangedToken;
    }

    void BodyController::ReadingChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_readingChangedToken = token;
    }

    Foundation::Collections::IVectorView<uint64_t> BodyController::AssociatedControllerIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_associatedControllerIds;
    }

    event_token BodyController::AssociatedControllerAdded(Foundation::TypedEventHandler<Input::BodyController, IAssociatedControllerAddedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_associatedControllerAddedToken;
    }

    void BodyController::AssociatedControllerAdded(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_associatedControllerAddedToken = token;
    }

    event_token BodyController::AssociatedControllerRemoved(Foundation::TypedEventHandler<Input::BodyController, IAssociatedControllerRemovedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_associatedControllerRemovedToken;
    }

    void BodyController::AssociatedControllerRemoved(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_associatedControllerRemovedToken = token;
    }
}