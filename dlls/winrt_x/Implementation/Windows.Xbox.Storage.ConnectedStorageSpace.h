#pragma once
#include "Windows.Xbox.Storage.ConnectedStorageSpace.g.h"
#include "../ConnectedStorage/ConnectedStorage.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
    struct ConnectedStorageSpace : ConnectedStorageSpaceT<ConnectedStorageSpace>
    {
        ConnectedStorageSpace() = default;
		ConnectedStorageSpace(WinDurango::impl::ConnectedStorage* connectedStorage)
		{
			m_connectedStorage = connectedStorage;
		}

        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetForUserAsync(System::User user);
        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetForUserAsync(System::User user, hstring serviceConfigurationId);
        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetForMachineAsync( );
        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetForMachineAsync(hstring serviceConfigurationId);
        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetSyncOnDemandForUserAsync(System::User user);
        static Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> GetSyncOnDemandForUserAsync(System::User user, hstring serviceConfigurationId);
        System::User User( );
        hstring ServiceConfigurationId( );
        bool IsReadOnly( );
        ConnectedStorageContainer CreateContainer(hstring const& containerName);
        Foundation::IAsyncAction DeleteContainerAsync(hstring containerName);
        ContainerInfoQueryResult CreateContainerInfoQuery(hstring const& containerNamePrefix);
        Foundation::IAsyncOperation<int32_t> GetRemainingBytesInQuotaAsync( );
        Foundation::IAsyncOperation<int64_t> GetRemainingBytesInQuota64Async( );
        inline static Storage::ConnectedStorageSpace userStorageSpace = { nullptr };
        inline static Storage::ConnectedStorageSpace machineStorageSpace = { nullptr };
        inline static ConnectedStorageContainer staticContainer = { nullptr };

    private:
        inline static Foundation::Collections::IMap<hstring, ConnectedStorageContainer> m_containers;
		WinDurango::impl::ConnectedStorage* m_connectedStorage = nullptr;
    };
}

namespace winrt::Windows::Xbox::Storage::factory_implementation
{
    struct ConnectedStorageSpace : ConnectedStorageSpaceT<ConnectedStorageSpace, implementation::ConnectedStorageSpace>
    {
    };
}