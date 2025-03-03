#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardResult::DisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayName;
    }

    uint32_t LeaderboardResult::TotalRowCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_totalRowCount;
    }

    Windows::Foundation::Collections::IVectorView<LeaderboardColumn> LeaderboardResult::Columns()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_columns;
    }

    Windows::Foundation::Collections::IVectorView<LeaderboardRow> LeaderboardResult::Rows()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_rows;
    }

    bool LeaderboardResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }

    Windows::Foundation::IAsyncOperation<Leaderboard::LeaderboardResult> LeaderboardResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_nextResult;
    }

    LeaderboardQuery LeaderboardResult::GetNextQuery()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_nextQuery;
    }
}