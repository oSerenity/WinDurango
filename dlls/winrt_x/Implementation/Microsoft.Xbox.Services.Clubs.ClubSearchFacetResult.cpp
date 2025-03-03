#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubSearchFacetResult.h"
#include "Microsoft.Xbox.Services.Clubs.ClubSearchFacetResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubSearchFacetResult::Value()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_value;
    }

    uint32_t ClubSearchFacetResult::Count()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_count;
    }
}