#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfoEvents.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfoEvents.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    event_token PackageInfoEvents::PackageChanged(Foundation::EventHandler<IPackageChangedEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageChanged.add(handler);
    }

    void PackageInfoEvents::PackageChanged(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_packageChanged.remove(cookie);
    }

    event_token PackageInfoEvents::PackageReset(Foundation::EventHandler<Foundation::IInspectable> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageReset.add(handler);
    }

    void PackageInfoEvents::PackageReset(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_packageReset.remove(cookie);
    }

    void PackageInfoEvents::LogStats()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }
}