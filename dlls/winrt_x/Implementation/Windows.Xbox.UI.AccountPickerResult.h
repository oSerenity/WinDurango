#pragma once
#include "Windows.Xbox.UI.AccountPickerResult.g.h"

namespace winrt::Windows::Xbox::UI::implementation
{
    struct AccountPickerResult : AccountPickerResultT<AccountPickerResult>
    {
        AccountPickerResult() = default;

        System::IUser User();

    private:
		uint64_t m_signedInUsersCount = 0;
    };
}