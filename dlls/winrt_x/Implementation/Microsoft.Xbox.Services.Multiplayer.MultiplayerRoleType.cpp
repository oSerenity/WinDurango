#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool MultiplayerRoleType::OwnerManaged()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_ownerManaged;
    }

    Windows::Foundation::Collections::IVectorView<MutableRoleSetting> MultiplayerRoleType::MutableRoleSettings()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_mutableRoleSettings;
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleInfo> MultiplayerRoleType::Roles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_roles;
    }

    void MultiplayerRoleType::Roles(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleInfo> const& roles)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_roles = roles;
    }
}