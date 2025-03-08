#include "pch.h"
#include "Windows.Xbox.Media.GameTransportControls.h"
#include "Windows.Xbox.Media.GameTransportControls.g.cpp"

namespace winrt::Windows::Xbox::Media::implementation
{
    hstring GameTransportControls::Title()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_title;
    }

    hstring GameTransportControls::Subtitle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_subtitle;
    }

    GamePlaybackStatus GameTransportControls::PlaybackStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_playbackStatus;
    }

    void GameTransportControls::PlaybackStatus(GamePlaybackStatus const& value)
    {
        LOG_FUNCTION_NAME();

        m_gamePlaybackStatus = value;
    }

    SoundLevel GameTransportControls::SoundLevel()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_soundLevel;
    }

    bool GameTransportControls::IsEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_enabled;
    }

    void GameTransportControls::IsEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_enabled = value;
    }

    bool GameTransportControls::IsPlayEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_playEnabled;
    }

    void GameTransportControls::IsPlayEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_playEnabled = value;
    }

    bool GameTransportControls::IsPauseEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_pauseEnabled;
    }

    void GameTransportControls::IsPauseEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_pauseEnabled = value;
    }

    bool GameTransportControls::IsMenuEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_menuEnabled;
    }

    void GameTransportControls::IsMenuEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_menuEnabled = value;
    }

    bool GameTransportControls::IsViewEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_viewEnabled;
    }

    void GameTransportControls::IsViewEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_viewEnabled = value;
    }

    bool GameTransportControls::IsBackEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_backEnabled;
    }

    void GameTransportControls::IsBackEnabled(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_backEnabled = value;
    }

    event_token GameTransportControls::ButtonPressed(Foundation::TypedEventHandler<Media::GameTransportControls, GameTransportControlsButtonPressedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameTransportControlsButtonPressedEventArgs.add(handler);
    }

    void GameTransportControls::ButtonPressed(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_gameTransportControlsButtonPressedEventArgs.remove(token);
    }

    event_token GameTransportControls::PropertyChanged(Foundation::TypedEventHandler<Media::GameTransportControls, GameTransportControlsPropertyChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameTransportControlsPropertyChangedEventArgs.add(handler);

		//throw hresult_not_implemented();
    }

    void GameTransportControls::PropertyChanged(winrt::event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_gameTransportControlsPropertyChangedEventArgs.remove(token);

        //throw hresult_not_implemented();
    }
}
