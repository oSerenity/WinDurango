#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.h"
#include "Microsoft.Xbox.Services.Tournaments.CurrentMatchMetadata.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    Multiplayer::MultiplayerSessionReference CurrentMatchMetadata::GameSessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_gameSessionReference;
    }

    MatchMetadata CurrentMatchMetadata::MatchDetails()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_matchDetails;
    }
}