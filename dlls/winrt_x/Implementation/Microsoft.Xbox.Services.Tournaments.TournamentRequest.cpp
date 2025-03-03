#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequest.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TournamentRequest::TournamentRequest(bool filterResultsForUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_filterResultsForUser = filterResultsForUser;
    }

    uint32_t TournamentRequest::MaxItems()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxItems;
    }

    void TournamentRequest::MaxItems(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxItems = value;
    }

    Windows::Foundation::Collections::IVectorView<TournamentState> TournamentRequest::StateFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_stateFilter;
    }

    void TournamentRequest::StateFilter(Windows::Foundation::Collections::IVectorView<TournamentState> const& states)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stateFilter = states;
    }

    TournamentOrderBy TournamentRequest::OrderBy()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_orderBy;
    }

    void TournamentRequest::OrderBy(TournamentOrderBy const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_orderBy = value;
    }

    TournamentSortOrder TournamentRequest::SortOrder()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sortOrder;
    }

    void TournamentRequest::SortOrder(TournamentSortOrder const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sortOrder = value;
    }

    hstring TournamentRequest::OrganizerId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_organizerId;
    }

    void TournamentRequest::OrganizerId(hstring const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_organizerId = value;
    }
}