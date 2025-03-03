#pragma once
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct TeamRequestResult : TeamRequestResultT<TeamRequestResult>
    {
        TeamRequestResult() = default;

        Windows::Foundation::Collections::IVectorView<TeamInfo> Teams();
        bool HasNext();
        Windows::Foundation::IAsyncOperation<Tournaments::TeamRequestResult> GetNextAsync();

    private:
		Windows::Foundation::Collections::IVectorView<TeamInfo> m_teams{ single_threaded_vector<TeamInfo>().GetView() };
		bool m_hasNext{ false };
		Tournaments::TeamRequestResult m_next{ nullptr };
    };
}