#include "pch.h"
#include "Windows.Xbox.Input.GamepadReading.h"
#include "Windows.Xbox.Input.GamepadReading.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
	Foundation::DateTime GamepadReading::Timestamp()
	{
		return Foundation::DateTime();
	}

	GamepadButtons GamepadReading::Buttons()
	{
		return m_Reading.Buttons;
	}

	bool GamepadReading::IsDPadUpPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::DPadUp);
	}

	bool GamepadReading::IsDPadDownPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::DPadDown);
	}

	bool GamepadReading::IsDPadLeftPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::DPadLeft);
	}

	bool GamepadReading::IsDPadRightPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::DPadRight);
	}

	bool GamepadReading::IsMenuPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Menu);
	}

	bool GamepadReading::IsViewPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::View);
	}

	bool GamepadReading::IsLeftThumbstickPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::LeftThumbstick);
	}

	bool GamepadReading::IsRightThumbstickPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::RightThumbstick);
	}

	bool GamepadReading::IsLeftShoulderPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::LeftShoulder);
	}

	bool GamepadReading::IsRightShoulderPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::RightShoulder);
	}

	bool GamepadReading::IsAPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::A);
	}

	bool GamepadReading::IsBPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::B);
	}

	bool GamepadReading::IsXPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::X);
	}

	bool GamepadReading::IsYPressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Y);
	}

	float GamepadReading::LeftTrigger()
	{
		return m_Reading.LeftTrigger;
	}

	float GamepadReading::RightTrigger()
	{
		return m_Reading.RightTrigger;
	}

	float GamepadReading::LeftThumbstickX()
	{
		return m_Reading.LeftThumbstickX;
	}

	float GamepadReading::LeftThumbstickY()
	{
		return m_Reading.LeftThumbstickY;
	}

	float GamepadReading::RightThumbstickX()
	{
		return m_Reading.RightThumbstickX;
	}

	float GamepadReading::RightThumbstickY()
	{
		return m_Reading.RightThumbstickY;
	}

	bool GamepadReading::IsPaddle1Pressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Paddle1);
	}

	bool GamepadReading::IsPaddle2Pressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Paddle2);
	}

	bool GamepadReading::IsPaddle3Pressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Paddle3);
	}

	bool GamepadReading::IsPaddle4Pressed()
	{
		return static_cast<int>(m_Reading.Buttons) & static_cast<int>(GamepadButtons::Paddle4);
	}
}