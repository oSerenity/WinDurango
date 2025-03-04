#pragma once
#include "Windows.Xbox.ApplicationModel.Core.CoreApplicationContext.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::Core::implementation
{
    struct CoreApplicationContext
    {
        CoreApplicationContext() = default;

        static System::User CurrentUser();
        static System::User PreviousUser();
        static event_token CurrentUserChanged(Foundation::EventHandler<Foundation::IInspectable> const& handler);
        static void CurrentUserChanged(event_token const& token) noexcept;
        static void SetCurrentUser(System::User const& value);
        static System::User CurrentSystemUser();
        static event_token CurrentSystemUserChanged(Foundation::EventHandler<Foundation::IInspectable> const& handler);
        static void CurrentSystemUserChanged(event_token const& token) noexcept;
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::Core::factory_implementation
{
    struct CoreApplicationContext : CoreApplicationContextT<CoreApplicationContext, implementation::CoreApplicationContext>
    {
    };
}