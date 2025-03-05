#pragma once
#include "Windows.Xbox.Input.BodyHandPair.g.h"

namespace winrt::Windows::Xbox::Input::implementation
{
    struct BodyHandPair : BodyHandPairT<BodyHandPair>
    {
        BodyHandPair() = default;

        uint64_t BodyTrackingId();
        void BodyTrackingId(uint64_t trackingId);

    private:
		uint64_t m_bodyTrackingId{ 0 };
    };
}

namespace winrt::Windows::Xbox::Input::factory_implementation
{
    struct BodyHandPair : BodyHandPairT<BodyHandPair, implementation::BodyHandPair>
    {
    };
}