#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> MultiplayerSessionRoleTypes::RoleTypes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_roleTypes;
    }
}