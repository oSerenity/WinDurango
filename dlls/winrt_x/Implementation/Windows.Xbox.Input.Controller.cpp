#include "pch.h"
#include "Windows.Xbox.Input.Controller.h"
#include "Windows.Xbox.Input.Controller.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
	Controller::Controller()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		auto controller1 = winrt::make<Controller>();

		m_controllers = winrt::single_threaded_vector<IController>({ controller1 }).GetView();
		m_controllersOrderedLeftToRight = winrt::single_threaded_vector<IController>({ controller1 }).GetView();
	}

	Foundation::Collections::IVectorView<IController> Controller::Controllers()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_controllers;
	}

	event_token Controller::ControllerAdded(Foundation::EventHandler<ControllerAddedEventArgs> const& handler)
	{
		LOG_FUNCTION_NAME();

		return m_controllerAddedEvent.add(handler);
	}

	void Controller::ControllerAdded(event_token const& token) noexcept
	{
		LOG_FUNCTION_NAME();

		m_controllerAddedEvent.remove(token);
	}

	event_token Controller::ControllerRemoved(Foundation::EventHandler<ControllerRemovedEventArgs> const& handler)
	{
		LOG_FUNCTION_NAME();

		return m_controllerRemovedEvent.add(handler);
	}

	void Controller::ControllerRemoved(event_token const& token) noexcept
	{
		LOG_FUNCTION_NAME();

		m_controllerRemovedEvent.remove(token);
	}

	event_token Controller::ControllerPairingChanged(Foundation::EventHandler<ControllerPairingChangedEventArgs> const& handler)
	{
		LOG_FUNCTION_NAME();

		return m_controllerPairingChangedEvent.add(handler);
	}

	void Controller::ControllerPairingChanged(event_token const& token) noexcept
	{
		LOG_FUNCTION_NAME();

		m_controllerPairingChangedEvent.remove(token);
	}

	event_token Controller::ControllerOrderChanged(Foundation::EventHandler<ControllerOrderChangedEventArgs> const& handler)
	{
		LOG_FUNCTION_NAME();

		return m_controllerOrderChangedEvent.add(handler);
	}

	void Controller::ControllerOrderChanged(event_token const& token) noexcept
	{
		LOG_FUNCTION_NAME();

		m_controllerOrderChangedEvent.remove(token);
	}

	IController Controller::GetControllerById(uint64_t controllerId)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_controllers.GetAt(0);
	}

	void Controller::GetControllerMetadata(uint64_t controllerId, MetadataVersion const& metadataVersion, com_array<uint8_t>& ppMetadata)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Foundation::Collections::IVectorView<IController> Controller::GetControllersOrderedLeftToRight(ControllerOrderFilter const& orderFilter)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_controllersOrderedLeftToRight;
	}

	uint64_t Controller::Id()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
	}

	hstring Controller::Type()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_type;
	}

	System::User Controller::User()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Foundation::Collections::IVectorView<System::IAudioDeviceInfo> Controller::AudioDevices()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioDevices;
	}

	GameControllerVersionInfo Controller::FirmwareVersionInfo()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_firmwareVersionInfo;
	}

	GameControllerVersionInfo Controller::HardwareVersionInfo()
	{
		LOG_FUNCTION_NAME();

		return m_hardwareVersionInfo;
	}

	uint16_t Controller::HardwareProductId()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hardwareProductId;
	}

	uint16_t Controller::HardwareVendorId()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hardwareVendorId;
	}
}