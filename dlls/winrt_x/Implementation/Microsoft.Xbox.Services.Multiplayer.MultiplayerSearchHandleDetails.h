#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSearchHandleDetails : MultiplayerSearchHandleDetailsT<MultiplayerSearchHandleDetails>
    {
        MultiplayerSearchHandleDetails() = default;

        MultiplayerSessionReference SessionReference();
        hstring HandleId();
        Windows::Foundation::Collections::IVectorView<hstring> SessionOwnerXboxUserIds();
        Windows::Foundation::Collections::IVectorView<hstring> Tags();
        Windows::Foundation::Collections::IMapView<hstring, double> NumbersMetadata();
        Windows::Foundation::Collections::IMapView<hstring, hstring> StringsMetadata();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> RoleTypes();
        MultiplayerSessionVisibility Visibility();
        MultiplayerSessionRestriction JoinRestriction();
        bool Closed();
        uint32_t MaxMembersCount();
        uint32_t MembersCount();
        Windows::Foundation::DateTime HandleCreationTime();
        hstring CustomSessionPropertiesJson();

    private:
		MultiplayerSessionReference m_sessionReference{ nullptr };
        hstring m_handleId{ L"" };
		Windows::Foundation::Collections::IVectorView<hstring> m_sessionOwnerXboxUserIds;
		Windows::Foundation::Collections::IVectorView<hstring> m_tags;
		Windows::Foundation::Collections::IMapView<hstring, double> m_numbersMetadata;
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_stringsMetadata;
		Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> m_roleTypes;
		MultiplayerSessionVisibility m_visibility{ MultiplayerSessionVisibility::Unknown };
		MultiplayerSessionRestriction m_joinRestriction{ MultiplayerSessionRestriction::Unknown };
        bool m_closed{ false };
		uint32_t m_maxMembersCount{ 0 };
		uint32_t m_membersCount{ 0 };
        Windows::Foundation::DateTime m_handleCreationTime{ Windows::Foundation::DateTime::clock::now() };
		hstring m_customSessionPropertiesJson{ L"" };
    };
}