#pragma once
#include "Windows.Xbox.Input.Controller.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct Controller : ControllerT<Controller>
    {
        Controller();

        static Foundation::Collections::IVectorView<IController> Controllers();
        static event_token ControllerAdded(Foundation::EventHandler<ControllerAddedEventArgs> const& handler);
        static void ControllerAdded(event_token const& token) noexcept;
        static event_token ControllerRemoved(Foundation::EventHandler<ControllerRemovedEventArgs> const& handler);
        static void ControllerRemoved(event_token const& token) noexcept;
        static event_token ControllerPairingChanged(Foundation::EventHandler<ControllerPairingChangedEventArgs> const& handler);
        static void ControllerPairingChanged(event_token const& token) noexcept;
        static event_token ControllerOrderChanged(Foundation::EventHandler<ControllerOrderChangedEventArgs> const& handler);
        static void ControllerOrderChanged(event_token const& token) noexcept;
        static IController GetControllerById(uint64_t controllerId);
        static void GetControllerMetadata(uint64_t controllerId, MetadataVersion const& metadataVersion, com_array<uint8_t>& ppMetadata);
        static Foundation::Collections::IVectorView<IController> GetControllersOrderedLeftToRight(ControllerOrderFilter const& orderFilter);
        uint64_t Id();
        hstring Type();
        System::User User();
        Foundation::Collections::IVectorView<System::IAudioDeviceInfo> AudioDevices();
        GameControllerVersionInfo FirmwareVersionInfo();
        GameControllerVersionInfo HardwareVersionInfo();
        uint16_t HardwareProductId();
        uint16_t HardwareVendorId();

    private:
        static inline Foundation::Collections::IVectorView<IController> m_controllers = single_threaded_vector<IController>().GetView();
		static inline Foundation::Collections::IVectorView<IController> m_controllersOrderedLeftToRight = single_threaded_vector<IController>().GetView();

        static inline event<Foundation::EventHandler<ControllerAddedEventArgs>> m_controllerAddedEvent;
		static inline event<Foundation::EventHandler<ControllerRemovedEventArgs>> m_controllerRemovedEvent;
		static inline event<Foundation::EventHandler<ControllerPairingChangedEventArgs>> m_controllerPairingChangedEvent;
		static inline event<Foundation::EventHandler<ControllerOrderChangedEventArgs>> m_controllerOrderChangedEvent;

        uint16_t m_id{ 1 };
        hstring m_type{ L"Windows.Xbox.Input.Controller" };

		Foundation::Collections::IVectorView<System::IAudioDeviceInfo> m_audioDevices = single_threaded_vector<System::IAudioDeviceInfo>().GetView();

		GameControllerVersionInfo m_firmwareVersionInfo{ 1, 2, 3, 4 };
		GameControllerVersionInfo m_hardwareVersionInfo{ 1, 2, 3, 4 };
		uint16_t m_hardwareProductId{ 1 };
		uint16_t m_hardwareVendorId{ 1 };
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct Controller : ControllerT<Controller, implementation::Controller>
    {
    };
}