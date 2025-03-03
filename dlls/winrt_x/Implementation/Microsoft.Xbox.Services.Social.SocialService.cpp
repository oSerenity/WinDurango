#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialService.h"
#include "Microsoft.Xbox.Services.Social.SocialService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    event_token SocialService::SocialRelationshipChanged(Windows::Foundation::EventHandler<SocialRelationshipChangeEventArgs> const& __param0)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_socialRelationshipChanged.add(__param0);
    }

    void SocialService::SocialRelationshipChanged(event_token const& __param0) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_socialRelationshipChanged(__param0);
    }

    Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> SocialService::GetSocialRelationshipsAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_xboxSocialRelationshipResult;
    }

    Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> SocialService::GetSocialRelationshipsAsync(SocialRelationship socialRelationshipFilter)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return m_xboxSocialRelationshipResult;
    }

    Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> SocialService::GetSocialRelationshipsAsync(hstring xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();


		co_return m_xboxSocialRelationshipResult;
    }

    Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> SocialService::GetSocialRelationshipsAsync(SocialRelationship socialRelationshipFilter, uint32_t startIndex, uint32_t maxItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        /*co_await resume_background( );*/

		co_return m_xboxSocialRelationshipResult;
    }

    SocialRelationshipChangeSubscription SocialService::SubscribeToSocialRelationshipChange(hstring const& xboxUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_socialRelationshipChangeSubscription;
    }

    void SocialService::UnsubscribeFromSocialRelationshipChange(SocialRelationshipChangeSubscription const& subscription)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        m_socialRelationshipChangeSubscription = subscription;
    }
}