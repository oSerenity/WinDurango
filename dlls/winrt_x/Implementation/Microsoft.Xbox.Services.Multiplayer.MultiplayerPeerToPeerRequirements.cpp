#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToPeerRequirements.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::TimeSpan MultiplayerPeerToPeerRequirements::LatencyMaximum()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_latencyMaximum;
    }

    uint64_t MultiplayerPeerToPeerRequirements::BandwidthMinimumInKilobitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bandwidthMinimumInKilobitsPerSecond;
    }
}
