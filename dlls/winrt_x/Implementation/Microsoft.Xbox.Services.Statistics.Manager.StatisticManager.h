#pragma once
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.g.h"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager>
    {
        StatisticManager() = default;

        static Manager::StatisticManager SingletonInstance();
        void AddLocalUser(Windows::Xbox::System::User const& user);
        void RemoveLocalUser(Windows::Xbox::System::User const& user);
        void RequestFlushToService(Windows::Xbox::System::User const& user);
        void RequestFlushToService(Windows::Xbox::System::User const& user, bool isHighPriority);
        Windows::Foundation::Collections::IVectorView<StatisticEvent> DoWork();
        void SetStatisticNumberData(Windows::Xbox::System::User const& user, hstring const& name, double value);
        void SetStatisticIntegerData(Windows::Xbox::System::User const& user, hstring const& name, int64_t value);
        void SetStatisticStringData(Windows::Xbox::System::User const& user, hstring const& name, hstring const& value);
        Windows::Foundation::Collections::IVectorView<hstring> GetStatisticNames(Windows::Xbox::System::User const& user);
        StatisticValue GetStatistic(Windows::Xbox::System::User const& user, hstring const& name);
        void DeleteStatistic(Windows::Xbox::System::User const& user, hstring const& name);
        void GetLeaderboard(Windows::Xbox::System::User const& user, hstring const& statName, Leaderboard::LeaderboardQuery const& query);
        void GetSocialLeaderboard(Windows::Xbox::System::User const& user, hstring const& statName, hstring const& socialGroup, Leaderboard::LeaderboardQuery const& query);

    private:
		Windows::Foundation::Collections::IVectorView<StatisticEvent> m_statisticEvents{ single_threaded_vector<StatisticEvent>().GetView() };
		Windows::Foundation::Collections::IVectorView<hstring> m_statisticNames{ single_threaded_vector<hstring>().GetView() };
		StatisticValue m_statisticValue{ nullptr };
    };
}

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::factory_implementation
{
    struct StatisticManager : StatisticManagerT<StatisticManager, implementation::StatisticManager>
    {

    };
}