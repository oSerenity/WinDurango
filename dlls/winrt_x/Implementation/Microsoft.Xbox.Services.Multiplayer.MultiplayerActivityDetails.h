#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerActivityDetails : MultiplayerActivityDetailsT<MultiplayerActivityDetails>
    {
        MultiplayerActivityDetails() = default;

        MultiplayerSessionReference SessionReference();
        hstring HandleId();
        uint32_t TitleId();
        MultiplayerSessionVisibility Visibility();
        MultiplayerSessionRestriction JoinRestriction();
        bool Closed();
        hstring OwnerXboxUserId();
        uint32_t MaxMembersCount();
        uint32_t MembersCount();
        hstring CustomSessionPropertiesJson();

    private:
		MultiplayerSessionReference m_sessionReference{ nullptr };
        hstring m_handleId{ L"" };
		uint32_t m_titleId{ 0 };
		MultiplayerSessionVisibility m_visibility{ MultiplayerSessionVisibility::Unknown };
		MultiplayerSessionRestriction m_joinRestriction{ MultiplayerSessionRestriction::Unknown };
		bool m_closed{ false };
		hstring m_ownerXboxUserId{ L"" };
		uint32_t m_maxMembersCount{ 0 };
		uint32_t m_membersCount{ 0 };
		hstring m_customSessionPropertiesJson{ L"" };
    };
}