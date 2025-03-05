#include "pch.h"
#include "Windows.Xbox.Chat.ChatParticipant.h"
#include "Windows.Xbox.Chat.ChatParticipant.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatParticipant::ChatParticipant(System::IUser const& user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_user = user;
    }

    System::IUser ChatParticipant::User()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_user;
    }

    ChatParticipantTypes ChatParticipant::ParticipantType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_participantType;
    }

    void ChatParticipant::ParticipantType(ChatParticipantTypes const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_participantType = value;
    }

    float ChatParticipant::Volume()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_volume;
    }

    void ChatParticipant::Volume(float value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_volume = value;
    }

    void ChatParticipant::SynthesizeTextMessageAsAudioBuffers(hstring const& message, Media::SpeechSynthesis::VoiceInformation const& preferredVoice)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_message = message;
		m_preferredVoice = preferredVoice;
    }
}