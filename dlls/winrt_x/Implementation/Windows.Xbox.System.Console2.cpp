#include "pch.h"
#include "Windows.Xbox.System.Console2.h"
#include "Windows.Xbox.System.Console2.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring Console2::ApplicationSpecificDeviceId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_applicationSpecificDeviceId;
    }
}