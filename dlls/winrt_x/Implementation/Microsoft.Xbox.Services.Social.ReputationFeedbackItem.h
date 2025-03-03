#pragma once
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ReputationFeedbackItem : ReputationFeedbackItemT<ReputationFeedbackItem>
    {
        ReputationFeedbackItem() = default;

        ReputationFeedbackItem(hstring const& xboxUserId, ReputationFeedbackType const& reputationFeedbackType, Multiplayer::MultiplayerSessionReference const& sessionReference, hstring const& reasonMessage, hstring const& evidenceResourceId);
        hstring XboxUserId();
        ReputationFeedbackType FeedbackType();
        Multiplayer::MultiplayerSessionReference SessionReference();
        hstring ReasonMessage();
        hstring EvidenceResourceId();

    private:
		hstring m_xboxUserId{ L"" };
		ReputationFeedbackType m_feedbackType{ ReputationFeedbackType::FairPlayKillsTeammates };
        Multiplayer::MultiplayerSessionReference m_sessionReference{ nullptr };
        hstring m_reasonMessage{ L"" };
        hstring m_evidenceResourceId{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::Social::factory_implementation
{
    struct ReputationFeedbackItem : ReputationFeedbackItemT<ReputationFeedbackItem, implementation::ReputationFeedbackItem>
    {

    };
}