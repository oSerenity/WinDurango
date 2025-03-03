#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.Manager.PerformQosMeasurementsEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    struct PerformQosMeasurementsEventArgs : PerformQosMeasurementsEventArgsT<PerformQosMeasurementsEventArgs>
    {
        PerformQosMeasurementsEventArgs() = default;

        Windows::Foundation::Collections::IMapView<hstring, hstring> AddressToDeviceTokens();

    private:
        Windows::Foundation::Collections::IMapView<hstring, hstring> m_addressToDeviceTokens = single_threaded_map<hstring, hstring>().GetView();
    };
}