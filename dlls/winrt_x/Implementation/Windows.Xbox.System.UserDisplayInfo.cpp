#include "pch.h"
#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "Windows.Xbox.System.UserDisplayInfo.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring UserDisplayInfo::Gamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gamertag;
    }

    uint32_t UserDisplayInfo::GamerScore()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gamerScore;
    }

    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_applicationDisplayName;
    }

    hstring UserDisplayInfo::GameDisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameDisplayName;
    }

    int32_t UserDisplayInfo::Reputation()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_reputation;
    }

    UserAgeGroup UserDisplayInfo::AgeGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_ageGroup;
    }

    Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_privileges;
    }
}