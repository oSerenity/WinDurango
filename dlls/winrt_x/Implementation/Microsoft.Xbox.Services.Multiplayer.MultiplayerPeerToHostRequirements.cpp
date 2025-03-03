#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::TimeSpan MultiplayerPeerToHostRequirements::LatencyMaximum()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_latencyMaximum;
    }

    uint64_t MultiplayerPeerToHostRequirements::BandwidthDownMinimumInKilobitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bandwidthDownMinimumInKilobitsPerSecond;
    }

    uint64_t MultiplayerPeerToHostRequirements::BandwidthUpMinimumInKilobitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bandwidthUpMinimumInKilobitsPerSecond;
    }

    MultiplayMetrics MultiplayerPeerToHostRequirements::HostSelectionMetric()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hostSelectionMetric;
    }
}