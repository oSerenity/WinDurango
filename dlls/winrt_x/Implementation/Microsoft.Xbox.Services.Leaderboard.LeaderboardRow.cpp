#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardRow::Gamertag()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gamertag;
    }

    hstring LeaderboardRow::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    double LeaderboardRow::Percentile()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_percentile;
    }

    uint32_t LeaderboardRow::Rank()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_rank;
    }

    Windows::Foundation::Collections::IVectorView<hstring> LeaderboardRow::Values()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_values;
    }
}