#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionReference : MultiplayerSessionReferenceT<MultiplayerSessionReference>
    {
        MultiplayerSessionReference() = default;

        MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName);
        static Multiplayer::MultiplayerSessionReference ParseFromUriPath(hstring const& uriPath);
        hstring ServiceConfigurationId();
        hstring SessionTemplateName();
        hstring SessionName();
        hstring ToUriPath();

    private:
        hstring m_serviceConfigurationId{ L"" };
        hstring m_sessionTemplateName{ L"" };
        hstring m_sessionName{ L"" };
		hstring m_uriPath{ L"" };
    };
}

namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
    struct MultiplayerSessionReference : MultiplayerSessionReferenceT<MultiplayerSessionReference, implementation::MultiplayerSessionReference>
    {
    };
}