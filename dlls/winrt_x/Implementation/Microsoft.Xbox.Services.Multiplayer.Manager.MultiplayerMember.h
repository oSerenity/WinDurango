#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerMember.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct MultiplayerMember : MultiplayerMemberT<MultiplayerMember>
    {
        MultiplayerMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring DebugGamertag();
        bool IsLocal();
        bool IsInLobby();
        bool IsInGame();
        MultiplayerSessionMemberStatus Status();
        hstring ConnectionAddress();
        hstring Properties();
        bool IsMemberOnSameDevice(Manager::MultiplayerMember const& member);
        hstring _DeviceToken();

    private:
		uint32_t m_memberId{ 0 };
		hstring m_teamId{ L"" };
		hstring m_xboxUserId{ L"" };
		hstring m_debugGamertag{ L"" };
		bool m_isLocal{ false };
		bool m_isInLobby{ false };
		bool m_isInGame{ false };
		MultiplayerSessionMemberStatus m_status{ MultiplayerSessionMemberStatus::Active };
		hstring m_connectionAddress{ L"" };
        hstring m_properties{ L"" };
		bool m_isMemberOnSameDevice{ false };
        hstring m_deviceToken{ L"" };
    };
}