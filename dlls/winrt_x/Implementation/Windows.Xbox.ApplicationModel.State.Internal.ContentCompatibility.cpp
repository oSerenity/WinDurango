#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ContentCompatibility.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    hresult ContentCompatibility::IsContentCompatible(guid const& contentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isContentCompatible;
    }

    hresult ContentCompatibility::IsContentCompatible(hstring const& productId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isContentCompatible;
    }

    uint64_t ContentCompatibility::GetQuickResumeFlags(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_quickResumeFlags;
    }

    bool ContentCompatibility::IsQuickResumeAllowedForEra(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isQuickResumeAllowedForEra;
    }

    bool ContentCompatibility::IsQuickResumeBlockedForGameCore(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isQuickResumeBlockedForGameCore;
    }

    hresult ContentCompatibility::IsXbox360ContentCompatible(guid const& legacyProductId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isXbox360ContentCompatible;
    }

    hstring ContentCompatibility::GetXbox360StoreIdFromContentId(guid const& contentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_getXbox360StoreIdFromContentId;
    }

    bool ContentCompatibility::IsQuickResumeBlockedForServer(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isQuickResumeBlockedForServer;
    }

    uint32_t ContentCompatibility::GetMacIdBehaviorForTitleOnServer(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_getMacIdBehaviorForTitleOnServer;
    }
}