#include "pch.h"
#include "Microsoft.Xbox.Services.ServiceCallLoggingConfig.h"
#include "Microsoft.Xbox.Services.ServiceCallLoggingConfig.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
	// TODO: Replace nullptr with actual singleton instance.
    Services::ServiceCallLoggingConfig ServiceCallLoggingConfig::SingletonInstance()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return nullptr;
    }

    void ServiceCallLoggingConfig::Enable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void ServiceCallLoggingConfig::Disable()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void ServiceCallLoggingConfig::RegisterForProtocolActivation()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }
}