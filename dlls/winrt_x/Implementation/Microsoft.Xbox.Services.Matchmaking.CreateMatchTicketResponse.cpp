#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    hstring CreateMatchTicketResponse::MatchTicketId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_matchTicketId;
    }

    Windows::Foundation::TimeSpan CreateMatchTicketResponse::EstimatedWaitTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_estimatedWaitTime;
    }
}