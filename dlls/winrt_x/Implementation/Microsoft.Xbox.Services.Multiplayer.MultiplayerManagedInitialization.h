#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerManagedInitialization.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerManagedInitialization : MultiplayerManagedInitializationT<MultiplayerManagedInitialization>
    {
        MultiplayerManagedInitialization() = default;

        bool ManagedInitializationSet();
        Windows::Foundation::TimeSpan JoinTimeout();
        Windows::Foundation::TimeSpan MeasurementTimeout();
        Windows::Foundation::TimeSpan EvaluationTimeout();
        bool AutoEvaluate();
        uint32_t MembersNeededToStart();

    private:
		bool m_managedInitializationSet{ false };
		Windows::Foundation::TimeSpan m_joinTimeout{ 0 };
		Windows::Foundation::TimeSpan m_measurementTimeout{ 0 };
		Windows::Foundation::TimeSpan m_evaluationTimeout{ 0 };
		bool m_autoEvaluate{ false };
		uint32_t m_membersNeededToStart{ 0 };
    };
}