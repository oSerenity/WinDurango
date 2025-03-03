#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerRoleInfo::MemberXboxUserIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_memberXboxUserIds;
    }

    uint32_t MultiplayerRoleInfo::MembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_membersCount;
    }

    uint32_t MultiplayerRoleInfo::TargetCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_targetCount;
    }

    void MultiplayerRoleInfo::TargetCount(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_targetCount = value;
    }

    uint32_t MultiplayerRoleInfo::MaxMembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxMembersCount;
    }

    void MultiplayerRoleInfo::MaxMembersCount(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxMembersCount = value;
    }
}