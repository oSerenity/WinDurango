#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceService.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceService : PresenceServiceT<PresenceService>
    {
        PresenceService() = default;

        event_token DevicePresenceChanged(Windows::Foundation::EventHandler<DevicePresenceChangeEventArgs> const& __param0);
        void DevicePresenceChanged(event_token const& __param0) noexcept;
        event_token TitlePresenceChanged(Windows::Foundation::EventHandler<TitlePresenceChangeEventArgs> const& __param0);
        void TitlePresenceChanged(event_token const& __param0) noexcept;
        Windows::Foundation::IAsyncAction SetPresenceAsync(bool isUserActiveInTitle);
        Windows::Foundation::IAsyncAction SetPresenceAsync(bool isUserActiveInTitle, PresenceData presenceData);
        Windows::Foundation::IAsyncOperation<PresenceRecord> GetPresenceAsync(hstring xboxUserId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> GetPresenceForMultipleUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> GetPresenceForMultipleUsersAsync(Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, Windows::Foundation::Collections::IVectorView<PresenceDeviceType> deviceTypes, Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> GetPresenceForSocialGroupAsync(hstring socialGroup);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<PresenceRecord>> GetPresenceForSocialGroupAsync(hstring socialGroup, hstring socialGroupOwnerXboxuserId, Windows::Foundation::Collections::IVectorView<PresenceDeviceType> deviceTypes, Windows::Foundation::Collections::IVectorView<uint32_t> titleIds, PresenceDetailLevel detailLevel, bool onlineOnly, bool broadcastingOnly);
        DevicePresenceChangeSubscription SubscribeToDevicePresenceChange(hstring const& xboxUserId);
        void UnsubscribeFromDevicePresenceChange(DevicePresenceChangeSubscription const& subscription);
        TitlePresenceChangeSubscription SubscribeToTitlePresenceChange(hstring const& xboxUserId, uint32_t titleId);
        void UnsubscribeFromTitlePresenceChange(TitlePresenceChangeSubscription const& subscription);

    private:
        event_token m_devicePresenceChangedToken;
		event_token m_titlePresenceChangedToken;
		bool m_isUserActivityInTitle{ false };
		PresenceData m_presenceData{ nullptr };
		PresenceRecord m_presenceRecord{ nullptr };
        Windows::Foundation::Collections::IVectorView<PresenceRecord> m_presenceRecords{ single_threaded_vector<PresenceRecord>().GetView() };
		DevicePresenceChangeSubscription m_devicePresenceChangeSubscription{ nullptr };
		TitlePresenceChangeSubscription m_titlePresenceChangeSubscription{ nullptr };
    };
}