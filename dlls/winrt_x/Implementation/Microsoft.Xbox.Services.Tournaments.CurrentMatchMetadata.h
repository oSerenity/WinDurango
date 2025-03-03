#pragma once
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.g.h"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    struct CurrentMatchMetadata : CurrentMatchMetadataT<CurrentMatchMetadata>
    {
        CurrentMatchMetadata() = default;

        Multiplayer::MultiplayerSessionReference GameSessionReference();
        MatchMetadata MatchDetails();

    private:
		Multiplayer::MultiplayerSessionReference m_gameSessionReference{ nullptr };
		MatchMetadata m_matchDetails{ nullptr };
    };
}