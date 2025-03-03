#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    MatchStatus FindMatchCompletedEventArgs::MatchStatus()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_matchStatus;
    }

    MultiplayerMeasurementFailure FindMatchCompletedEventArgs::InitializationFailureCause()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_initializationFailureCause;
    }
}