#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamInfo.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamInfo : TeamInfoT<TeamInfo>
    {
        TeamInfo() = default;

        hstring Id();
        hstring Name();
        Windows::Foundation::Collections::IVectorView<hstring> MemberXboxUserIds();
        Windows::Foundation::DateTime RegistrationDate();
        hstring Standing();
        TeamState TeamState();
        TeamCompletedReason CompletedReason();
        uint64_t Ranking();
        hstring ContinuationUri();
        CurrentMatchMetadata CurrentMatchMetadata();
        PreviousMatchMetadata PreviousMatchMetadata();

    private:
		hstring m_id{ L"TeamId" };
		hstring m_name{ L"TeamName" };
		Windows::Foundation::Collections::IVectorView<hstring> m_memberXboxUserIds{ single_threaded_vector<hstring>().GetView() };
		Windows::Foundation::DateTime m_registrationDate{ Windows::Foundation::DateTime::clock::now() };
		hstring m_standing{ L"Standing" };
		Tournaments::TeamState m_teamState{ TeamState::Playing };
		TeamCompletedReason m_completedReason{ TeamCompletedReason::Completed };
		uint64_t m_ranking{ 0 };
		hstring m_continuationUri{ L"ContinuationUri" };
		Tournaments::CurrentMatchMetadata m_currentMatchMetadata{ nullptr };
		Tournaments::PreviousMatchMetadata m_previousMatchMetadata{ nullptr };
    };
}