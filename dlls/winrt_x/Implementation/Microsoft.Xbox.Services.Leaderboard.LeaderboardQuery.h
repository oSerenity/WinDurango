#pragma once
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardQuery.g.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    struct LeaderboardQuery : LeaderboardQueryT<LeaderboardQuery>
    {
        LeaderboardQuery() = default;

        bool SkipResultToMe();
        void SkipResultToMe(bool value);
        uint32_t SkipResultToRank();
        void SkipResultToRank(uint32_t value);
        uint32_t MaxItems();
        void MaxItems(uint32_t value);
        SortOrder Order();
        void Order(SortOrder const& value);
        uint64_t CallbackId();
        void CallbackId(uint64_t value);
        hstring StatName();
        hstring SocialGroup();
        bool HasNext();

    private:
		bool m_skipResultToMe{ false };
		uint32_t m_skipResultToRank{ 0 };
		uint32_t m_maxItems{ 0 };
		SortOrder m_order{ SortOrder::Ascending };
		uint64_t m_callbackId{ 0 };
        hstring m_statName{ L"" };
		hstring m_socialGroup{ L"" };
		bool m_hasNext{ false };
    };
}

namespace winrt::Microsoft::Xbox::Services::Leaderboard::factory_implementation
{
    struct LeaderboardQuery : LeaderboardQueryT<LeaderboardQuery, implementation::LeaderboardQuery>
    {
    };
}