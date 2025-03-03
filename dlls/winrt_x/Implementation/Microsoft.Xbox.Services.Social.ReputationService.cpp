#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ReputationService.h"
#include "Microsoft.Xbox.Services.Social.ReputationService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    Windows::Foundation::IAsyncAction ReputationService::SubmitReputationFeedbackAsync(hstring xboxUserId, ReputationFeedbackType reputationFeedbackType, hstring sessionName, hstring reasonMessage, hstring evidenceResourceId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Windows::Foundation::IAsyncAction ReputationService::SubmitBatchReputationFeedbackAsync(Windows::Foundation::Collections::IVectorView<ReputationFeedbackItem> feedbackItems)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }
}