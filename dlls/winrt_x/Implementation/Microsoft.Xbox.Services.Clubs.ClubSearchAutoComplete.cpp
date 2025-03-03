#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubSearchAutoComplete.h"
#include "Microsoft.Xbox.Services.Clubs.ClubSearchAutoComplete.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubSearchAutoComplete::Id()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_id;
    }

    hstring ClubSearchAutoComplete::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_name;
    }

    hstring ClubSearchAutoComplete::Description()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_description;
    }

    hstring ClubSearchAutoComplete::DisplayImageUrl()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_displayImageUrl;
    }

    double ClubSearchAutoComplete::Score()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_score;
    }

    hstring ClubSearchAutoComplete::SuggestedQueryText()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_suggestedQueryText;
    }

    Windows::Foundation::Collections::IVectorView<hstring> ClubSearchAutoComplete::Tags()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tags.GetView();
    }

    Windows::Foundation::Collections::IVectorView<hstring> ClubSearchAutoComplete::AssociatedTitles()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_associatedTitles.GetView();
    }
}