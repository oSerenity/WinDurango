#pragma once
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchConfiguredStat.g.h"

namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    struct ContextualSearchConfiguredStat : ContextualSearchConfiguredStatT<ContextualSearchConfiguredStat>
    {
        ContextualSearchConfiguredStat() = default;

        hstring Name();
        hstring DataType();
        ContextualSearchStatVisibility Visibility();
        hstring DisplayName();
        bool CanBeFiltered();
        bool CanBeSorted();
        ContextualSearchStatVisibility DisplayType();
        Windows::Foundation::Collections::IMapView<hstring, hstring> ValueToDisplayName();
        uint64_t RangeMin();
        uint64_t RangeMax();

    private:
		hstring m_name{ L"Name" };
		hstring m_dataType{ L"DataType" };
		ContextualSearchStatVisibility m_visibility{ ContextualSearchStatVisibility::PrivateVisibility };
		hstring m_displayName{ L"DisplayName" };
		bool m_canBeFiltered{ false };
		bool m_canBeSorted{ false };
		ContextualSearchStatVisibility m_displayType{ ContextualSearchStatVisibility::PrivateVisibility };
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_valueToDisplayName{ nullptr };
		uint64_t m_rangeMin{ 0 };
		uint64_t m_rangeMax{ 0 };
    };
}