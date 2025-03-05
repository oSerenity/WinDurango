#pragma once
#include "Windows.Xbox.Chat.ChatSession.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatSession : ChatSessionT<ChatSession>
    {
        ChatSession() = default;

        ChatSession(Foundation::TimeSpan const& period, ChatFeatures const& enabledFeatures);
        ChatSession(Foundation::TimeSpan const& period, uint32_t processorAffinity, ChatFeatures const& enabledFeatures);
        Foundation::Collections::IVector<IChatChannel> Channels();
        event_token StateChangedEvent(ChatSessionStateChangedHandler const& handler);
        void StateChangedEvent(event_token const& cookie) noexcept;
        Foundation::IAsyncOperation<IChatSessionState> GetStateAsync();
        void TranscriptionEnabled(int32_t value);
        int32_t TranscriptionEnabled();
        ChatEncoder CreateTranscribingEncoder(IChatParticipant const& participant, IFormat const& sourceFormat, EncodingQuality const& quality);
        event_token TranscribedTextReadyEvent(ChatParticipantTranscribedTextReadyHandler const& handler);
        void TranscribedTextReadyEvent(event_token const& cookie) noexcept;
        ChatRestriction GetParticipantRelationship(IChatParticipant const& sourceParticipant, IChatParticipant const& targetParticipant);
        System::IAudioDeviceInfo GetDedicatedSynthesisDevice(IChatParticipant const& participant);

    private:
		Foundation::TimeSpan m_period{};
		uint32_t m_processorAffinity{ 0 };
		ChatFeatures m_enabledFeatures{};
		Foundation::Collections::IVector<IChatChannel> m_channels = single_threaded_observable_vector<IChatChannel>();
        event_token m_stateChangedEventToken{};
		IChatParticipant m_chatParticipant{ nullptr };
		IFormat m_sourceFormat{ nullptr };
		EncodingQuality m_quality{};
        IChatSessionState m_chatSessionState{};
        int32_t m_transcriptionEnabled{ 0 };
        ChatEncoder m_chatEncoder{ nullptr };
		event_token m_transcribedTextReadyEventToken{};
		ChatRestriction m_chatRestriction = ChatRestriction::None;
		System::IAudioDeviceInfo m_audioDeviceInfo{ nullptr };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatSession : ChatSessionT<ChatSession, implementation::ChatSession>
    {
    };
}