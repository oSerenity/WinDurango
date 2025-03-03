#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerPeerToHostRequirements : MultiplayerPeerToHostRequirementsT<MultiplayerPeerToHostRequirements>
    {
        MultiplayerPeerToHostRequirements() = default;

        Windows::Foundation::TimeSpan LatencyMaximum();
        uint64_t BandwidthDownMinimumInKilobitsPerSecond();
        uint64_t BandwidthUpMinimumInKilobitsPerSecond();
        MultiplayMetrics HostSelectionMetric();

    private:
		Windows::Foundation::TimeSpan m_latencyMaximum{ 0 };
		uint64_t m_bandwidthDownMinimumInKilobitsPerSecond{ 0 };
		uint64_t m_bandwidthUpMinimumInKilobitsPerSecond{ 0 };
		MultiplayMetrics m_hostSelectionMetric{ MultiplayMetrics::BandwidthDown };
    };
}