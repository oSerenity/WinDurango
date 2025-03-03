#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerImageSet.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerImageSet : GameServerImageSetT<GameServerImageSet>
    {
        GameServerImageSet() = default;

        uint64_t MinPlayers();
        uint64_t MaxPlayers();
        hstring Id();
        hstring Name();
        uint64_t SelectionOrder();
        hstring SchemaContent();
        hstring SchemaName();
        hstring SchemaId();
        Windows::Foundation::Collections::IMapView<hstring, hstring> Tags();

    private:
		uint64_t m_MinPlayers{ 0 };
		uint64_t m_MaxPlayers{ 0 };
        hstring m_Id{ L"" };
        hstring m_Name{ L"" };
		uint64_t m_SelectionOrder{ 0 };
        hstring m_SchemaContent{ L"" };
        hstring m_SchemaName{ L"" };
        hstring m_SchemaId{ L"" };
        Windows::Foundation::Collections::IMapView<hstring, hstring> m_Tags = single_threaded_map<hstring, hstring>().GetView();
    };
}