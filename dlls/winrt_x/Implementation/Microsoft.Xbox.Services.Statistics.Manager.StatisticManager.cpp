#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticManager.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    Manager::StatisticManager StatisticManager::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::AddLocalUser(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::RemoveLocalUser(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::RequestFlushToService(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::RequestFlushToService(Windows::Xbox::System::User const& user, bool isHighPriority)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<StatisticEvent> StatisticManager::DoWork()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticEvents;
    }

    void StatisticManager::SetStatisticNumberData(Windows::Xbox::System::User const& user, hstring const& name, double value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::SetStatisticIntegerData(Windows::Xbox::System::User const& user, hstring const& name, int64_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::SetStatisticStringData(Windows::Xbox::System::User const& user, hstring const& name, hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<hstring> StatisticManager::GetStatisticNames(Windows::Xbox::System::User const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statisticNames;
    }

    StatisticValue StatisticManager::GetStatistic(Windows::Xbox::System::User const& user, hstring const& name)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_statisticValue;
    }

    void StatisticManager::DeleteStatistic(Windows::Xbox::System::User const& user, hstring const& name)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::GetLeaderboard(Windows::Xbox::System::User const& user, hstring const& statName, Leaderboard::LeaderboardQuery const& query)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void StatisticManager::GetSocialLeaderboard(Windows::Xbox::System::User const& user, hstring const& statName, hstring const& socialGroup, Leaderboard::LeaderboardQuery const& query)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}