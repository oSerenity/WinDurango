#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct ContentEnhancements : ContentEnhancementsT<ContentEnhancements>
    {
        ContentEnhancements() = default;

        uint64_t GetEnhancementSettings(uint32_t titleId);
        EnhancementFeatureState GetAutoHDREnabledGlobally();
        bool GetAutoHDRAllowedForGame(uint32_t titleId);
        bool GetAutoHDREnabledForGame(uint32_t titleId);
        void SetAutoHDREnabledForGame(uint32_t titleId, bool isFeatureEnabled);
        bool GetPerformanceModeAllowedForGame(uint32_t titleId);
        bool GetPerformanceModeEnabledForGame(uint32_t titleId);
        void SetPerformanceModeEnabledForGame(uint32_t titleId, bool isFeatureEnabled);
        bool GetPerformanceModeForGameRequires120Hz(uint32_t titleId);
        PerformanceModeDetails GetPerformanceModeDetailsForGame(uint32_t titleId);
        bool GetAutoHDRAllowedForGameFromManifest(hstring const& aumid);
        bool GetAutoHDREnabledForGameFromManifest(uint32_t titleId);
        bool IsGen9AwareGame(guid const& legacyProductId);

    private:
		uint64_t m_enhancementSettings{ 0 };
		EnhancementFeatureState m_autoHDREnabledGlobally{ EnhancementFeatureState::Disabled };
		bool m_autoHDRAllowedForGame{ false };
		bool m_autoHDREnabledForGame{ false };
		bool m_performanceModeAllowedForGame{ false };
		bool m_performanceModeEnabledForGame{ false };
		bool m_performanceModeForGameRequires120Hz{ false };
		PerformanceModeDetails m_performanceModeDetailsForGame;
		bool m_autoHDRAllowedForGameFromManifest{ false };
		bool m_autoHDREnabledForGameFromManifest{ false };
		bool m_isGen9AwareGame{ false };
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct ContentEnhancements : ContentEnhancementsT<ContentEnhancements, implementation::ContentEnhancements>
    {
    };
}