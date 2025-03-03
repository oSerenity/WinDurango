#pragma once
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    struct XboxLiveLogCallEventArgs : XboxLiveLogCallEventArgsT<XboxLiveLogCallEventArgs>
    {
        XboxLiveLogCallEventArgs() = default;

        XboxServicesDiagnosticsTraceLevel Level();
        hstring Category();
        hstring Message();

    private:
		XboxServicesDiagnosticsTraceLevel m_level{ XboxServicesDiagnosticsTraceLevel::Verbose };
        hstring m_category{ MAKE_HSTRING("") };
        hstring m_message{ MAKE_HSTRING("") };
    };
}
