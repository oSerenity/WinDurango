#pragma once
#include "Windows.Xbox.Media.GameTransportControlsPropertyChangedEventArgs.g.h"

namespace winrt::Windows::Xbox::Media::implementation
{
	struct GameTransportControlsPropertyChangedEventArgs : GameTransportControlsPropertyChangedEventArgsT<GameTransportControlsPropertyChangedEventArgs>
	{
		GameTransportControlsPropertyChangedEventArgs() = default;

		GameTransportControlsProperty Property();

	private:
		GameTransportControlsProperty m_property = GameTransportControlsProperty::SoundLevel;
	};
}