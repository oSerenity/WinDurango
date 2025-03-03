#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerManagedInitialization.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerManagedInitialization.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool MultiplayerManagedInitialization::ManagedInitializationSet()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_managedInitializationSet;
    }

    Windows::Foundation::TimeSpan MultiplayerManagedInitialization::JoinTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joinTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerManagedInitialization::MeasurementTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_measurementTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerManagedInitialization::EvaluationTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_evaluationTimeout;
    }

    bool MultiplayerManagedInitialization::AutoEvaluate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_autoEvaluate;
    }

    uint32_t MultiplayerManagedInitialization::MembersNeededToStart()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_membersNeededToStart;
    }
}