#pragma once
#include "Windows.Xbox.Chat.ChatParticipant.g.h"

namespace winrt::Windows::Xbox::Chat::implementation
{
    struct ChatParticipant : ChatParticipantT<ChatParticipant>
    {
		ChatParticipant() = default;

        ChatParticipant(System::IUser const& user);
        System::IUser User();
        ChatParticipantTypes ParticipantType();
        void ParticipantType(ChatParticipantTypes const& value);
        float Volume();
        void Volume(float value);
        void SynthesizeTextMessageAsAudioBuffers(hstring const& message, Media::SpeechSynthesis::VoiceInformation const& preferredVoice);

    private:
		System::IUser m_user{ nullptr };
		ChatParticipantTypes m_participantType{ ChatParticipantTypes::None };
		float m_volume{ 0.0f };
        hstring m_message{ L"" };
		Media::SpeechSynthesis::VoiceInformation m_preferredVoice{ nullptr };
    };
}

namespace winrt::Windows::Xbox::Chat::factory_implementation
{
    struct ChatParticipant : ChatParticipantT<ChatParticipant, implementation::ChatParticipant>
    {
    };
}