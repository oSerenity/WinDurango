#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring XboxLiveWnsEventArgs::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_xboxUserId;
    }

    hstring XboxLiveWnsEventArgs::NotificationType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_notificationType;
    }
}
