#include "pch.h"
#include "Windows.Xbox.UI.AccountPickerResult.h"
#include "Windows.Xbox.UI.AccountPickerResult.g.cpp"

namespace winrt::Windows::Xbox::UI::implementation
{
    System::IUser AccountPickerResult::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return System::User::Users().GetAt(m_signedInUsersCount + 1);
    }
}