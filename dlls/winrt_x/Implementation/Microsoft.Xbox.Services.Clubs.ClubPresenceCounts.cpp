#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubPresenceCounts.h"
#include "Microsoft.Xbox.Services.Clubs.ClubPresenceCounts.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    uint32_t ClubPresenceCounts::TotalCount()
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return m_totalCount;
    }

    uint32_t ClubPresenceCounts::HereNow()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hereNow;
    }

    uint32_t ClubPresenceCounts::HereToday()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hereToday;
    }

    uint32_t ClubPresenceCounts::InGameNow()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_inGameNow;
    }
}
