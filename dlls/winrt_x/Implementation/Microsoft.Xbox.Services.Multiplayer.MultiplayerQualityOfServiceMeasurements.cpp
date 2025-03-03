#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQualityOfServiceMeasurements.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerQualityOfServiceMeasurements::MultiplayerQualityOfServiceMeasurements(hstring const& memberDeviceToken, Windows::Foundation::TimeSpan const& latency, uint64_t bandwidthDownInKilobitsPerSecond, uint64_t bandwidthUpInKilobitsPerSecond, hstring const& customJson)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_memberDeviceToken = memberDeviceToken;
		m_latency = latency;
		m_bandwidthDownInKilobitsPerSecond = bandwidthDownInKilobitsPerSecond;
		m_bandwidthUpInKilobitsPerSecond = bandwidthUpInKilobitsPerSecond;
		m_customJson = customJson;
    }

    hstring MultiplayerQualityOfServiceMeasurements::MemberDeviceToken()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_memberDeviceToken;
    }

    Windows::Foundation::TimeSpan MultiplayerQualityOfServiceMeasurements::Latency()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_latency;
    }

    uint64_t MultiplayerQualityOfServiceMeasurements::BandwidthDownInKilobitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bandwidthDownInKilobitsPerSecond;
    }

    uint64_t MultiplayerQualityOfServiceMeasurements::BandwidthUpInKilobitsPerSecond()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bandwidthUpInKilobitsPerSecond;
    }

    hstring MultiplayerQualityOfServiceMeasurements::CustomJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_customJson;
    }
}