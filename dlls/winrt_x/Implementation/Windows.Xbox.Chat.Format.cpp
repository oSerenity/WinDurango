#include "pch.h"
#include "Windows.Xbox.Chat.Format.h"
#include "Windows.Xbox.Chat.Format.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    void Format::BitsPerSample(uint32_t value)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		m_bitsPerSample = value;
    }

    uint32_t Format::BitsPerSample()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bitsPerSample;
    }

    uint32_t Format::Bitrate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_bitrate;
    }

    void Format::ChannelCount(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_channelCount = value;
    }

    uint32_t Format::ChannelCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_channelCount;
    }

    void Format::SampleRate(uint32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_sampleRate = value;
    }

    uint32_t Format::SampleRate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_sampleRate;
    }

    void Format::Subtype(guid const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_subtype = value;
    }

    guid Format::Subtype()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_subtype;
    }
}