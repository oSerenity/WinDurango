#include "pch.h"
#include "Windows.Xbox.Input.BodyHandPair.h"
#include "Windows.Xbox.Input.BodyHandPair.g.cpp"

namespace winrt::Windows::Xbox::Input::implementation
{
    uint64_t BodyHandPair::BodyTrackingId()
    {
        LOG_FUNCTION_NAME();

        return m_bodyTrackingId;
    }

    void BodyHandPair::BodyTrackingId(uint64_t trackingId)
    {
        LOG_FUNCTION_NAME();

		m_bodyTrackingId = trackingId;
    }
}