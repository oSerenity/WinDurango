#pragma once
#include "Windows.Xbox.ApplicationModel.Store.Configuration.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    struct Configuration
    {
        Configuration() = default;

        static hstring MarketplaceId();

    private:
		static inline hstring m_marketplaceId{ L"8c6a3a7c-3b9a-4e4a-8e6e-17a5e8b7c9a0" };
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::Store::factory_implementation
{
    struct Configuration : ConfigurationT<Configuration, implementation::Configuration>
    {
    };
}