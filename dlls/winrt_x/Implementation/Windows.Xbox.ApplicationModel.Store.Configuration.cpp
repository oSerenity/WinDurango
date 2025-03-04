#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Store.Configuration.h"
#include "Windows.Xbox.ApplicationModel.Store.Configuration.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    hstring Configuration::MarketplaceId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_marketplaceId;
    }
}