#include "pch.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.h"
#include "Windows.Xbox.Networking.QualityOfServiceMeasurement.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    QualityOfServiceMeasurementStatus QualityOfServiceMeasurement::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_status;
    }

    QualityOfServiceMetric QualityOfServiceMeasurement::Metric()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_metric;
    }

    Foundation::IPropertyValue QualityOfServiceMeasurement::MetricValue()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_metricValue;
    }

    SecureDeviceAddress QualityOfServiceMeasurement::SecureDeviceAddress()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_secureDeviceAddress;
    }
}