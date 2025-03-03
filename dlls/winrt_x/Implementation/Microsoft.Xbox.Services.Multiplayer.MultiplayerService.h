#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerService : MultiplayerServiceT<MultiplayerService>
    {
        MultiplayerService() = default;

        event_token MultiplayerSessionChanged(Windows::Foundation::EventHandler<MultiplayerSessionChangeEventArgs> const& __param0);
        void MultiplayerSessionChanged(event_token const& __param0) noexcept;
        event_token MultiplayerSubscriptionLost(Windows::Foundation::EventHandler<MultiplayerSubscriptionLostEventArgs> const& __param0);
        void MultiplayerSubscriptionLost(event_token const& __param0) noexcept;
        Windows::Foundation::IAsyncOperation<MultiplayerSession> WriteSessionAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode);
        Windows::Foundation::IAsyncOperation<WriteSessionResult> TryWriteSessionAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode);
        Windows::Foundation::IAsyncOperation<MultiplayerSession> WriteSessionByHandleAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId);
        Windows::Foundation::IAsyncOperation<WriteSessionResult> TryWriteSessionByHandleAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId);
        Windows::Foundation::IAsyncOperation<MultiplayerSession> GetCurrentSessionAsync(MultiplayerSessionReference sessionReference);
        Windows::Foundation::IAsyncOperation<MultiplayerSession> GetCurrentSessionByHandleAsync(hstring handleId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> GetSessionsAsync(MultiplayerGetSessionsRequest getSessionsRequest);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> GetSessionsAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, hstring xboxUserIdFilter, hstring keywordFilter, MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> GetSessionsForUsersFilterAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIdsFilter, hstring keywordFilter, MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems);
        Windows::Foundation::IAsyncAction SetActivityAsync(MultiplayerSessionReference sessionReference);
        Windows::Foundation::IAsyncOperation<hstring> SetTransferHandleAsync(MultiplayerSessionReference targetSessionReference, MultiplayerSessionReference originSessionReference);
        Windows::Foundation::IAsyncAction SetSearchHandleAsync(MultiplayerSearchHandleRequest searchHandleRequest);
        Windows::Foundation::IAsyncAction ClearActivityAsync(hstring serviceConfigurationId);
        Windows::Foundation::IAsyncAction ClearSearchHandleAsync(hstring handleId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> SendInvitesAsync(MultiplayerSessionReference sessionReference, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> SendInvitesAsync(MultiplayerSessionReference sessionReference, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId, hstring contextStringId, hstring activationContext);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerActivityDetails>> GetActivitiesForSocialGroupAsync(hstring serviceConfigurationId, hstring socialGroupOwnerXboxUserId, hstring socialGroup);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerActivityDetails>> GetActivitiesForUsersAsync(hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSearchHandleDetails>> GetSearchHandlesAsync(hstring serviceConfigurationId, hstring sessionTemplateName, hstring orderBy, bool orderAscending, hstring searchFilter);
        Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSearchHandleDetails>> GetSearchHandlesAsync(MultiplayerQuerySearchHandleRequest searchHandleRequest);
        void EnableMultiplayerSubscriptions();
        void DisableMultiplayerSubscriptions();
        bool MultiplayerSubscriptionsEnabled();

    private:
        event_token m_multiplayerSessionChanged{};
		event_token m_multiplayerSubscriptionLost{};
		MultiplayerSession m_currentSession{ nullptr };
		WriteSessionResult m_writeSessionResult{ nullptr };
        Multiplayer::MultiplayerService m_multiplayerService{ nullptr };
        hstring m_transferHandle{ L"" };
        Windows::Foundation::Collections::IVectorView<MultiplayerSession> m_sessions{ single_threaded_vector<MultiplayerSession>().GetView() };
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates> m_sessionStates{ single_threaded_vector<MultiplayerSessionStates>().GetView() };
		Windows::Foundation::Collections::IVectorView<hstring> m_sendInvites{ single_threaded_vector<hstring>().GetView() };
		Windows::Foundation::Collections::IVectorView<MultiplayerActivityDetails> m_activities{ single_threaded_vector<MultiplayerActivityDetails>().GetView() };
		Windows::Foundation::Collections::IVectorView<MultiplayerSearchHandleDetails> m_searchHandles{ single_threaded_vector<MultiplayerSearchHandleDetails>().GetView() };
		bool m_subscriptionEnabled{ false };
    };
}