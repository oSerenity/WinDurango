#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Windows::Foundation::Collections::IVectorView<hstring> ClubsOwnedResult::ClubIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_clubIds;
    }

    uint32_t ClubsOwnedResult::RemainingClubs()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_remainingClubs;
    }
}