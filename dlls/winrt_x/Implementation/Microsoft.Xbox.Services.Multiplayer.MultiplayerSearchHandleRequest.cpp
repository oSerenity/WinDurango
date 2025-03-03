#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleRequest.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSearchHandleRequest::MultiplayerSearchHandleRequest(MultiplayerSessionReference const& sessionReference)
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_sessionReference = sessionReference;
    }

    MultiplayerSessionReference MultiplayerSearchHandleRequest::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sessionReference;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleRequest::Tags()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_tags;
    }

    void MultiplayerSearchHandleRequest::Tags(Windows::Foundation::Collections::IVectorView<hstring> const& tags)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_tags = tags;
    }

    Windows::Foundation::Collections::IMapView<hstring, double> MultiplayerSearchHandleRequest::NumbersMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_numbersMetadata;
    }

    void MultiplayerSearchHandleRequest::NumbersMetadata(Windows::Foundation::Collections::IMapView<hstring, double> const& metadata)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_numbersMetadata = metadata;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSearchHandleRequest::StringsMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_stringsMetadata;
    }

    void MultiplayerSearchHandleRequest::StringsMetadata(Windows::Foundation::Collections::IMapView<hstring, hstring> const& metadata)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stringsMetadata = metadata;
    }
}