#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.Presence.PresenceService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    event_token PresenceService::DevicePresenceChanged(Windows::Foundation::EventHandler<DevicePresenceChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_devicePresenceChangedToken;
    }

    void PresenceService::DevicePresenceChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_devicePresenceChangedToken = __param0;
    }

    event_token PresenceService::TitlePresenceChanged(Windows::Foundation::EventHandler<TitlePresenceChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titlePresenceChangedToken;
    }

    void PresenceService::TitlePresenceChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_titlePresenceChangedToken = __param0;
    }

    Windows::Foundation::IAsyncAction PresenceService::SetPresenceAsync(bool isUserActiveInTitle)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_isUserActivityInTitle = isUserActiveInTitle;

        co_return;
    }

    Windows::Foundation::IAsyncAction PresenceService::SetPresenceAsync(bool isUserActiveInTitle, PresenceData presenceData)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_isUserActivityInTitle = isUserActiveInTitle;
		m_presenceData = presenceData;

    	co_return;
    }

    Windows::Foundation::IAsyncOperation<PresenceRecord> PresenceService::GetPresenceAsync(hstring xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_presenceRecord;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> PresenceService::GetPresenceForMultipleUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_presenceRecords;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> PresenceService::GetPresenceForMultipleUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, Windows::Foundation::Collections::IVectorView<PresenceDeviceType> deviceTypes, Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_presenceRecords;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> PresenceService::GetPresenceForSocialGroupAsync(hstring socialGroup)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_presenceRecords;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> PresenceService::GetPresenceForSocialGroupAsync(hstring socialGroup, hstring socialGroupOwnerXboxuserId, Windows::Foundation::Collections::IVectorView<PresenceDeviceType> deviceTypes, Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_presenceRecords;
    }

    DevicePresenceChangeSubscription PresenceService::SubscribeToDevicePresenceChange(hstring const& xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_devicePresenceChangeSubscription;
    }

    void PresenceService::UnsubscribeFromDevicePresenceChange(DevicePresenceChangeSubscription const& subscription)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_devicePresenceChangeSubscription = subscription;
    }

    TitlePresenceChangeSubscription PresenceService::SubscribeToTitlePresenceChange(hstring const& xboxUserId, uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titlePresenceChangeSubscription;
    }

    void PresenceService::UnsubscribeFromTitlePresenceChange(TitlePresenceChangeSubscription const& subscription)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_titlePresenceChangeSubscription = subscription;
    }
}