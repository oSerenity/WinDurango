#include "pch.h"
#include "Windows.Xbox.Media.GameTransportControlsPropertyChangedEventArgs.h"
#include "Windows.Xbox.Media.GameTransportControlsPropertyChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
	GameTransportControlsProperty GameTransportControlsPropertyChangedEventArgs::Property()
	{
		return m_property;
	}
}