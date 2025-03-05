#pragma once
#include "Windows.Xbox.Input.InputManager.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct InputManager
    {
        InputManager() = default;

        static void SetKinectOnePersonSystemEngagement();
        static void SetKinectTwoPersonSystemEngagement();
        static void SetKinectOnePersonManualEngagement(BodyHandPair const& bodyHandPair);
        static void SetKinectTwoPersonManualEngagement(BodyHandPair const& bodyHandPair1, BodyHandPair const& bodyHandPair2);
        static Foundation::Collections::IVectorView<BodyHandPair> KinectManualEngagedHands();
        static KinectEngagementMode KinectEngagementMode();
        static uint32_t MaximumKinectEngagedPersonCount();
        static SystemCursorVisibility SystemCursorVisibility();
        static void SystemCursorVisibility(Input::SystemCursorVisibility const& visibility);
        static void DeferSystemGestures();
        static void OverrideKinectInteractionMode(KinectInteractionMode const& mode);
        static bool DoesGamepadDeferKinectInteractions();
        static void DoesGamepadDeferKinectInteractions(bool doesGamepadDeferKinectInteractions);
        static bool IsKinectPersonEngaged();
        static event_token IsKinectPersonEngagedChanged(Foundation::EventHandler<IsKinectPersonEngagedChangedEventArgs> const& handler);
        static void IsKinectPersonEngagedChanged(event_token const& token) noexcept;
        static InputMode SmartglassInputMode();
        static void SmartglassInputMode(InputMode const& mode);
        static ManipulationMode SmartglassManipulationModes();
        static void SmartglassManipulationModes(ManipulationMode const& mode);
        static InputMode GamepadInputMode();
        static void GamepadInputMode(InputMode const& mode);
        static ManipulationMode GamepadManipulationModes();
        static void GamepadManipulationModes(ManipulationMode const& mode);

    private:
		static inline BodyHandPair m_bodyHandPair1;
		static inline BodyHandPair m_bodyHandPair2;
		static inline auto m_kinectManualEngagedHands = single_threaded_vector<BodyHandPair>().GetView();
		static inline auto m_kinectEngagementMode = KinectEngagementMode::System;
		static inline auto m_systemCursorVisibility = SystemCursorVisibility::Visible;
		static inline auto m_kinectInteractionMode = KinectInteractionMode::Normal;
		static inline auto m_doesGamepadDeferKinectInteractions = false;
		static inline event_token m_isKinectPersonEngagedChangedToken;
		static inline auto m_smartglassInputMode = InputMode::DirectionalNavigation;
		static inline auto m_smartglassManipulationModes = ManipulationMode::None;
		static inline auto m_gamepadInputMode = InputMode::DirectionalNavigation;
		static inline auto m_gamepadManipulationModes = ManipulationMode::None;
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct InputManager : InputManagerT<InputManager, implementation::InputManager>
    {
    };
}