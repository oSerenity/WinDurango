#include "pch.h"
#include "Windows.Xbox.Media.SystemMediaTransportControls.h"
#include "Windows.Xbox.Media.SystemMediaTransportControls.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
    Media::SystemMediaTransportControls SystemMediaTransportControls::GetForCurrentView()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_currentView;
    }

    MediaPlaybackStatus SystemMediaTransportControls::PlaybackStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_playbackStatus;
    }

    void SystemMediaTransportControls::PlaybackStatus(MediaPlaybackStatus const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_playbackStatus = value;
    }

    SystemMediaTransportControlsDisplayUpdater SystemMediaTransportControls::DisplayUpdater()
    {
        throw hresult_not_implemented();
    }

    Windows::Media::SoundLevel SystemMediaTransportControls::SoundLevel()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_soundLevel;
    }

    bool SystemMediaTransportControls::IsEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_enabled;
    }

    void SystemMediaTransportControls::IsEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_enabled = value;
    }

    bool SystemMediaTransportControls::IsPlayEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_playEnabled;
    }

    void SystemMediaTransportControls::IsPlayEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_playEnabled = value;
    }

    bool SystemMediaTransportControls::IsStopEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_stopEnabled;
    }

    void SystemMediaTransportControls::IsStopEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stopEnabled = value;
    }

    bool SystemMediaTransportControls::IsPauseEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_pauseEnabled;
    }

    void SystemMediaTransportControls::IsPauseEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_pauseEnabled = value;
    }

    bool SystemMediaTransportControls::IsRecordEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_recordEnabled;
    }

    void SystemMediaTransportControls::IsRecordEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_recordEnabled = value;
    }

    bool SystemMediaTransportControls::IsFastForwardEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_fastForwardEnabled;
    }

    void SystemMediaTransportControls::IsFastForwardEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_fastForwardEnabled = value;
    }

    bool SystemMediaTransportControls::IsRewindEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rewindEnabled;
    }

    void SystemMediaTransportControls::IsRewindEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_rewindEnabled = value;
    }

    bool SystemMediaTransportControls::IsPreviousEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_previousEnabled;
    }

    void SystemMediaTransportControls::IsPreviousEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_previousEnabled = value;
    }

    bool SystemMediaTransportControls::IsNextEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_nextEnabled;
    }

    void SystemMediaTransportControls::IsNextEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_nextEnabled = value;
    }

    bool SystemMediaTransportControls::IsChannelUpEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_channelUpEnabled;
    }

    void SystemMediaTransportControls::IsChannelUpEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_channelUpEnabled = value;
    }

    bool SystemMediaTransportControls::IsChannelDownEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_channelDownEnabled;
    }

    void SystemMediaTransportControls::IsChannelDownEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_channelDownEnabled = value;
    }

    bool SystemMediaTransportControls::IsBackEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_backEnabled;
    }

    void SystemMediaTransportControls::IsBackEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_backEnabled = value;
    }

    bool SystemMediaTransportControls::IsViewEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_viewEnabled;
    }

    void SystemMediaTransportControls::IsViewEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_viewEnabled = value;
    }

    bool SystemMediaTransportControls::IsMenuEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_menuEnabled;
    }

    void SystemMediaTransportControls::IsMenuEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_menuEnabled = value;
    }

    event_token SystemMediaTransportControls::ButtonPressed(Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsButtonPressedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_buttonPressedEvent.add(handler);
    }

    void SystemMediaTransportControls::ButtonPressed(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_buttonPressedEvent.remove(token);
    }

    event_token SystemMediaTransportControls::PropertyChanged(Foundation::TypedEventHandler<Media::SystemMediaTransportControls, SystemMediaTransportControlsPropertyChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_propertyChangedEvent.add(handler);
    }

    void SystemMediaTransportControls::PropertyChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_propertyChangedEvent.remove(token);
    }
}