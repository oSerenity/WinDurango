#include "pch.h"
#include "Windows.Xbox.Media.GameTransportControlsButtonPressedEventArgs.h"
#include "Windows.Xbox.Media.GameTransportControlsButtonPressedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
	GameTransportControlsButton GameTransportControlsButtonPressedEventArgs::Button()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_button;
	}
}