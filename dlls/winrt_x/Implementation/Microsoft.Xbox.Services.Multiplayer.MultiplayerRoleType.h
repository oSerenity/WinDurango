#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerRoleType : MultiplayerRoleTypeT<MultiplayerRoleType>
    {
        MultiplayerRoleType() = default;

        bool OwnerManaged();
        Windows::Foundation::Collections::IVectorView<MutableRoleSetting> MutableRoleSettings();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleInfo> Roles();
        void Roles(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleInfo> const& roles);

    private:
		bool m_ownerManaged{ false };
		Windows::Foundation::Collections::IVectorView<MutableRoleSetting> m_mutableRoleSettings = single_threaded_vector<MutableRoleSetting>().GetView();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleInfo> m_roles = single_threaded_map<hstring, MultiplayerRoleInfo>().GetView();
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerRoleType : MultiplayerRoleTypeT<MultiplayerRoleType, implementation::MultiplayerRoleType>
    {
    };
}