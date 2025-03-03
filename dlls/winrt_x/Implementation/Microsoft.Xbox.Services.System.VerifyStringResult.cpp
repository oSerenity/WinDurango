#include "pch.h"
#include "Microsoft.Xbox.Services.System.VerifyStringResult.h"
#include "Microsoft.Xbox.Services.System.VerifyStringResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    VerifyStringResultCode VerifyStringResult::ResultCode()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_resultCode;
    }

    hstring VerifyStringResult::FirstOffendingSubstring()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_firstOffendingSubstring;
    }
}