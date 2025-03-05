#include "pch.h"
#include "Windows.Xbox.Chat.ChatSession.h"
#include "Windows.Xbox.Chat.ChatSession.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatSession::ChatSession(Foundation::TimeSpan const& period, ChatFeatures const& enabledFeatures)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_period = period;
		m_enabledFeatures = enabledFeatures;
    }

    ChatSession::ChatSession(Foundation::TimeSpan const& period, uint32_t processorAffinity, ChatFeatures const& enabledFeatures)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_period = period;
		m_processorAffinity = processorAffinity;
		m_enabledFeatures = enabledFeatures;
    }

    Foundation::Collections::IVector<IChatChannel> ChatSession::Channels()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_channels;
    }

    event_token ChatSession::StateChangedEvent(ChatSessionStateChangedHandler const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_stateChangedEventToken;
    }

    void ChatSession::StateChangedEvent(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_stateChangedEventToken = cookie;
    }

    Foundation::IAsyncOperation<IChatSessionState> ChatSession::GetStateAsync()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_chatSessionState;
    }

    void ChatSession::TranscriptionEnabled(int32_t value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_transcriptionEnabled = value;
    }

    int32_t ChatSession::TranscriptionEnabled()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_transcriptionEnabled;
    }

    ChatEncoder ChatSession::CreateTranscribingEncoder(IChatParticipant const& participant, IFormat const& sourceFormat, EncodingQuality const& quality)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }

    event_token ChatSession::TranscribedTextReadyEvent(ChatParticipantTranscribedTextReadyHandler const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_transcribedTextReadyEventToken;
    }

    void ChatSession::TranscribedTextReadyEvent(event_token const& cookie) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_transcribedTextReadyEventToken = cookie;
    }

    ChatRestriction ChatSession::GetParticipantRelationship(IChatParticipant const& sourceParticipant, IChatParticipant const& targetParticipant)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_chatRestriction;
    }

    System::IAudioDeviceInfo ChatSession::GetDedicatedSynthesisDevice(IChatParticipant const& participant)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_audioDeviceInfo;
    }
}