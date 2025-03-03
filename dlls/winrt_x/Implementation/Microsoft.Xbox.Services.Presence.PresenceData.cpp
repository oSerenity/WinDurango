#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_presenceId = presenceId;
    }

    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId, Windows::Foundation::Collections::IVectorView<hstring> const& presenceTokenIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_presenceId = presenceId;
		m_presenceTokenIds = presenceTokenIds;
    }

    hstring PresenceData::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_serviceConfigurationId;
    }

    hstring PresenceData::PresenceId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceId;
    }

    Windows::Foundation::Collections::IVectorView<hstring> PresenceData::PresenceTokenIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceTokenIds;
    }
}