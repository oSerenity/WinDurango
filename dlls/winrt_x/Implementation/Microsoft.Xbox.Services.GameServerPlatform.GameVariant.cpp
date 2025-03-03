#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameVariant.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameVariant.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameVariant::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_id;
    }

    hstring GameVariant::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    bool GameVariant::IsPublisher()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isPublisher;
    }

    uint64_t GameVariant::Rank()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_rank;
    }

    hstring GameVariant::SchemaContent()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_schemaContent;
    }

    hstring GameVariant::SchemaName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_schemaName;
    }

    hstring GameVariant::SchemaId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_schemaId;
    }
}