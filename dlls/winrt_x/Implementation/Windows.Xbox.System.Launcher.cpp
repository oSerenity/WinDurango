#include "pch.h"
#include "Windows.Xbox.System.Launcher.h"
#include "Windows.Xbox.System.Launcher.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    Foundation::IAsyncOperation<bool> Launcher::NavigateBackAsync()
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }
}