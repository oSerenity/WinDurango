#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    System::User AchievementUnlockedEventArgs::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_user;
    }

    hstring AchievementUnlockedEventArgs::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleId;
    }

    hstring AchievementUnlockedEventArgs::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring AchievementUnlockedEventArgs::AchievementId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_achievementId;
    }

    Foundation::DateTime AchievementUnlockedEventArgs::UnlockTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_unlockTime;
    }

    Foundation::Uri AchievementUnlockedEventArgs::ExtendedInfoUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_extendedInfoUrl;
    }

    Foundation::Collections::IVectorView<hstring> AchievementUnlockedEventArgs::InAppRewardValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_inAppRewardValue;
    }
}