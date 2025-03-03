#pragma once
#include "Microsoft.Xbox.Services.Social.SocialService.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct SocialService : SocialServiceT<SocialService>
    {
        SocialService() = default;

        event_token SocialRelationshipChanged(Windows::Foundation::EventHandler<SocialRelationshipChangeEventArgs> const& __param0);
        void SocialRelationshipChanged(event_token const& __param0) noexcept;
        Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> GetSocialRelationshipsAsync();
        Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> GetSocialRelationshipsAsync(SocialRelationship socialRelationshipFilter);
        Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> GetSocialRelationshipsAsync(hstring xboxUserId);
        Windows::Foundation::IAsyncOperation<XboxSocialRelationshipResult> GetSocialRelationshipsAsync(SocialRelationship socialRelationshipFilter, uint32_t startIndex, uint32_t maxItems);
        SocialRelationshipChangeSubscription SubscribeToSocialRelationshipChange(hstring const& xboxUserId);
        void UnsubscribeFromSocialRelationshipChange(SocialRelationshipChangeSubscription const& subscription);

    private:
		event<Windows::Foundation::EventHandler<SocialRelationshipChangeEventArgs>> m_socialRelationshipChanged;
		XboxSocialRelationshipResult m_xboxSocialRelationshipResult{ nullptr };
		SocialRelationshipChangeSubscription m_socialRelationshipChangeSubscription{ nullptr };
    };
}