#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerQualityOfServiceMeasurements : MultiplayerQualityOfServiceMeasurementsT<MultiplayerQualityOfServiceMeasurements>
    {
        MultiplayerQualityOfServiceMeasurements() = default;

        MultiplayerQualityOfServiceMeasurements(hstring const& memberDeviceToken, Windows::Foundation::TimeSpan const& latency, uint64_t bandwidthDownInKilobitsPerSecond, uint64_t bandwidthUpInKilobitsPerSecond, hstring const& customJson);
        hstring MemberDeviceToken();
        Windows::Foundation::TimeSpan Latency();
        uint64_t BandwidthDownInKilobitsPerSecond();
        uint64_t BandwidthUpInKilobitsPerSecond();
        hstring CustomJson();

    private:
        hstring m_memberDeviceToken{ L"" };
        Windows::Foundation::TimeSpan m_latency{ Windows::Foundation::TimeSpan::zero() };
		uint64_t m_bandwidthDownInKilobitsPerSecond{ 0 };
		uint64_t m_bandwidthUpInKilobitsPerSecond{ 0 };
		hstring m_customJson{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerQualityOfServiceMeasurements : MultiplayerQualityOfServiceMeasurementsT<MultiplayerQualityOfServiceMeasurements, implementation::MultiplayerQualityOfServiceMeasurements>
    {
    };
}