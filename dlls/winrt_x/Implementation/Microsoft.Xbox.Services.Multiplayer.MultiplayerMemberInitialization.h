#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerMemberInitialization.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerMemberInitialization : MultiplayerMemberInitializationT<MultiplayerMemberInitialization>
    {
        MultiplayerMemberInitialization() = default;

        bool MemberInitializationSet();
        Windows::Foundation::TimeSpan JoinTimeout();
        Windows::Foundation::TimeSpan MeasurementTimeout();
        Windows::Foundation::TimeSpan EvaluationTimeout();
        bool ExternalEvaluation();
        uint32_t MembersNeededToStart();

    private:
		bool m_memberInitializationSet{ false };
		Windows::Foundation::TimeSpan m_joinTimeout{ 0 };
		Windows::Foundation::TimeSpan m_measurementTimeout{ 0 };
		Windows::Foundation::TimeSpan m_evaluationTimeout{ 0 };
		bool m_externalEvaluation{ false };
		uint32_t m_membersNeededToStart{ 0 };
    };
}