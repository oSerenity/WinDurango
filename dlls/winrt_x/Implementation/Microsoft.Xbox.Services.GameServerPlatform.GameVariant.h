#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameVariant.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameVariant : GameVariantT<GameVariant>
    {
        GameVariant() = default;

        hstring Id();
        hstring Name();
        bool IsPublisher();
        uint64_t Rank();
        hstring SchemaContent();
        hstring SchemaName();
        hstring SchemaId();

    private:
		hstring m_id{ L"" };
		hstring m_name{ L"" };
		bool m_isPublisher{ false };
		uint64_t m_rank{ 0 };
		hstring m_schemaContent{ L"" };
		hstring m_schemaName{ L"" };
		hstring m_schemaId{ L"" };
    };
}