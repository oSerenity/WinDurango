#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentEnhancements.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    uint64_t ContentEnhancements::GetEnhancementSettings(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_enhancementSettings;
    }

    EnhancementFeatureState ContentEnhancements::GetAutoHDREnabledGlobally()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_autoHDREnabledGlobally;
    }

    bool ContentEnhancements::GetAutoHDRAllowedForGame(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_autoHDRAllowedForGame;
    }

    bool ContentEnhancements::GetAutoHDREnabledForGame(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_autoHDRAllowedForGame;
    }

    void ContentEnhancements::SetAutoHDREnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_autoHDRAllowedForGame = isFeatureEnabled;
    }

    bool ContentEnhancements::GetPerformanceModeAllowedForGame(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_performanceModeAllowedForGame;
    }

    bool ContentEnhancements::GetPerformanceModeEnabledForGame(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_performanceModeEnabledForGame;
    }

    void ContentEnhancements::SetPerformanceModeEnabledForGame(uint32_t titleId, bool isFeatureEnabled)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_performanceModeEnabledForGame = isFeatureEnabled;
    }

    bool ContentEnhancements::GetPerformanceModeForGameRequires120Hz(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_performanceModeForGameRequires120Hz;
    }

    PerformanceModeDetails ContentEnhancements::GetPerformanceModeDetailsForGame(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_performanceModeDetailsForGame;
    }

    bool ContentEnhancements::GetAutoHDRAllowedForGameFromManifest(hstring const& aumid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_autoHDRAllowedForGameFromManifest;
    }

    bool ContentEnhancements::GetAutoHDREnabledForGameFromManifest(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_autoHDREnabledForGameFromManifest;
    }

    bool ContentEnhancements::IsGen9AwareGame(guid const& legacyProductId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isGen9AwareGame;
    }
}