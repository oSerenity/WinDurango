// ReSharper disable CppClangTidyPerformanceUnnecessaryValueParam
// ReSharper disable CppPassValueParameterByConstReference
#pragma once
#include "Windows.Xbox.System.UserDisplayInfo.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct UserDisplayInfo : UserDisplayInfoT<UserDisplayInfo>
    {
        UserDisplayInfo() = default;
        UserDisplayInfo(hstring gamertag) : m_gamertag(gamertag) {}

        hstring Gamertag();
        uint32_t GamerScore();
        hstring ApplicationDisplayName();
        hstring GameDisplayName();
        int32_t Reputation();
        UserAgeGroup AgeGroup();
        Foundation::Collections::IVectorView<uint32_t> Privileges();

    private:
        hstring m_gamertag{ L"The Durangler" };
		uint32_t m_gamerScore{ 1337 };
		hstring m_applicationDisplayName{ L"WinDurango" };
		hstring m_gameDisplayName{ L"Durango" };
		int32_t m_reputation{ 100 };
		UserAgeGroup m_ageGroup{ UserAgeGroup::Adult };
		Foundation::Collections::IVectorView<uint32_t> m_privileges{ single_threaded_vector<uint32_t>({ 1 }).GetView() };
    };
}