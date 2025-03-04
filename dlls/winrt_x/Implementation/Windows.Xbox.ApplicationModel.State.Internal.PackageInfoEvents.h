#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfoEvents.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct PackageInfoEvents : PackageInfoEventsT<PackageInfoEvents>
    {
        PackageInfoEvents() = default;

        event_token PackageChanged(Foundation::EventHandler<IPackageChangedEventArgs> const& handler);
        void PackageChanged(event_token const& cookie) noexcept;
        event_token PackageReset(Foundation::EventHandler<Foundation::IInspectable> const& handler);
        void PackageReset(event_token const& cookie) noexcept;
        void LogStats();

    private:
		event<Foundation::EventHandler<IPackageChangedEventArgs>> m_packageChanged;
		event<Foundation::EventHandler<Foundation::IInspectable>> m_packageReset;
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct PackageInfoEvents : PackageInfoEventsT<PackageInfoEvents, implementation::PackageInfoEvents>
    {
    };
}