#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardResult : LeaderboardResultT<LeaderboardResult>
    {
        LeaderboardResult() = default;

        hstring DisplayName();
        uint32_t TotalRowCount();
        Windows::Foundation::Collections::IVectorView<LeaderboardColumn> Columns();
        Windows::Foundation::Collections::IVectorView<LeaderboardRow> Rows();
        bool HasNext();
        Windows::Foundation::IAsyncOperation<Leaderboard::LeaderboardResult> GetNextAsync(uint32_t maxItems);
        LeaderboardQuery GetNextQuery();

    private:
        hstring m_displayName{ L"" };
		uint32_t m_totalRowCount{ 0 };
        Windows::Foundation::Collections::IVectorView<LeaderboardColumn> m_columns = single_threaded_observable_vector<LeaderboardColumn>().GetView();
		Windows::Foundation::Collections::IVectorView<LeaderboardRow> m_rows = single_threaded_observable_vector<LeaderboardRow>().GetView();
		bool m_hasNext{ false };
		Leaderboard::LeaderboardResult m_nextResult{ nullptr };
		LeaderboardQuery m_nextQuery{ nullptr };
    };
}