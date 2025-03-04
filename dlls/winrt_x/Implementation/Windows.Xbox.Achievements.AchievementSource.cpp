#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementSource.h"
#include "Windows.Xbox.Achievements.AchievementSource.g.cpp"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    event_token AchievementSource::AchievementUnlocked(Foundation::EventHandler<AchievementUnlockedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_achievementUnlockedEvent.add(handler);
    }

    void AchievementSource::AchievementUnlocked(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_achievementUnlockedEvent.remove(token);
    }
}