#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    Windows::Foundation::Collections::IVectorView<GameVariant> GameServerMetadataResult::GameVariants()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameVariants;
    }

    Windows::Foundation::Collections::IVectorView<GameServerImageSet> GameServerMetadataResult::GameServerImageSets()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_gameServerImageSets;
    }
}