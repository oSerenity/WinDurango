#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerPeerToPeerRequirements : MultiplayerPeerToPeerRequirementsT<MultiplayerPeerToPeerRequirements>
    {
        MultiplayerPeerToPeerRequirements() = default;

        Windows::Foundation::TimeSpan LatencyMaximum();
        uint64_t BandwidthMinimumInKilobitsPerSecond();

    private:
		Windows::Foundation::TimeSpan m_latencyMaximum{ 0 };
		uint64_t m_bandwidthMinimumInKilobitsPerSecond{ 0 };
    };
}