#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference MultiplayerActivityDetails::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionReference;
    }

    hstring MultiplayerActivityDetails::HandleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_handleId;
    }

    uint32_t MultiplayerActivityDetails::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    MultiplayerSessionVisibility MultiplayerActivityDetails::Visibility()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_visibility;
    }

    MultiplayerSessionRestriction MultiplayerActivityDetails::JoinRestriction()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_joinRestriction;
    }

    bool MultiplayerActivityDetails::Closed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_closed;
    }

    hstring MultiplayerActivityDetails::OwnerXboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ownerXboxUserId;
    }

    uint32_t MultiplayerActivityDetails::MaxMembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_maxMembersCount;
    }

    uint32_t MultiplayerActivityDetails::MembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_membersCount;
    }

    hstring MultiplayerActivityDetails::CustomSessionPropertiesJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_customSessionPropertiesJson;
    }
}