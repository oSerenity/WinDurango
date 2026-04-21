#include "pch.h"
#include "Windows.Xbox.Media.GameTransportControls.h"
#include "Windows.Xbox.Media.GameTransportControlsPropertyChangedEventArgs.h"
#include "Windows.Xbox.Media.GameTransportControls.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
	void GameTransportControls::RaisePropertyChanged(GameTransportControlsProperty const property)
	{
		if (!m_gameTransportControlsPropertyChangedEventArgs)
		{
			return;
		}

		auto const args = winrt::make<implementation::GameTransportControlsPropertyChangedEventArgs>(property);
		winrt::Windows::Xbox::Media::GameTransportControls const sender{ *this };
		m_gameTransportControlsPropertyChangedEventArgs(sender, args);
	}

	hstring GameTransportControls::Title()
	{
		return m_title;
	}

	void GameTransportControls::Title(hstring value)
	{
		if (m_title == value)
		{
			return;
		}

		m_title = std::move(value);
		RaisePropertyChanged(GameTransportControlsProperty::Title);
	}

	hstring GameTransportControls::Subtitle()
	{
		return m_subtitle;
	}

	void GameTransportControls::Subtitle(hstring value)
	{
		if (m_subtitle == value)
		{
			return;
		}

		m_subtitle = std::move(value);
		RaisePropertyChanged(GameTransportControlsProperty::Subtitle);
	}

	winrt::Windows::Xbox::Media::GamePlaybackStatus GameTransportControls::PlaybackStatus()
	{
		return m_gamePlaybackStatus;
	}

	void GameTransportControls::PlaybackStatus(winrt::Windows::Xbox::Media::GamePlaybackStatus const& value)
	{
		if (m_gamePlaybackStatus == value)
		{
			return;
		}

		m_gamePlaybackStatus = value;
		RaisePropertyChanged(GameTransportControlsProperty::PlaybackStatus);
	}

	winrt::Windows::Xbox::Media::SoundLevel GameTransportControls::SoundLevel()
	{
		return m_soundLevel;
	}

	bool GameTransportControls::IsEnabled()
	{
		return m_enabled;
	}

	void GameTransportControls::IsEnabled(bool value)
	{
		if (m_enabled == value)
		{
			return;
		}

		m_enabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsEnabled);
	}

	bool GameTransportControls::IsPlayEnabled()
	{
		return m_playEnabled;
	}

	void GameTransportControls::IsPlayEnabled(bool value)
	{
		if (m_playEnabled == value)
		{
			return;
		}

		m_playEnabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsPlayEnabled);
	}

	bool GameTransportControls::IsPauseEnabled()
	{
		return m_pauseEnabled;
	}

	void GameTransportControls::IsPauseEnabled(bool value)
	{
		if (m_pauseEnabled == value)
		{
			return;
		}

		m_pauseEnabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsPauseEnabled);
	}

	bool GameTransportControls::IsMenuEnabled()
	{
		return m_menuEnabled;
	}

	void GameTransportControls::IsMenuEnabled(bool value)
	{
		if (m_menuEnabled == value)
		{
			return;
		}

		m_menuEnabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsMenuEnabled);
	}

	bool GameTransportControls::IsViewEnabled()
	{
		return m_viewEnabled;
	}

	void GameTransportControls::IsViewEnabled(bool value)
	{
		if (m_viewEnabled == value)
		{
			return;
		}

		m_viewEnabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsViewEnabled);
	}

	bool GameTransportControls::IsBackEnabled()
	{
		return m_backEnabled;
	}

	void GameTransportControls::IsBackEnabled(bool value)
	{
		if (m_backEnabled == value)
		{
			return;
		}

		m_backEnabled = value;
		RaisePropertyChanged(GameTransportControlsProperty::IsBackEnabled);
	}

	winrt::event_token GameTransportControls::ButtonPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsButtonPressedEventArgs> const& handler)
	{
		return m_gameTransportControlsButtonPressedEventArgs.add(handler);
	}

	void GameTransportControls::ButtonPressed(winrt::event_token const& token) noexcept
	{
		m_gameTransportControlsButtonPressedEventArgs.remove(token);
	}

	winrt::event_token GameTransportControls::PropertyChanged(
		winrt::Windows::Foundation::TypedEventHandler<
			winrt::Windows::Xbox::Media::GameTransportControls,
			winrt::Windows::Xbox::Media::GameTransportControlsPropertyChangedEventArgs> const& handler)
	{
		LOG_INFO_W(L"[GameTransportControls] PropertyChanged handler added\n");

		return m_gameTransportControlsPropertyChangedEventArgs.add(handler);
	}

	void GameTransportControls::PropertyChanged(winrt::event_token const& token) noexcept
	{
		m_gameTransportControlsPropertyChangedEventArgs.remove(token);
	}
}
