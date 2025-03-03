#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.g.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardRow : LeaderboardRowT<LeaderboardRow>
    {
        LeaderboardRow() = default;

        hstring Gamertag();
        hstring XboxUserId();
        double Percentile();
        uint32_t Rank();
        Windows::Foundation::Collections::IVectorView<hstring> Values();

    private:
        hstring m_gamertag{ L"The Durangler" };
		hstring m_xboxUserId{ L"12345678-1234-1234-1234-1234567890AB" };
		double m_percentile{ 0.5 };
		uint32_t m_rank{ 1 };
        Windows::Foundation::Collections::IVectorView<hstring> m_values = single_threaded_vector<hstring>().GetView();
    };
}