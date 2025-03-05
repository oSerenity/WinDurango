#include "Windows.Xbox.Chat.Format.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct Format : FormatT<Format>
    {
        Format() = default;

        void BitsPerSample(uint32_t value);
        uint32_t BitsPerSample();
        uint32_t Bitrate();
        void ChannelCount(uint32_t value);
        uint32_t ChannelCount();
        void SampleRate(uint32_t value);
        uint32_t SampleRate();
        void Subtype(guid const& value);
        guid Subtype();

    private:
        uint32_t m_bitsPerSample{ 0 };
		uint32_t m_bitrate{ 0 };
		uint32_t m_channelCount{ 0 };
		uint32_t m_sampleRate{ 0 };
		guid m_subtype{ "B2D71B0A-5340-4DBE-8819-79836A236BBF" };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct Format : FormatT<Format, implementation::Format>
    {
    };
}