#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardQuery.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardQuery.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    bool LeaderboardQuery::SkipResultToMe()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_skipResultToMe;
    }

    void LeaderboardQuery::SkipResultToMe(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_skipResultToMe = value;
    }

    uint32_t LeaderboardQuery::SkipResultToRank()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_skipResultToRank;
    }

    void LeaderboardQuery::SkipResultToRank(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_skipResultToRank = value;
    }

    uint32_t LeaderboardQuery::MaxItems()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_maxItems;
    }

    void LeaderboardQuery::MaxItems(uint32_t value)
    {
		m_maxItems = value;
    }

    SortOrder LeaderboardQuery::Order()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_order;
    }

    void LeaderboardQuery::Order(SortOrder const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_order = value;
    }

    uint64_t LeaderboardQuery::CallbackId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_callbackId;
    }

    void LeaderboardQuery::CallbackId(uint64_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_callbackId = value;
    }

    hstring LeaderboardQuery::StatName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statName;
    }

    hstring LeaderboardQuery::SocialGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialGroup;
    }

    bool LeaderboardQuery::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }
}