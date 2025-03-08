#pragma once
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct QualityOfServiceMeasurement : QualityOfServiceMeasurementT<QualityOfServiceMeasurement>
    {
        QualityOfServiceMeasurement() = default;

        QualityOfServiceMeasurementStatus Status();
        QualityOfServiceMetric Metric();
        Foundation::IPropertyValue MetricValue();
        SecureDeviceAddress SecureDeviceAddress();

    private:
		QualityOfServiceMeasurementStatus m_status{};
		QualityOfServiceMetric m_metric{};
		Foundation::IPropertyValue m_metricValue{};
		Networking::SecureDeviceAddress m_secureDeviceAddress{ nullptr };
    };
}