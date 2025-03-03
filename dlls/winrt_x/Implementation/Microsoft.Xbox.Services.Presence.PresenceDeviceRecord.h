#pragma once
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    struct PresenceDeviceRecord : PresenceDeviceRecordT<PresenceDeviceRecord>
    {
        PresenceDeviceRecord() = default;

        PresenceDeviceType DeviceType();
        Windows::Foundation::Collections::IVectorView<PresenceTitleRecord> PresenceTitleRecords();

    private:
        PresenceDeviceType m_deviceType{ PresenceDeviceType::PC };
        Windows::Foundation::Collections::IVectorView<PresenceTitleRecord> m_presenceTitleRecords{ single_threaded_vector<PresenceTitleRecord>().GetView() };
    };
}