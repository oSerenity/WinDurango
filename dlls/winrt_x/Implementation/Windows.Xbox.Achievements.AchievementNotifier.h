#pragma once
#include "Windows.Xbox.Achievements.AchievementNotifier.g.h"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    struct AchievementNotifier
    {
        AchievementNotifier() = default;

        static AchievementSource GetTitleIdFilteredSource();
        static AchievementSource GetUnfilteredSource();
    };
}

namespace winrt::Windows::Xbox::Achievements::factory_implementation
{
    struct AchievementNotifier : AchievementNotifierT<AchievementNotifier, implementation::AchievementNotifier>
    {

    };
}