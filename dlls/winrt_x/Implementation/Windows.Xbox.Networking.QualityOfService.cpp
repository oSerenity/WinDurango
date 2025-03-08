#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfService.h"
#include "Windows.Xbox.Networking.QualityOfService.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    Foundation::IAsyncOperation<MeasureQualityOfServiceResult> QualityOfService::MeasureQualityOfServiceAsync(Foundation::Collections::IIterable<SecureDeviceAddress> addresses, Foundation::Collections::IIterable<QualityOfServiceMetric> metrics, uint32_t timeoutInMilliseconds, uint32_t numberOfProbes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_address = addresses;
		m_metrics = metrics;
		m_timeoutInMilliseconds = timeoutInMilliseconds;
		m_numberOfProbes = numberOfProbes;

        co_return m_measureQualityOfServiceResult;
    }

    void QualityOfService::PublishPrivatePayload(array_view<uint8_t const> payload)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_payload = payload;
    }

    void QualityOfService::ClearPrivatePayload()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_payload = {};
    }

    void QualityOfService::ConfigureQualityOfService(uint32_t maxSimultaneousProbeConnections, bool constrainSystemBandwidthUp, bool constrainSystemBandwidthDown)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxSimultaneousProbeConnections = maxSimultaneousProbeConnections;
		m_constrainSystemBandwidthUp = constrainSystemBandwidthUp;
		m_constrainSystemBandwidthDown = constrainSystemBandwidthDown;
    }
}