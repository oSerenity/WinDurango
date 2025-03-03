#include "pch.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListService.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    EntertainmentProfileListXboxOnePins EntertainmentProfileListService::XboxOnePins()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxOnePins;
    }
}