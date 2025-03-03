#include "pch.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentRequestResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Tournaments::implementation
{
    Windows::Foundation::Collections::IVectorView<Tournament> TournamentRequestResult::Tournaments()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tournaments;
    }

    bool TournamentRequestResult::HasNext()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_hasNext;
    }

    Windows::Foundation::IAsyncOperation<Tournaments::TournamentRequestResult> TournamentRequestResult::GetNextAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_next;
    }
}