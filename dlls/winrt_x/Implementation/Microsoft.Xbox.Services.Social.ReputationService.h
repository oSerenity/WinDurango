#pragma once
#include "Microsoft.Xbox.Services.Social.ReputationService.g.h"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    struct ReputationService : ReputationServiceT<ReputationService>
    {
        ReputationService() = default;

        Windows::Foundation::IAsyncAction SubmitReputationFeedbackAsync(hstring xboxUserId, ReputationFeedbackType reputationFeedbackType, hstring sessionName, hstring reasonMessage, hstring evidenceResourceId);
        Windows::Foundation::IAsyncAction SubmitBatchReputationFeedbackAsync(Windows::Foundation::Collections::IVectorView<ReputationFeedbackItem> feedbackItems);
    };
}