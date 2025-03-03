#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchConfiguredStat.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchConfiguredStat.g.cpp"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchConfiguredStat::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    hstring ContextualSearchConfiguredStat::DataType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_dataType;
    }

    ContextualSearchStatVisibility ContextualSearchConfiguredStat::Visibility()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_visibility;
    }

    hstring ContextualSearchConfiguredStat::DisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayName;
    }

    bool ContextualSearchConfiguredStat::CanBeFiltered()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canBeFiltered;
    }

    bool ContextualSearchConfiguredStat::CanBeSorted()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_canBeSorted;
    }

    ContextualSearchStatVisibility ContextualSearchConfiguredStat::DisplayType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_displayType;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> ContextualSearchConfiguredStat::ValueToDisplayName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_valueToDisplayName;
    }

    uint64_t ContextualSearchConfiguredStat::RangeMin()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rangeMin;
    }

    uint64_t ContextualSearchConfiguredStat::RangeMax()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_rangeMax;
    }
}