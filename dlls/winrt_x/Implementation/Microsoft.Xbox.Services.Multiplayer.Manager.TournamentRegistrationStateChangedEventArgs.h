#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.TournamentRegistrationStateChangedEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct TournamentRegistrationStateChangedEventArgs : TournamentRegistrationStateChangedEventArgsT<TournamentRegistrationStateChangedEventArgs>
    {
        TournamentRegistrationStateChangedEventArgs() = default;

        Tournaments::TournamentRegistrationState RegistrationState();
        Tournaments::TournamentRegistrationReason RegistrationReason();

    private:
		Tournaments::TournamentRegistrationState m_registrationState{ Tournaments::TournamentRegistrationState::Unknown };
		Tournaments::TournamentRegistrationReason m_registrationReason{ Tournaments::TournamentRegistrationReason::Unknown };
    };
}
