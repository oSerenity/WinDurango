#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.g.cpp"

namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    RequestedStatistics::RequestedStatistics(hstring const& serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> const& statistics)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_statistics = statistics;
    }

    hstring RequestedStatistics::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    Windows::Foundation::Collections::IVectorView<hstring> RequestedStatistics::Statistics()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_statistics;
    }
}