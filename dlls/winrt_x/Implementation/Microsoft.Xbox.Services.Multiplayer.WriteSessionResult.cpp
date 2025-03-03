#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool WriteSessionResult::Succeeded()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_succeeded;
    }

    MultiplayerSession WriteSessionResult::Session()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_session;
    }

    WriteSessionStatus WriteSessionResult::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_status;
    }
}