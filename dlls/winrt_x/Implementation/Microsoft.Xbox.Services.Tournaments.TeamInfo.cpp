#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring TeamInfo::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    hstring TeamInfo::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    Windows::Foundation::Collections::IVectorView<hstring> TeamInfo::MemberXboxUserIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_memberXboxUserIds;
    }

    Windows::Foundation::DateTime TeamInfo::RegistrationDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_registrationDate;
    }

    hstring TeamInfo::Standing()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_standing;
    }

    TeamState TeamInfo::TeamState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_teamState;
    }

    TeamCompletedReason TeamInfo::CompletedReason()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_completedReason;
    }

    uint64_t TeamInfo::Ranking()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_ranking;
    }

    hstring TeamInfo::ContinuationUri()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_continuationUri;
    }

    CurrentMatchMetadata TeamInfo::CurrentMatchMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_currentMatchMetadata;
    }

    PreviousMatchMetadata TeamInfo::PreviousMatchMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_previousMatchMetadata;
    }
}