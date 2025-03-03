#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    event_token MultiplayerService::MultiplayerSessionChanged(Windows::Foundation::EventHandler<MultiplayerSessionChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_multiplayerSessionChanged;
    }

    void MultiplayerService::MultiplayerSessionChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_multiplayerSessionChanged = __param0;
    }

    event_token MultiplayerService::MultiplayerSubscriptionLost(Windows::Foundation::EventHandler<MultiplayerSubscriptionLostEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_multiplayerSubscriptionLost;
    }

    void MultiplayerService::MultiplayerSubscriptionLost(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_multiplayerSubscriptionLost = __param0;
    }

    Windows::Foundation::IAsyncOperation<MultiplayerSession> MultiplayerService::WriteSessionAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_currentSession;
    }

    Windows::Foundation::IAsyncOperation<WriteSessionResult> MultiplayerService::TryWriteSessionAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_writeSessionResult;
    }

    Windows::Foundation::IAsyncOperation<MultiplayerSession> MultiplayerService::WriteSessionByHandleAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_currentSession;
    }

    Windows::Foundation::IAsyncOperation<WriteSessionResult> MultiplayerService::TryWriteSessionByHandleAsync(MultiplayerSession multiplayerSession, MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_writeSessionResult;
    }

    Windows::Foundation::IAsyncOperation<MultiplayerSession> MultiplayerService::GetCurrentSessionAsync(MultiplayerSessionReference sessionReference)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_currentSession;
    }

    Windows::Foundation::IAsyncOperation<MultiplayerSession> MultiplayerService::GetCurrentSessionByHandleAsync(hstring handleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_currentSession;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(MultiplayerGetSessionsRequest getSessionsRequest)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_sessionStates;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, hstring xboxUserIdFilter, hstring keywordFilter, MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_sessionStates;

        // co_await resume_background( );
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSessionStates>> MultiplayerService::GetSessionsForUsersFilterAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIdsFilter, hstring keywordFilter, MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_sessionStates;
    }

    Windows::Foundation::IAsyncAction MultiplayerService::SetActivityAsync(MultiplayerSessionReference sessionReference)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncOperation<hstring> MultiplayerService::SetTransferHandleAsync(MultiplayerSessionReference targetSessionReference, MultiplayerSessionReference originSessionReference)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_transferHandle;
    }

    Windows::Foundation::IAsyncAction MultiplayerService::SetSearchHandleAsync(MultiplayerSearchHandleRequest searchHandleRequest)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncAction MultiplayerService::ClearActivityAsync(hstring serviceConfigurationId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncAction MultiplayerService::ClearSearchHandleAsync(hstring handleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(MultiplayerSessionReference sessionReference, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_sendInvites;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(MultiplayerSessionReference sessionReference, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId, hstring contextStringId, hstring activationContext)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_sendInvites;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForSocialGroupAsync(hstring serviceConfigurationId, hstring socialGroupOwnerXboxUserId, hstring socialGroup)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_activities;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForUsersAsync(hstring serviceConfigurationId, Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_activities;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(hstring serviceConfigurationId, hstring sessionTemplateName, hstring orderBy, bool orderAscending, hstring searchFilter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_searchHandles;
    }

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(MultiplayerQuerySearchHandleRequest searchHandleRequest)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_searchHandles;
    }

    void MultiplayerService::EnableMultiplayerSubscriptions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    void MultiplayerService::DisableMultiplayerSubscriptions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();
    }

    bool MultiplayerService::MultiplayerSubscriptionsEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subscriptionEnabled;
    }
}