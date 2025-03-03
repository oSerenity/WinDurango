#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerImageSet.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerImageSet.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    uint64_t GameServerImageSet::MinPlayers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_MinPlayers;
    }

    uint64_t GameServerImageSet::MaxPlayers()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_MaxPlayers;
    }

    hstring GameServerImageSet::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_Id;
    }

    hstring GameServerImageSet::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_Name;
    }

    uint64_t GameServerImageSet::SelectionOrder()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_SelectionOrder;
    }

    hstring GameServerImageSet::SchemaContent()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_SchemaContent;
    }

    hstring GameServerImageSet::SchemaName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_SchemaName;
    }

    hstring GameServerImageSet::SchemaId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_SchemaId;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> GameServerImageSet::Tags()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_Tags;
    }
}