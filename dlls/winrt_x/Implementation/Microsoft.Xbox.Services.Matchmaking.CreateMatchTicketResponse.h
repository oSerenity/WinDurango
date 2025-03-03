#pragma once
#include "Microsoft.Xbox.Services.Matchmaking.CreateMatchTicketResponse.g.h"

namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    struct CreateMatchTicketResponse : CreateMatchTicketResponseT<CreateMatchTicketResponse>
    {
        CreateMatchTicketResponse() = default;

        hstring MatchTicketId();
        Windows::Foundation::TimeSpan EstimatedWaitTime();

    private:
        hstring m_matchTicketId{ L"" };
		Windows::Foundation::TimeSpan m_estimatedWaitTime{ 0 };
    };
}