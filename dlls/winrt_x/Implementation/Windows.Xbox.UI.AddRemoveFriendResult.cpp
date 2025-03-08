#include "pch.h"
#include "Windows.Xbox.UI.AddRemoveFriendResult.h"
#include "Windows.Xbox.UI.AddRemoveFriendResult.g.cpp"

namespace winrt::Windows::Xbox::UI::implementation
{
    AddRemoveFriendResultStatus AddRemoveFriendResult::Status()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_status;
    }
}