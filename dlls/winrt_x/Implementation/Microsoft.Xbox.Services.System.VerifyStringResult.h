#pragma once
#include "Microsoft.Xbox.Services.System.VerifyStringResult.g.h"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct VerifyStringResult : VerifyStringResultT<VerifyStringResult>
    {
        VerifyStringResult() = default;

        VerifyStringResultCode ResultCode();
        hstring FirstOffendingSubstring();

    private:
		VerifyStringResultCode m_resultCode{ VerifyStringResultCode::Success };
        hstring m_firstOffendingSubstring{ L"" };
    };
}