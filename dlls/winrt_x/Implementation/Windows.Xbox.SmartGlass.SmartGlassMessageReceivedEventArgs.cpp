#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassMessageReceivedEventArgs.h"
#include "Windows.Xbox.SmartGlass.SmartGlassMessageReceivedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    hstring SmartGlassMessageReceivedEventArgs::Message()
    {
        throw hresult_not_implemented();
    }
}