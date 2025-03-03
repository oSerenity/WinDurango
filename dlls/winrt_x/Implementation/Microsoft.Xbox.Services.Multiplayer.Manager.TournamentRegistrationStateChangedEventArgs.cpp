#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Tournaments::TournamentRegistrationState TournamentRegistrationStateChangedEventArgs::RegistrationState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_registrationState;
    }

    Tournaments::TournamentRegistrationReason TournamentRegistrationStateChangedEventArgs::RegistrationReason()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_registrationReason;
    }
}