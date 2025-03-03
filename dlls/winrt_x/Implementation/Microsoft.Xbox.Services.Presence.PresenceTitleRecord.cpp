#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    uint32_t PresenceTitleRecord::TitleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleId;
    }

    hstring PresenceTitleRecord::TitleName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_titleName;
    }

    Windows::Foundation::DateTime PresenceTitleRecord::LastModifiedDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_lastModifiedDate;
    }

    bool PresenceTitleRecord::IsTitleActive()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isTitleActive;
    }

    hstring PresenceTitleRecord::Presence()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presence;
    }

    PresenceTitleViewState PresenceTitleRecord::TitleViewState()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_titleViewState;
    }

    PresenceBroadcastRecord PresenceTitleRecord::BroadcastRecord()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_broadcastRecord;
    }
}