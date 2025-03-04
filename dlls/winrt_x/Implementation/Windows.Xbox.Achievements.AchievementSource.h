#pragma once
#include "Windows.Xbox.Achievements.AchievementSource.g.h"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    struct AchievementSource : AchievementSourceT<AchievementSource>
    {
        AchievementSource() = default;

        event_token AchievementUnlocked(Foundation::EventHandler<AchievementUnlockedEventArgs> const& handler);
        void AchievementUnlocked(event_token const& token) noexcept;

    private:
        event<Foundation::EventHandler<AchievementUnlockedEventArgs>> m_achievementUnlockedEvent;
    };
}