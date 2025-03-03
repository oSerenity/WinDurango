#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TeamRequestResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    Windows::Foundation::Collections::IVectorView<TeamInfo> TeamRequestResult::Teams()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_teams;
    }

    bool TeamRequestResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_hasNext;
    }

    Windows::Foundation::IAsyncOperation<Tournaments::TeamRequestResult> TeamRequestResult::GetNextAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_next;
    }
}