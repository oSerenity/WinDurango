#pragma once
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListService.g.h"

namespace winrt::Microsoft::Xbox::Services::EntertainmentProfile::implementation
{
    struct EntertainmentProfileListService : EntertainmentProfileListServiceT<EntertainmentProfileListService>
    {
        EntertainmentProfileListService() = default;

        EntertainmentProfileListXboxOnePins XboxOnePins();

    private:
		EntertainmentProfileListXboxOnePins m_xboxOnePins{ nullptr };
    };
}