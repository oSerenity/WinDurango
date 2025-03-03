#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSearchHandleRequest : MultiplayerSearchHandleRequestT<MultiplayerSearchHandleRequest>
    {
        MultiplayerSearchHandleRequest() = default;

        MultiplayerSearchHandleRequest(MultiplayerSessionReference const& sessionReference);
        MultiplayerSessionReference SessionReference();
        Windows::Foundation::Collections::IVectorView<hstring> Tags();
        void Tags(Windows::Foundation::Collections::IVectorView<hstring> const& tags);
        Windows::Foundation::Collections::IMapView<hstring, double> NumbersMetadata();
        void NumbersMetadata(Windows::Foundation::Collections::IMapView<hstring, double> const& metadata);
        Windows::Foundation::Collections::IMapView<hstring, hstring> StringsMetadata();
        void StringsMetadata(Windows::Foundation::Collections::IMapView<hstring, hstring> const& metadata);

    private:
		MultiplayerSessionReference m_sessionReference{ nullptr };
		Windows::Foundation::Collections::IVectorView<hstring> m_tags{ nullptr };
        Windows::Foundation::Collections::IMapView<hstring, double> m_numbersMetadata{ single_threaded_map<hstring, double>().GetView() };
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_stringsMetadata{ single_threaded_map<hstring, hstring>().GetView() };
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerSearchHandleRequest : MultiplayerSearchHandleRequestT<MultiplayerSearchHandleRequest, implementation::MultiplayerSearchHandleRequest>
    {
    };
}