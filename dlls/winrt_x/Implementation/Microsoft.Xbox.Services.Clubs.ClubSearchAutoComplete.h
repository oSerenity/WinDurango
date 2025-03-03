#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubSearchAutoComplete.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubSearchAutoComplete : ClubSearchAutoCompleteT<ClubSearchAutoComplete>
    {
        ClubSearchAutoComplete() = default;

        hstring Id();
        hstring Name();
        hstring Description();
        hstring DisplayImageUrl();
        double Score();
        hstring SuggestedQueryText();
        Windows::Foundation::Collections::IVectorView<hstring> Tags();
        Windows::Foundation::Collections::IVectorView<hstring> AssociatedTitles();

    private:
		hstring m_id{ MAKE_HSTRING("") };
		hstring m_name{ MAKE_HSTRING("") };
		hstring m_description{ MAKE_HSTRING("") };
		hstring m_displayImageUrl{ MAKE_HSTRING("") };
		double m_score{ 0 };
		hstring m_suggestedQueryText{ MAKE_HSTRING("") };
		Windows::Foundation::Collections::IVector<hstring> m_tags = single_threaded_vector<hstring>();
		Windows::Foundation::Collections::IVector<hstring> m_associatedTitles = single_threaded_vector<hstring>();
    };
}