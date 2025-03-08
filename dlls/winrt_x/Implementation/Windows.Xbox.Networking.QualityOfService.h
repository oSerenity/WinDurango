#pragma once
#include "Windows.Xbox.Networking.QualityOfService.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct QualityOfService
    {
        QualityOfService() = default;

        static Foundation::IAsyncOperation<MeasureQualityOfServiceResult> MeasureQualityOfServiceAsync(Foundation::Collections::IIterable<SecureDeviceAddress> addresses, Foundation::Collections::IIterable<QualityOfServiceMetric> metrics, uint32_t timeoutInMilliseconds, uint32_t numberOfProbes);
        static void PublishPrivatePayload(array_view<uint8_t const> payload);
        static void ClearPrivatePayload();
        static void ConfigureQualityOfService(uint32_t maxSimultaneousProbeConnections, bool constrainSystemBandwidthUp, bool constrainSystemBandwidthDown);

    private:
        static inline MeasureQualityOfServiceResult m_measureQualityOfServiceResult{ nullptr };

		static inline Foundation::Collections::IIterable<SecureDeviceAddress> m_address{ nullptr };
        static inline  Foundation::Collections::IIterable<QualityOfServiceMetric> m_metrics{ nullptr };

    	static inline uint32_t m_timeoutInMilliseconds{ 0 };
		static inline uint32_t m_numberOfProbes{ 0 };

		static inline array_view<uint8_t const> m_payload{ };

		static inline uint32_t m_maxSimultaneousProbeConnections{ 0 };
		static inline bool m_constrainSystemBandwidthUp{ false };
		static inline bool m_constrainSystemBandwidthDown{ false };
    };
}

namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct QualityOfService : QualityOfServiceT<QualityOfService, implementation::QualityOfService>
    {
    };
}