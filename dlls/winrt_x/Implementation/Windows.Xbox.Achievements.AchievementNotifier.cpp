#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementNotifier.h"
#include "Windows.Xbox.Achievements.AchievementNotifier.g.cpp"
#include "Windows.Xbox.Achievements.AchievementSource.h"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    Achievements::AchievementSource AchievementNotifier::GetTitleIdFilteredSource()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<AchievementSource>();
    }

    Achievements::AchievementSource AchievementNotifier::GetUnfilteredSource()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return winrt::make<AchievementSource>();
    }
}