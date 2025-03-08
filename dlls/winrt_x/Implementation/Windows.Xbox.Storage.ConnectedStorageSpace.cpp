#include "pch.h"
#include "Windows.Xbox.Storage.ConnectedStorageSpace.h"
#include "Windows.Xbox.Storage.ConnectedStorageSpace.g.cpp"
#include "Windows.Xbox.Storage.ConnectedStorageContainer.h"
#include "Windows.Xbox.Storage.ContainerInfoQueryResult.h"
#include "Windows.Xbox.System.Console.h"
#include "Windows.Xbox.System.User.h"

namespace winrt::Windows::Xbox::Storage::implementation
{
	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForUserAsync(System::User user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (userStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			userStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_userStorage);
		}

		co_return userStorageSpace;
	}

	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForUserAsync(System::User user, hstring serviceConfigurationId)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (userStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			userStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_userStorage);
		}

		co_return userStorageSpace;
	}

	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForMachineAsync()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (machineStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			machineStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_machineStorage);
		}

		co_return machineStorageSpace;
	}

	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetForMachineAsync(hstring serviceConfigurationId)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (machineStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			machineStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_machineStorage);
		}

		co_return machineStorageSpace;
	}

	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetSyncOnDemandForUserAsync(System::User user)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (userStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			userStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_userStorage);
		}

		co_return userStorageSpace;
	}

	Foundation::IAsyncOperation<Storage::ConnectedStorageSpace> ConnectedStorageSpace::GetSyncOnDemandForUserAsync(System::User user, hstring serviceConfigurationId)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (userStorageSpace == Storage::ConnectedStorageSpace(nullptr)) {
			userStorageSpace = winrt::make<ConnectedStorageSpace>(WinDurango::impl::s_userStorage);
		}

		co_return userStorageSpace;
	}

	System::User ConnectedStorageSpace::User()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return System::implementation::User::Users().GetAt(0);
	}

	hstring ConnectedStorageSpace::ServiceConfigurationId()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	bool ConnectedStorageSpace::IsReadOnly()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Storage::ConnectedStorageContainer ConnectedStorageSpace::CreateContainer(hstring const& containerName)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		if (WinDurango::impl::s_userStorage == nullptr || WinDurango::impl::s_machineStorage == nullptr)
			assert("s_userStorage is null");

		if (m_containers == nullptr)
			m_containers = winrt::single_threaded_map<hstring, Storage::ConnectedStorageContainer>();

		if (!m_containers.HasKey(containerName)) {
			Storage::ConnectedStorageContainer container = winrt::make<ConnectedStorageContainer>(containerName, m_connectedStorage);

			m_containers.Insert(containerName, container);

			return container;
		}

		return m_containers.Lookup(containerName);
	}

	Foundation::IAsyncAction ConnectedStorageSpace::DeleteContainerAsync(hstring containerName)
	{
		co_await m_connectedStorage->DeleteContainer(containerName);

		m_containers.Remove(containerName);
	}

	Storage::ContainerInfoQueryResult ConnectedStorageSpace::CreateContainerInfoQuery(hstring const& containerNamePrefix)
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		return winrt::make<ContainerInfoQueryResult>(containerNamePrefix, m_connectedStorage);
	}

	Foundation::IAsyncOperation<int32_t> ConnectedStorageSpace::GetRemainingBytesInQuotaAsync()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}

	Foundation::IAsyncOperation<int64_t> ConnectedStorageSpace::GetRemainingBytesInQuota64Async()
	{
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
	}
}