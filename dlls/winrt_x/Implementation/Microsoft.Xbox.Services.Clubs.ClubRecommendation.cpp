#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRecommendation.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Club ClubRecommendation::RecommendedClub()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_recommendedClub;
    }

    Windows::Foundation::Collections::IVectorView<hstring> ClubRecommendation::Reasons()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_reasons;
    }
}