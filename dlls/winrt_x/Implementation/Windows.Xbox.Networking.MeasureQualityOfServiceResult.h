#pragma once
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct MeasureQualityOfServiceResult : MeasureQualityOfServiceResultT<MeasureQualityOfServiceResult>
    {
        MeasureQualityOfServiceResult() = default;

        Foundation::Collections::IVectorView<QualityOfServiceMeasurement> Measurements();
        Foundation::Collections::IVectorView<QualityOfServiceMeasurement> GetMeasurementsForDevice(SecureDeviceAddress const& address);
        Foundation::Collections::IVectorView<QualityOfServiceMeasurement> GetMeasurementsForMetric(QualityOfServiceMetric const& metric);
        QualityOfServiceMeasurement GetMeasurement(SecureDeviceAddress const& address, QualityOfServiceMetric const& metric);

    private:
		SecureDeviceAddress m_address{ nullptr };
		QualityOfServiceMetric m_metric{ QualityOfServiceMetric::BandwidthDown };
    	Foundation::Collections::IVectorView<QualityOfServiceMeasurement> m_measurements{ nullptr };
    };
}