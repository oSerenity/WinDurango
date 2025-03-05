#pragma once
#include "Windows.Xbox.Input.BodyController.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct BodyController : BodyControllerT<BodyController>
    {
        BodyController() = default;

        static Foundation::Collections::IVectorView<IBodyController> BodyControllers();
        static event_token BodyControllerAdded(Foundation::EventHandler<BodyControllerAddedEventArgs> const& handler);
        static void BodyControllerAdded(event_token const& token) noexcept;
        static event_token BodyControllerRemoved(Foundation::EventHandler<BodyControllerRemovedEventArgs> const& handler);
        static void BodyControllerRemoved(event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        System::User User();
        uint32_t BiometricUserId();
        event_token BiometricUserChanged(Foundation::TypedEventHandler<Input::BodyController, IBiometricUserChangedEventArgs> const& handler);
        void BiometricUserChanged(event_token const& token) noexcept;
        IBodyControllerReading GetCurrentReading();
        event_token ReadingChanged(Foundation::TypedEventHandler<Input::BodyController, IBodyControllerReadingChangedEventArgs> const& handler);
        void ReadingChanged(event_token const& token) noexcept;
        Foundation::Collections::IVectorView<uint64_t> AssociatedControllerIds();
        event_token AssociatedControllerAdded(Foundation::TypedEventHandler<Input::BodyController, IAssociatedControllerAddedEventArgs> const& handler);
        void AssociatedControllerAdded(event_token const& token) noexcept;
        event_token AssociatedControllerRemoved(Foundation::TypedEventHandler<Input::BodyController, IAssociatedControllerRemovedEventArgs> const& handler);
        void AssociatedControllerRemoved(event_token const& token) noexcept;

	private:
        static inline Foundation::Collections::IVectorView<IBodyController> m_bodyControllers = single_threaded_vector<IBodyController>().GetView();
		static inline event_token m_bodyControllerAddedToken = {};
		static inline event_token m_bodyControllerRemovedToken = {};

		uint64_t m_id{ 0 };
		hstring m_type{ L"Windows.Xbox.Input.BodyController" };
		System::User m_user{ nullptr };
		uint32_t m_biometricUserId{ 0 };
		event_token m_biometricUserChangedToken = {};
		IBodyControllerReading m_currentReading{ nullptr };
		event_token m_readingChangedToken = {};
		Foundation::Collections::IVectorView<uint64_t> m_associatedControllerIds = single_threaded_vector<uint64_t>().GetView();
		event_token m_associatedControllerAddedToken = {};
		event_token m_associatedControllerRemovedToken = {};
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BodyController : BodyControllerT<BodyController, implementation::BodyController>
    {
    };
}