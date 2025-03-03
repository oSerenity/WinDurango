#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerMember.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    uint32_t MultiplayerMember::MemberId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberId;
    }

    hstring MultiplayerMember::TeamId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamId;
    }

    hstring MultiplayerMember::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    hstring MultiplayerMember::DebugGamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_debugGamertag;
    }

    bool MultiplayerMember::IsLocal()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isLocal;
    }

    bool MultiplayerMember::IsInLobby()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isInLobby;
    }

    bool MultiplayerMember::IsInGame()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isInGame;
    }

    MultiplayerSessionMemberStatus MultiplayerMember::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_status;
    }

    hstring MultiplayerMember::ConnectionAddress()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_connectionAddress;
    }

    hstring MultiplayerMember::Properties()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_properties;
    }

    bool MultiplayerMember::IsMemberOnSameDevice(Manager::MultiplayerMember const& member)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isMemberOnSameDevice;
    }

    hstring MultiplayerMember::_DeviceToken()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_deviceToken;
    }
}