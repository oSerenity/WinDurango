#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipStat.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchGameClipStat.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchGameClipStat::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    hstring ContextualSearchGameClipStat::Value()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_value;
    }

    hstring ContextualSearchGameClipStat::MinValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_minValue;
    }

    hstring ContextualSearchGameClipStat::MaxValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxValue;
    }

    hstring ContextualSearchGameClipStat::DeltaValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_deltaValue;
    }
}