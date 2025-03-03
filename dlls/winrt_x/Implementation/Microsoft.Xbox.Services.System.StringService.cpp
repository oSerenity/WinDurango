#include "pch.h"
#include "Microsoft.Xbox.Services.System.StringService.h"
#include "Microsoft.Xbox.Services.System.StringService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    Windows::Foundation::IAsyncOperation<VerifyStringResult> StringService::VerifyStringAsync(hstring stringToVerify)
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_verifyStringResult;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<VerifyStringResult>> StringService::VerifyStringsAsync(Windows::Foundation::Collections::IVectorView<hstring> stringsToVerify)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_verifyStringResults;
    }
}