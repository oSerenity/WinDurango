#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubPresenceCounts.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubPresenceCounts : ClubPresenceCountsT<ClubPresenceCounts>
    {
        ClubPresenceCounts() = default;

        uint32_t TotalCount();
        uint32_t HereNow();
        uint32_t HereToday();
        uint32_t InGameNow();

    private:
		uint32_t m_totalCount{ 0 };
		uint32_t m_hereNow{ 0 };
		uint32_t m_hereToday{ 0 };
		uint32_t m_inGameNow{ 0 };
    };
}