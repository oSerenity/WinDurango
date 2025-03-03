#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceTitleRecord : PresenceTitleRecordT<PresenceTitleRecord>
    {
        PresenceTitleRecord() = default;

        uint32_t TitleId();
        hstring TitleName();
        Windows::Foundation::DateTime LastModifiedDate();
        bool IsTitleActive();
        hstring Presence();
        PresenceTitleViewState TitleViewState();
        PresenceBroadcastRecord BroadcastRecord();

    private:
		uint32_t m_titleId{ 0 };
        hstring m_titleName{ L"" };
		Windows::Foundation::DateTime m_lastModifiedDate{ Windows::Foundation::DateTime::clock::now() };
		bool m_isTitleActive{ false };
		hstring m_presence{ L"" };
		PresenceTitleViewState m_titleViewState{ PresenceTitleViewState::Unknown };
		PresenceBroadcastRecord m_broadcastRecord{ nullptr };
    };
}