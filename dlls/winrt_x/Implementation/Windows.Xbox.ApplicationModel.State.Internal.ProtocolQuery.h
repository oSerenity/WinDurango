#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.ProtocolQuery.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct ProtocolQuery
    {
        ProtocolQuery() = default;

        static Foundation::Collections::IVectorView<hstring> FindAumidsForScheme(hstring const& scheme);

    private:
		static inline Foundation::Collections::IVectorView<hstring> m_aumidsForScheme = single_threaded_vector<hstring>({ L"com.microsoft.xboxlive.protocol" }).GetView();
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct ProtocolQuery : ProtocolQueryT<ProtocolQuery, implementation::ProtocolQuery>
    {
    };
}