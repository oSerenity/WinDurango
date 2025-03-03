#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionStates : MultiplayerSessionStatesT<MultiplayerSessionStates>
    {
        MultiplayerSessionStates() = default;

        Windows::Foundation::DateTime StartTime();
        MultiplayerSessionReference SessionReference();
        MultiplayerSessionStatus Status();
        MultiplayerSessionVisibility Visibility();
        bool IsMyTurn();
        hstring XboxUserId();
        uint32_t AcceptedMemberCount();
        MultiplayerSessionRestriction JoinRestriction();
        Windows::Foundation::Collections::IVectorView<hstring> Keywords();

    private:
		Windows::Foundation::DateTime m_startTime{ Windows::Foundation::DateTime::clock::now() };
		MultiplayerSessionReference m_sessionReference{ nullptr };
		MultiplayerSessionStatus m_status{ MultiplayerSessionStatus::Active };
		MultiplayerSessionVisibility m_visibility{ MultiplayerSessionVisibility::Open };
		bool m_isMyTurn{ false };
		hstring m_xboxUserId{ L"" };
		uint32_t m_acceptedMemberCount{ 0 };
		MultiplayerSessionRestriction m_joinRestriction{ MultiplayerSessionRestriction::None };
		Windows::Foundation::Collections::IVectorView<hstring> m_keywords{ single_threaded_vector<hstring>().GetView() };
    };
}