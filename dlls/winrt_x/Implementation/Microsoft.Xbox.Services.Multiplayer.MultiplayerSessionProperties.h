#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionProperties : MultiplayerSessionPropertiesT<MultiplayerSessionProperties>
    {
        MultiplayerSessionProperties() = default;

        Windows::Foundation::Collections::IVectorView<hstring> Keywords();
        void Keywords(Windows::Foundation::Collections::IVectorView<hstring> const& value);
        MultiplayerSessionRestriction JoinRestriction();
        void JoinRestriction(MultiplayerSessionRestriction const& value);
        MultiplayerSessionRestriction ReadRestriction();
        void ReadRestriction(MultiplayerSessionRestriction const& value);
        Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> TurnCollection();
        void TurnCollection(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& value);
        hstring MatchmakingTargetSessionConstantsJson();
        hstring SessionCustomPropertiesJson();
        hstring MatchmakingServerConnectionString();
        Windows::Foundation::Collections::IVectorView<hstring> ServerConnectionStringCandidates();
        Windows::Foundation::Collections::IVectorView<uint32_t> SessionOwnerIndices();
        hstring HostDeviceToken();
        bool Closed();
        bool Locked();
        bool AllocateCloudCompute();

    private:
        Windows::Foundation::Collections::IVectorView<hstring> m_keywords{ single_threaded_vector<hstring>().GetView() };
		MultiplayerSessionRestriction m_joinRestriction{ MultiplayerSessionRestriction::None };
		MultiplayerSessionRestriction m_readRestriction{ MultiplayerSessionRestriction::None };
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_turnCollection{ nullptr };
		hstring m_matchmakingTargetSessionConstantsJson{ L"" };
		hstring m_sessionCustomPropertiesJson{ L"" };
		hstring m_matchmakingServerConnectionString{ L"" };
		Windows::Foundation::Collections::IVectorView<hstring> m_serverConnectionStringCandidates{ nullptr };
		Windows::Foundation::Collections::IVectorView<uint32_t> m_sessionOwnerIndices{ nullptr };
		hstring m_hostDeviceToken{ L"" };
		bool m_closed{ false };
		bool m_locked{ false };
		bool m_allocateCloudCompute{ false };
    };
}