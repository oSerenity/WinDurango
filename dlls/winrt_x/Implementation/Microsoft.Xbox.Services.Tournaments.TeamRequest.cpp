#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequest.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    TeamRequest::TeamRequest(hstring const& organizerId, hstring const& tournamentId, bool filterResultsForUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_organizerId = organizerId;
		m_tournamentId = tournamentId;
		m_filterResultsForUser = filterResultsForUser;
    }

    uint32_t TeamRequest::MaxItems()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_maxItems;
    }

    void TeamRequest::MaxItems(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_maxItems = value;
    }

    Windows::Foundation::Collections::IVectorView<TeamState> TeamRequest::StateFilter()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_stateFilter;
    }

    void TeamRequest::StateFilter(Windows::Foundation::Collections::IVectorView<TeamState> const& states)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stateFilter = states;
    }

    TeamOrderBy TeamRequest::OrderBy()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_orderBy;
    }

    void TeamRequest::OrderBy(TeamOrderBy const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_orderBy = value;
    }
}