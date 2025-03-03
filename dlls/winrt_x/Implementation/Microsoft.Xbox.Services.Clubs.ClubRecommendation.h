#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRecommendation : ClubRecommendationT<ClubRecommendation>
    {
        ClubRecommendation() = default;

        Club RecommendedClub();
        Windows::Foundation::Collections::IVectorView<hstring> Reasons();

    private:
		Club m_recommendedClub{ nullptr };
		Windows::Foundation::Collections::IVectorView<hstring> m_reasons{ nullptr };
    };
}