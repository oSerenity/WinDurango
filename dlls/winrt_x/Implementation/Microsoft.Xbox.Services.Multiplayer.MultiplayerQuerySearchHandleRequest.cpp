#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQuerySearchHandleRequest.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQuerySearchHandleRequest.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerQuerySearchHandleRequest::MultiplayerQuerySearchHandleRequest(hstring const& serviceConfigurationId, hstring const& sessionTemplateName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring MultiplayerQuerySearchHandleRequest::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_serviceConfigurationId;
    }

    hstring MultiplayerQuerySearchHandleRequest::SessionTemplateName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionTemplateName;
    }

    hstring MultiplayerQuerySearchHandleRequest::OrderBy()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_orderBy;
    }

    void MultiplayerQuerySearchHandleRequest::OrderBy(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_orderBy = value;
    }

    bool MultiplayerQuerySearchHandleRequest::OrderAscending()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_orderAscending;
    }

    void MultiplayerQuerySearchHandleRequest::OrderAscending(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_orderAscending = value;
    }

    hstring MultiplayerQuerySearchHandleRequest::SearchFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_searchFilter;
    }

    void MultiplayerQuerySearchHandleRequest::SearchFilter(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_searchFilter = value;
    }

    hstring MultiplayerQuerySearchHandleRequest::SocialGroup()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialGroup;
    }

    void MultiplayerQuerySearchHandleRequest::SocialGroup(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_searchFilter = value;
    }
}