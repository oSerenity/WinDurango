#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    hstring MatchMetadata::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_description;
    }

    Windows::Foundation::DateTime MatchMetadata::StartTIme()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_startTime;
    }

    bool MatchMetadata::IsBye()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isBye;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MatchMetadata::OpposingTeamIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_opposingTeamIds;
    }
}