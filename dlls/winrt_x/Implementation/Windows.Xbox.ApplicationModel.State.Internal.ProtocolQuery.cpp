#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ProtocolQuery.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.ProtocolQuery.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    Foundation::Collections::IVectorView<hstring> ProtocolQuery::FindAumidsForScheme(hstring const& scheme)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_aumidsForScheme;
    }
}