#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_serviceConfigurationId = serviceConfigurationId;
		m_sessionTemplateName = sessionTemplateName;
		m_sessionName = sessionName;
    }

    Multiplayer::MultiplayerSessionReference MultiplayerSessionReference::ParseFromUriPath(hstring const& uriPath)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionTemplateName;
    }

    hstring MultiplayerSessionReference::SessionName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionName;
    }

    hstring MultiplayerSessionReference::ToUriPath()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_uriPath;
    }
}