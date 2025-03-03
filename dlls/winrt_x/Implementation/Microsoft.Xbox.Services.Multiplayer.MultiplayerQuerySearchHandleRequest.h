#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerQuerySearchHandleRequest.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerQuerySearchHandleRequest : MultiplayerQuerySearchHandleRequestT<MultiplayerQuerySearchHandleRequest>
    {
        MultiplayerQuerySearchHandleRequest() = default;

        MultiplayerQuerySearchHandleRequest(hstring const& serviceConfigurationId, hstring const& sessionTemplateName);
        hstring ServiceConfigurationId();
        hstring SessionTemplateName();
        hstring OrderBy();
        void OrderBy(hstring const& value);
        bool OrderAscending();
        void OrderAscending(bool value);
        hstring SearchFilter();
        void SearchFilter(hstring const& value);
        hstring SocialGroup();
        void SocialGroup(hstring const& value);

    private:
		hstring m_serviceConfigurationId{ L"" };
		hstring m_sessionTemplateName{ L"" };
		hstring m_orderBy{ L"" };
		bool m_orderAscending{ false };
		hstring m_searchFilter{ L"" };
        hstring m_socialGroup{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerQuerySearchHandleRequest : MultiplayerQuerySearchHandleRequestT<MultiplayerQuerySearchHandleRequest, implementation::MultiplayerQuerySearchHandleRequest>
    {
    };
}