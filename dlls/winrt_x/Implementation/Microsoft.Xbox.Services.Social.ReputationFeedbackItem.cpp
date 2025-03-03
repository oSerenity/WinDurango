#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.h"
#include "Microsoft.Xbox.Services.Social.ReputationFeedbackItem.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    ReputationFeedbackItem::ReputationFeedbackItem(hstring const& xboxUserId, ReputationFeedbackType const& reputationFeedbackType, Multiplayer::MultiplayerSessionReference const& sessionReference, hstring const& reasonMessage, hstring const& evidenceResourceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_xboxUserId = xboxUserId;
		m_feedbackType = reputationFeedbackType;
		m_sessionReference = sessionReference;
		m_reasonMessage = reasonMessage;
		m_evidenceResourceId = evidenceResourceId;
    }

    hstring ReputationFeedbackItem::XboxUserId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xboxUserId;
    }

    ReputationFeedbackType ReputationFeedbackItem::FeedbackType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_feedbackType;
    }

    Multiplayer::MultiplayerSessionReference ReputationFeedbackItem::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionReference;
    }

    hstring ReputationFeedbackItem::ReasonMessage()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_reasonMessage;
    }

    hstring ReputationFeedbackItem::EvidenceResourceId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_evidenceResourceId;
    }
}