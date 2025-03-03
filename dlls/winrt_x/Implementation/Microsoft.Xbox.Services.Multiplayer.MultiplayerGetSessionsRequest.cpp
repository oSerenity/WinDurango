#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerGetSessionsRequest.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerGetSessionsRequest.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerGetSessionsRequest::MultiplayerGetSessionsRequest(hstring const& serviceConfigurationId, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    hstring MultiplayerGetSessionsRequest::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_serviceConfigurationId;
    }

    uint32_t MultiplayerGetSessionsRequest::MaxItems()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxItems;
    }

    bool MultiplayerGetSessionsRequest::IncludePrivateSessions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_includePrivateSessions;
    }

    void MultiplayerGetSessionsRequest::IncludePrivateSessions(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_includePrivateSessions = value;
    }

    bool MultiplayerGetSessionsRequest::IncludeReservations()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_includeReservations;
    }

    void MultiplayerGetSessionsRequest::IncludeReservations(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_includeReservations = value;
    }

    bool MultiplayerGetSessionsRequest::IncludeInactiveSessions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_includeInactiveSessions;
    }

    void MultiplayerGetSessionsRequest::IncludeInactiveSessions(bool value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_includeInactiveSessions = value;
    }

    hstring MultiplayerGetSessionsRequest::XboxUserIdFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserIdFilter;
    }

    void MultiplayerGetSessionsRequest::XboxUserIdFilter(hstring const& value)
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerGetSessionsRequest::XboxUserIdsFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserIdsFilter;
    }

    void MultiplayerGetSessionsRequest::XboxUserIdsFilter(Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxUserIdsFilter = xboxUserIds;
    }

    hstring MultiplayerGetSessionsRequest::KeywordFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_keywordFilter;
    }

    void MultiplayerGetSessionsRequest::KeywordFilter(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_keywordFilter = value;
    }

    hstring MultiplayerGetSessionsRequest::SessionTemplateNameFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionTemplateNameFilter;
    }

    void MultiplayerGetSessionsRequest::SessionTemplateNameFilter(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sessionTemplateNameFilter = value;
    }

    MultiplayerSessionVisibility MultiplayerGetSessionsRequest::VisibilityFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_visibilityFilter;
    }

    void MultiplayerGetSessionsRequest::VisibilityFilter(MultiplayerSessionVisibility const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_visibilityFilter = value;
    }

    uint32_t MultiplayerGetSessionsRequest::ContractVersionFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_contractVersionFilter;
    }

    void MultiplayerGetSessionsRequest::ContractVersionFilter(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_contractVersionFilter = value;
    }
}