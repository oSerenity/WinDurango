#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct FindMatchCompletedEventArgs : FindMatchCompletedEventArgsT<FindMatchCompletedEventArgs>
    {
        FindMatchCompletedEventArgs() = default;

        MatchStatus MatchStatus();
        MultiplayerMeasurementFailure InitializationFailureCause();

    private:
		Manager::MatchStatus m_matchStatus{ MatchStatus::None };
		MultiplayerMeasurementFailure m_initializationFailureCause{ MultiplayerMeasurementFailure::None };
    };
}