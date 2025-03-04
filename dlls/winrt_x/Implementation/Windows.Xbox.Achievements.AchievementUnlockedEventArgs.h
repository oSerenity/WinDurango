#pragma once
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.g.h"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    struct AchievementUnlockedEventArgs : AchievementUnlockedEventArgsT<AchievementUnlockedEventArgs>
    {
        AchievementUnlockedEventArgs() = default;

        System::User User();
        hstring TitleId();
        hstring ServiceConfigurationId();
        hstring AchievementId();
        Foundation::DateTime UnlockTime();
        Foundation::Uri ExtendedInfoUrl();
        Foundation::Collections::IVectorView<hstring> InAppRewardValue();

    private:
		System::User m_user{ nullptr };
        hstring m_titleId{ L"" };
		hstring m_serviceConfigurationId{ L"" };
		hstring m_achievementId{ L"" };
		Foundation::DateTime m_unlockTime{ Foundation::DateTime::clock::now() };
		Foundation::Uri m_extendedInfoUrl{ nullptr };
        Foundation::Collections::IVectorView<hstring> m_inAppRewardValue = single_threaded_vector<hstring>().GetView();
    };
}