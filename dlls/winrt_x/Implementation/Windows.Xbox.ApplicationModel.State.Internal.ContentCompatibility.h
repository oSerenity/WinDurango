#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct ContentCompatibility : ContentCompatibilityT<ContentCompatibility>
    {
        ContentCompatibility() = default;

        hresult IsContentCompatible(guid const& contentId);
        hresult IsContentCompatible(hstring const& productId);
        uint64_t GetQuickResumeFlags(uint32_t titleId);
        bool IsQuickResumeAllowedForEra(uint32_t titleId);
        bool IsQuickResumeBlockedForGameCore(uint32_t titleId);
        hresult IsXbox360ContentCompatible(guid const& legacyProductId);
        hstring GetXbox360StoreIdFromContentId(guid const& contentId);
        bool IsQuickResumeBlockedForServer(uint32_t titleId);
        uint32_t GetMacIdBehaviorForTitleOnServer(uint32_t titleId);

    private:
        hresult m_isContentCompatible{};
		uint64_t m_quickResumeFlags{ 0 };
        bool m_isQuickResumeAllowedForEra{ true };
		bool m_isQuickResumeBlockedForGameCore{ false };
		hresult m_isXbox360ContentCompatible{};
		hstring m_getXbox360StoreIdFromContentId{};
		bool m_isQuickResumeBlockedForServer{ false };
		uint32_t m_getMacIdBehaviorForTitleOnServer{ 0 };
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct ContentCompatibility : ContentCompatibilityT<ContentCompatibility, implementation::ContentCompatibility>
    {
    };
}