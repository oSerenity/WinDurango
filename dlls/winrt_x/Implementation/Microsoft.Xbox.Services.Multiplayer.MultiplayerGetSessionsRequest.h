#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerGetSessionsRequest.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerGetSessionsRequest : MultiplayerGetSessionsRequestT<MultiplayerGetSessionsRequest>
    {
        MultiplayerGetSessionsRequest() = default;

        MultiplayerGetSessionsRequest(hstring const& serviceConfigurationId, uint32_t maxItems);
        hstring ServiceConfigurationId();
        uint32_t MaxItems();
        bool IncludePrivateSessions();
        void IncludePrivateSessions(bool value);
        bool IncludeReservations();
        void IncludeReservations(bool value);
        bool IncludeInactiveSessions();
        void IncludeInactiveSessions(bool value);
        hstring XboxUserIdFilter();
        void XboxUserIdFilter(hstring const& value);
        Windows::Foundation::Collections::IVectorView<hstring> XboxUserIdsFilter();
        void XboxUserIdsFilter(Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds);
        hstring KeywordFilter();
        void KeywordFilter(hstring const& value);
        hstring SessionTemplateNameFilter();
        void SessionTemplateNameFilter(hstring const& value);
        MultiplayerSessionVisibility VisibilityFilter();
        void VisibilityFilter(MultiplayerSessionVisibility const& value);
        uint32_t ContractVersionFilter();
        void ContractVersionFilter(uint32_t value);

    private:
        hstring m_serviceConfigurationId{ L"" };
		uint32_t m_maxItems{ 0 };
		bool m_includePrivateSessions{ false };
		bool m_includeReservations{ false };
		bool m_includeInactiveSessions{ false };
        hstring m_xboxUserIdFilter{ L"" };
        Windows::Foundation::Collections::IVectorView<hstring> m_xboxUserIdsFilter = single_threaded_vector<hstring>().GetView();
		hstring m_keywordFilter{ L"" };
        hstring m_sessionTemplateNameFilter{ L"" };
		MultiplayerSessionVisibility m_visibilityFilter{ MultiplayerSessionVisibility::Unknown };
		uint32_t m_contractVersionFilter{ 0 };
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerGetSessionsRequest : MultiplayerGetSessionsRequestT<MultiplayerGetSessionsRequest, implementation::MultiplayerGetSessionsRequest>
    {
    };
}