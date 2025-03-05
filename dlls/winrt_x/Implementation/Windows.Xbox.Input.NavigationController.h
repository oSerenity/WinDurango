#pragma once
#include "Windows.Xbox.Input.NavigationController.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct NavigationController : NavigationControllerT<NavigationController>
    {
        NavigationController() = default;

        static Foundation::Collections::IVectorView<INavigationController> NavigationControllers();
        static event_token NavigationControllerAdded(Foundation::EventHandler<NavigationControllerAddedEventArgs> const& handler);
        static void NavigationControllerAdded(event_token const& token) noexcept;
        static event_token NavigationControllerRemoved(Foundation::EventHandler<NavigationControllerRemovedEventArgs> const& handler);
        static void NavigationControllerRemoved(event_token const& token) noexcept;
        uint64_t Id();
        hstring Type();
        System::User User();
        INavigationReading GetNavigationReading();
        RawNavigationReading GetRawNavigationReading();
        event_token NavigationReadingChanged(Foundation::TypedEventHandler<Input::NavigationController, INavigationReadingChangedEventArgs> const& handler);
        void NavigationReadingChanged(event_token const& token) noexcept;

    private:
		static inline Foundation::Collections::IVectorView<INavigationController> m_navigationControllers = { nullptr };
		static inline event_token m_navigationControllerAddedToken = {};
		static inline event_token m_navigationControllerRemovedToken = {};

		uint64_t m_id{ 0 };
		hstring m_type{ L"Windows.Xbox.Input.NavigationController" };
		System::User m_user{ nullptr };
		INavigationReading m_navigationReading{ nullptr };
		RawNavigationReading m_rawNavigationReading{ 0 };
		event_token m_navigationReadingChangedToken = {};
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct NavigationController : NavigationControllerT<NavigationController, implementation::NavigationController>
    {
    };
}