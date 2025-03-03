#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubsOwnedResult.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubsOwnedResult : ClubsOwnedResultT<ClubsOwnedResult>
    {
        ClubsOwnedResult() = default;

        Windows::Foundation::Collections::IVectorView<hstring> ClubIds();
        uint32_t RemainingClubs();

    private:
        Windows::Foundation::Collections::IVectorView<hstring> m_clubIds = single_threaded_vector<hstring>().GetView();
		uint32_t m_remainingClubs{ 0 };
    };
}