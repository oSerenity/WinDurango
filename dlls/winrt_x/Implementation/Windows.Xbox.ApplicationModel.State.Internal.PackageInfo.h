#pragma once
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.h"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    struct PackageInfo
    {
        PackageInfo() = default;

        static Foundation::Collections::IVectorView<IPackageInfo> Find(FindPackageInfoFilter const& filter);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByDeviceId(guid const& deviceId, FindPackageInfoFilter const& filter);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByContentId(guid const& contentId);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByProductId(guid const& productId);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByTitleId(uint32_t titleId);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByAllowedProductId(guid const& allowedProductId);
        static IPackageInfo FindByPackageInstanceId(hstring const& packageInstanceId);
        static Foundation::Collections::IVectorView<IPackageInfo> FindUniversalPackagesByFamilyName(hstring const& packageFamilyName);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName);
        static Foundation::Collections::IVectorView<IPackageInfo> FindUnparented();
        static IPackageInfo FindByFullName(hstring const& fullName);
        static Foundation::Collections::IVectorView<IPackageInfo> FindByTitleSearchString(hstring const& searchString, uint32_t maxResults);
        static IPackageInfo FindGameHub(guid const& gameHubId);
        static Foundation::Collections::IVectorView<IPackageInfo> FindPackagesForGameHub(guid const& gameHubId);

    private:
		static inline Foundation::Collections::IVectorView<IPackageInfo> m_packageInfo = single_threaded_vector<IPackageInfo>().GetView();
		static inline IPackageInfo m_packageInfoInstance{ nullptr };
    };
}

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::factory_implementation
{
    struct PackageInfo : PackageInfoT<PackageInfo, implementation::PackageInfo>
    {
    };
}