#include "pch.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.h"
#include "Windows.Xbox.Networking.MeasureQualityOfServiceResult.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    Foundation::Collections::IVectorView<QualityOfServiceMeasurement> MeasureQualityOfServiceResult::Measurements()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_measurements;
    }

    Foundation::Collections::IVectorView<QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForDevice(SecureDeviceAddress const& address)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_address = address;

		return m_measurements;
    }

    Foundation::Collections::IVectorView<QualityOfServiceMeasurement> MeasureQualityOfServiceResult::GetMeasurementsForMetric(QualityOfServiceMetric const& metric)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_metric = metric;

		return m_measurements;
    }

    QualityOfServiceMeasurement MeasureQualityOfServiceResult::GetMeasurement(SecureDeviceAddress const& address, QualityOfServiceMetric const& metric)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_address = address;
		m_metric = metric;

        return QualityOfServiceMeasurement{ nullptr };
    }
}