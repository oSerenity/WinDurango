#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageFullNameQuery.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageFullNameQuery.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    bool PackageFullNameQuery::IsInbox(hstring const& packageFullName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isInbox;
    }

    bool PackageFullNameQuery::IsEra(hstring const& packageFullName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isEra;
    }

    PackageContentType PackageFullNameQuery::GetContentType(hstring const& packageFullName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageContentType;
    }

    bool PackageFullNameQuery::IsGameCore(hstring const& packageFullName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_isGameCore;
    }
}