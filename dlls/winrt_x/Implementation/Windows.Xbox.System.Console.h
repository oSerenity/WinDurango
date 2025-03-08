#pragma once
#include "Windows.Xbox.System.Console.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct Console
    {
        Console() = default;

        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers);
        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body);
        static Foundation::IAsyncOperation<GetTokenAndSignatureResult> GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body);
        static hstring ApplicationSpecificDeviceId();

    private:
		static inline hstring m_applicationSpecificDeviceId{ L"00000000-0000-0000-0000-000000000000" };
    };
}

namespace winrt::Windows::Xbox::System::factory_implementation
{
    struct Console : ConsoleT<Console, implementation::Console>
    {
    };
}