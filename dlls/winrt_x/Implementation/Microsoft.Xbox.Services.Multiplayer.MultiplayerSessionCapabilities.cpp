#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionCapabilities.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionCapabilities.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool MultiplayerSessionCapabilities::Connectivity()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_connectivity;
    }

    void MultiplayerSessionCapabilities::Connectivity(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_connectivity = value;
    }

    bool MultiplayerSessionCapabilities::SuppressPresenceActivityCheck()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_suppressPresenceActivityCheck;
    }

    void MultiplayerSessionCapabilities::SuppressPresenceActivityCheck(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_suppressPresenceActivityCheck = value;
    }

    bool MultiplayerSessionCapabilities::Gameplay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameplay;
    }

    void MultiplayerSessionCapabilities::Gameplay(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_gameplay = value;
    }

    bool MultiplayerSessionCapabilities::Large()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_large;
    }

    void MultiplayerSessionCapabilities::Large(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_large = value;
    }

    bool MultiplayerSessionCapabilities::ConnectionRequiredForActiveMembers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_connectionRequiredForActiveMembers;
    }

    void MultiplayerSessionCapabilities::ConnectionRequiredForActiveMembers(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_connectionRequiredForActiveMembers = value;
    }

    bool MultiplayerSessionCapabilities::UserAuthorizationStyle()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_userAuthorizationStyle;
    }

    void MultiplayerSessionCapabilities::UserAuthorizationStyle(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_userAuthorizationStyle = value;
    }

    bool MultiplayerSessionCapabilities::Crossplay()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_crossplay;
    }

    void MultiplayerSessionCapabilities::Crossplay(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_crossplay = value;
    }

    bool MultiplayerSessionCapabilities::Team()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_team;
    }

    void MultiplayerSessionCapabilities::Team(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_team = value;
    }

    bool MultiplayerSessionCapabilities::Arbitration()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_arbitration;
    }

    void MultiplayerSessionCapabilities::Arbitration(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_arbitration = value;
    }

    bool MultiplayerSessionCapabilities::Searchable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_searchable;
    }

    void MultiplayerSessionCapabilities::Searchable(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_searchable = value;
    }

    bool MultiplayerSessionCapabilities::HasOwners()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasOwners;
    }

    void MultiplayerSessionCapabilities::HasOwners(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_hasOwners = value;
    }
}