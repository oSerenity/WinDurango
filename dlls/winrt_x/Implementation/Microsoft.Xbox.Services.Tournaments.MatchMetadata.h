#pragma once
#include "Microsoft.Xbox.Services.Tournaments.MatchMetadata.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct MatchMetadata : MatchMetadataT<MatchMetadata>
    {
        MatchMetadata() = default;

        hstring Description();
        Windows::Foundation::DateTime StartTIme();
        bool IsBye();
        Windows::Foundation::Collections::IVectorView<hstring> OpposingTeamIds();

    private:
        hstring m_description{ L"" };
		Windows::Foundation::DateTime m_startTime{ Windows::Foundation::DateTime::clock::now() };
		bool m_isBye{ false };
		Windows::Foundation::Collections::IVectorView<hstring> m_opposingTeamIds;
    };
}