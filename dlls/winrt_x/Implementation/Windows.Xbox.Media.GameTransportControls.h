#pragma once
#include "Windows.Xbox.Media.GameTransportControls.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//////////

namespace winrt::Windows::Xbox::Media::implementation
{
    struct GameTransportControls : GameTransportControlsT<GameTransportControls>
    {
        GameTransportControls() = default;

        hstring Title();
        hstring Subtitle();
        winrt::Windows::Xbox::Media::GamePlaybackStatus PlaybackStatus();
        void PlaybackStatus(winrt::Windows::Xbox::Media::GamePlaybackStatus const& value);
        winrt::Windows::Xbox::Media::SoundLevel SoundLevel();
        bool IsEnabled();
        void IsEnabled(bool value);
        bool IsPlayEnabled();
        void IsPlayEnabled(bool value);
        bool IsPauseEnabled();

        void IsPauseEnabled(bool value);
        bool IsMenuEnabled();
        void IsMenuEnabled(bool value);
        bool IsViewEnabled();
        void IsViewEnabled(bool value);
        bool IsBackEnabled();
        void IsBackEnabled(bool value);
        winrt::event_token ButtonPressed(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsButtonPressedEventArgs> const& handler);
        void ButtonPressed(winrt::event_token const& token) noexcept;
        winrt::event_token PropertyChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsPropertyChangedEventArgs> const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
        GamePlaybackStatus m_gamePlaybackStatus = GamePlaybackStatus::Closed;
        bool m_enabled = false;
        bool m_playEnabled = false;
        bool m_pauseEnabled = false;
        bool m_menuEnabled = false;
        bool m_viewEnabled = false;
        bool m_backEnabled = false;
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsButtonPressedEventArgs>> m_gameTransportControlsButtonPressedEventArgs;
        winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Media::GameTransportControls, winrt::Windows::Xbox::Media::GameTransportControlsPropertyChangedEventArgs>> m_gameTransportControlsPropertyChangedEventArgs;
    };
}
namespace winrt::Windows::Xbox::Media::factory_implementation
{
    struct GameTransportControls : GameTransportControlsT<GameTransportControls, implementation::GameTransportControls>
    {
    };
}
