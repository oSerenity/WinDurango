#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerMetadataResult.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct GameServerMetadataResult : GameServerMetadataResultT<GameServerMetadataResult>
    {
        GameServerMetadataResult() = default;

        Windows::Foundation::Collections::IVectorView<GameVariant> GameVariants();
        Windows::Foundation::Collections::IVectorView<GameServerImageSet> GameServerImageSets();

    private:
		Windows::Foundation::Collections::IVectorView<GameVariant> m_gameVariants = single_threaded_vector<GameVariant>().GetView();
		Windows::Foundation::Collections::IVectorView<GameServerImageSet> m_gameServerImageSets = single_threaded_vector<GameServerImageSet>().GetView();
    };
}