#pragma once
#include "Microsoft.Xbox.Services.Marketplace.CatalogItemImage.g.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    struct CatalogItemImage : CatalogItemImageT<CatalogItemImage>
    {
        CatalogItemImage() = default;

        hstring Id();
        Windows::Foundation::Uri ResizeUrl();
        Windows::Foundation::Collections::IVectorView<hstring> Purposes();
        hstring Purpose();
        uint32_t Height();
        uint32_t Width();

    private:
        hstring m_id{ L"" };
		Windows::Foundation::Uri m_resizeUrl{ nullptr };
        Windows::Foundation::Collections::IVectorView<hstring> m_purposes = single_threaded_vector<hstring>().GetView();
		hstring m_purpose{ L"" };
		uint32_t m_height{ 0 };
		uint32_t m_width{ 0 };
    };
}