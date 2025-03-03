#pragma once
#include "Microsoft.Xbox.Services.System.StringService.g.h"

namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    struct StringService : StringServiceT<StringService>
    {
        StringService() = default;

        Windows::Foundation::IAsyncOperation<VerifyStringResult> VerifyStringAsync(hstring stringToVerify);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<VerifyStringResult>> VerifyStringsAsync(Windows::Foundation::Collections::IVectorView<hstring> stringsToVerify);

    private:
		VerifyStringResult m_verifyStringResult{ nullptr };
		Windows::Foundation::Collections::IVectorView<VerifyStringResult> m_verifyStringResults{ single_threaded_vector<VerifyStringResult>().GetView() };
    };
}