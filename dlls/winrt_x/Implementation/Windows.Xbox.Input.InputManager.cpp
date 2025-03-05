#include "pch.h"
#include "Windows.Xbox.Input.InputManager.h"
#include "Windows.Xbox.Input.InputManager.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    void InputManager::SetKinectOnePersonSystemEngagement()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

	void InputManager::SetKinectTwoPersonSystemEngagement()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

	void InputManager::SetKinectOnePersonManualEngagement(BodyHandPair const& bodyHandPair)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_bodyHandPair1 = bodyHandPair;
    }

	void InputManager::SetKinectTwoPersonManualEngagement(BodyHandPair const& bodyHandPair1, BodyHandPair const& bodyHandPair2)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_bodyHandPair1 = bodyHandPair1;
		m_bodyHandPair2 = bodyHandPair2;
    }

	Foundation::Collections::IVectorView<BodyHandPair> InputManager::KinectManualEngagedHands()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_kinectManualEngagedHands;
    }

	KinectEngagementMode InputManager::KinectEngagementMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_kinectEngagementMode;
    }

	uint32_t InputManager::MaximumKinectEngagedPersonCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_kinectEngagementMode == KinectEngagementMode::System ? 1 : 2;
    }

	SystemCursorVisibility InputManager::SystemCursorVisibility()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_systemCursorVisibility;
    }

	void InputManager::SystemCursorVisibility(Input::SystemCursorVisibility const& visibility)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_systemCursorVisibility = visibility;
    }

	void InputManager::DeferSystemGestures()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

	void InputManager::OverrideKinectInteractionMode(KinectInteractionMode const& mode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_kinectInteractionMode = mode;
    }

	bool InputManager::DoesGamepadDeferKinectInteractions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_doesGamepadDeferKinectInteractions;
    }

	void InputManager::DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_doesGamepadDeferKinectInteractions = doesGamepadDeferKinectInteractions;
    }

	bool InputManager::IsKinectPersonEngaged()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_kinectEngagementMode == KinectEngagementMode::System;
    }

	event_token InputManager::IsKinectPersonEngagedChanged(Foundation::EventHandler<IsKinectPersonEngagedChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isKinectPersonEngagedChangedToken;
    }

	void InputManager::IsKinectPersonEngagedChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_isKinectPersonEngagedChangedToken = token;
    }

	InputMode InputManager::SmartglassInputMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_smartglassInputMode;
    }

	void InputManager::SmartglassInputMode(InputMode const& mode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_smartglassInputMode = mode;
    }

	ManipulationMode InputManager::SmartglassManipulationModes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_smartglassManipulationModes;
    }

    void InputManager::SmartglassManipulationModes(ManipulationMode const& mode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_smartglassManipulationModes = mode;
    }

    InputMode InputManager::GamepadInputMode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamepadInputMode;
    }

    void InputManager::GamepadInputMode(InputMode const& mode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_gamepadInputMode = mode;
    }

    ManipulationMode InputManager::GamepadManipulationModes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamepadManipulationModes;
    }

    void InputManager::GamepadManipulationModes(ManipulationMode const& mode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_gamepadManipulationModes = mode;
    }
}