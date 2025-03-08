#pragma once
#include "Windows.Xbox.Media.SystemMediaTransportControls.g.h"

namespace winrt::Windows::Xbox::Media::implementation
{
    struct SystemMediaTransportControls : SystemMediaTransportControlsT<SystemMediaTransportControls>
    {
        SystemMediaTransportControls() = default;

        static Media::SystemMediaTransportControls GetForCurrentView();
        MediaPlaybackStatus PlaybackStatus();
        void PlaybackStatus(MediaPlaybackStatus const& value);
        SystemMediaTransportControlsDisplayUpdater DisplayUpdater();
        Windows::Media::SoundLevel SoundLevel();
        bool IsEnabled();
        void IsEnabled(bool value);
        bool IsPlayEnabled();
        void IsPlayEnabled(bool value);
        bool IsStopEnabled();
        void IsStopEnabled(bool value);
        bool IsPauseEnabled();
        void IsPauseEnabled(bool value);
        bool IsRecordEnabled();
        void IsRecordEnabled(bool value);
        bool IsFastForwardEnabled();
        void IsFastForwardEnabled(bool value);
        bool IsRewindEnabled();
        void IsRewindEnabled(bool value);
        bool IsPreviousEnabled();
        void IsPreviousEnabled(bool value);
        bool IsNextEnabled();
        void IsNextEnabled(bool value);
        bool IsChannelUpEnabled();
        void IsChannelUpEnabled(bool value);
        bool IsChannelDownEnabled();
        void IsChannelDownEnabled(bool value);
        bool IsBackEnabled();
        void IsBackEnabled(bool value);
        bool IsViewEnabled();
        void IsViewEnabled(bool value);
        bool IsMenuEnabled();
        void IsMenuEnabled(bool value);
        event_token ButtonPressed(Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsButtonPressedEventArgs> const& handler);
        void ButtonPressed(event_token const& token) noexcept;
        event_token PropertyChanged(Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsPropertyChangedEventArgs> const& handler);
        void PropertyChanged(event_token const& token) noexcept;

	private:
        static inline Media::SystemMediaTransportControls m_currentView{ nullptr };
		MediaPlaybackStatus m_playbackStatus = MediaPlaybackStatus::Closed;
		SystemMediaTransportControlsDisplayUpdater m_displayUpdater;
		Windows::Media::SoundLevel m_soundLevel = Windows::Media::SoundLevel::Muted;
		bool m_enabled = false;
		bool m_playEnabled = false;
		bool m_stopEnabled = false;
		bool m_pauseEnabled = false;
		bool m_recordEnabled = false;
		bool m_fastForwardEnabled = false;
		bool m_rewindEnabled = false;
		bool m_previousEnabled = false;
		bool m_nextEnabled = false;
		bool m_channelUpEnabled = false;
		bool m_channelDownEnabled = false;
		bool m_backEnabled = false;
		bool m_viewEnabled = false;
		bool m_menuEnabled = false;
		event<Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsButtonPressedEventArgs>> m_buttonPressedEvent;
		event<Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsPropertyChangedEventArgs>> m_propertyChangedEvent;
    };
}

namespace winrt::Windows::Xbox::Media::factory_implementation
{
    struct SystemMediaTransportControls : SystemMediaTransportControlsT<SystemMediaTransportControls, implementation::SystemMediaTransportControls>
    {
    };
}