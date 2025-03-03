#include "pch.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListContainsItemResult.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListContainsItemResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    bool EntertainmentProfileListContainsItemResult::IsContained()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isContained;
    }

    hstring EntertainmentProfileListContainsItemResult::ProviderId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_providerId;
    }

    hstring EntertainmentProfileListContainsItemResult::Provider()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_provider;
    }
}