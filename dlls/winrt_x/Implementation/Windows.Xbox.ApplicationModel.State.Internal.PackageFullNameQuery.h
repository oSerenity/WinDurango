#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageFullNameQuery.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct PackageFullNameQuery
    {
        PackageFullNameQuery() = default;

        static bool IsInbox(hstring const& packageFullName);
        static bool IsEra(hstring const& packageFullName);
        static PackageContentType GetContentType(hstring const& packageFullName);
        static bool IsGameCore(hstring const& packageFullName);

    private:
        static inline bool m_isInbox{ false };
		static inline bool m_isEra{ false };
		static inline auto m_packageContentType{ PackageContentType::App };
		static inline bool m_isGameCore{ false };
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct PackageFullNameQuery : PackageFullNameQueryT<PackageFullNameQuery, implementation::PackageFullNameQuery>
    {
    };
}