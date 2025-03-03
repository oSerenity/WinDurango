#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.PerformQosMeasurementsEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.PerformQosMeasurementsEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    Windows::Foundation::Collections::IMapView<hstring, hstring> PerformQosMeasurementsEventArgs::AddressToDeviceTokens()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_addressToDeviceTokens;
    }
}