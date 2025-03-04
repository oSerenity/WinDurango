#include "pch.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.h"
#include "Windows.Xbox.ApplicationModel.State.Internal.PackageInfo.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::State::Internal::implementation
{
    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::Find(FindPackageInfoFilter const& filter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByDeviceId(guid const& deviceId, FindPackageInfoFilter const& filter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByContentId(guid const& contentId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByProductId(guid const& productId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByTitleId(uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByAllowedProductId(guid const& allowedProductId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    IPackageInfo PackageInfo::FindByPackageInstanceId(hstring const& packageInstanceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_packageInfoInstance;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindUniversalPackagesByFamilyName(hstring const& packageFamilyName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByAllowedPackageFamilyName(hstring const& allowedPackageFamilyName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindUnparented()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    IPackageInfo PackageInfo::FindByFullName(hstring const& fullName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfoInstance;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindByTitleSearchString(hstring const& searchString, uint32_t maxResults)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }

    IPackageInfo PackageInfo::FindGameHub(guid const& gameHubId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfoInstance;
    }

    Foundation::Collections::IVectorView<IPackageInfo> PackageInfo::FindPackagesForGameHub(guid const& gameHubId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_packageInfo;
    }
}