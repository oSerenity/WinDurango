#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerMemberInitialization.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerMemberInitialization.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool MultiplayerMemberInitialization::MemberInitializationSet()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberInitializationSet;
    }

    Windows::Foundation::TimeSpan MultiplayerMemberInitialization::JoinTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_joinTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerMemberInitialization::MeasurementTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_measurementTimeout;
    }

    Windows::Foundation::TimeSpan MultiplayerMemberInitialization::EvaluationTimeout()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_evaluationTimeout;
    }

    bool MultiplayerMemberInitialization::ExternalEvaluation()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_externalEvaluation;
    }

    uint32_t MultiplayerMemberInitialization::MembersNeededToStart()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_membersNeededToStart;
    }
}