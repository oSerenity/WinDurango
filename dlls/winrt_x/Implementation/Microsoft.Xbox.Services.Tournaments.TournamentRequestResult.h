#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TournamentRequestResult : TournamentRequestResultT<TournamentRequestResult>
    {
        TournamentRequestResult() = default;

        Windows::Foundation::Collections::IVectorView<Tournament> Tournaments();
        bool HasNext();
        Windows::Foundation::IAsyncOperation<Tournaments::TournamentRequestResult> GetNextAsync();

    private:
        Windows::Foundation::Collections::IVectorView<Tournament> m_tournaments{ single_threaded_vector<Tournament>().GetView() };
		bool m_hasNext{ false };
		Tournaments::TournamentRequestResult m_next{ nullptr };
    };
}