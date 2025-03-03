#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    PresenceDeviceType PresenceDeviceRecord::DeviceType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_deviceType;
    }

    Windows::Foundation::Collections::IVectorView<PresenceTitleRecord> PresenceDeviceRecord::PresenceTitleRecords()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_presenceTitleRecords;
    }
}