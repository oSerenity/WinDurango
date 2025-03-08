#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.h"
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    Networking::SecureDeviceAssociationTemplate SecureDeviceAssociationTemplate::GetTemplateByName(hstring const& name)
    {
		LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::Collections::IVectorView<Networking::SecureDeviceAssociationTemplate> SecureDeviceAssociationTemplate::Templates()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_templates;
    }
    event_token SecureDeviceAssociationTemplate::AssociationIncoming(Foundation::TypedEventHandler<Networking::SecureDeviceAssociationTemplate, SecureDeviceAssociationIncomingEventArgs> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_associationIncoming.add(handler);
    }

    void SecureDeviceAssociationTemplate::AssociationIncoming(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_associationIncoming.remove(token);
    }
	
    Foundation::IAsyncOperation<SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationAsync(SecureDeviceAddress secureDeviceAddress, CreateSecureDeviceAssociationBehavior behavior)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_association;
    }

    Foundation::IAsyncOperation<SecureDeviceAssociation> SecureDeviceAssociationTemplate::CreateAssociationForPortsAsync(SecureDeviceAddress secureDeviceAddress, CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_association;
    }

    Foundation::IAsyncOperation<Storage::Streams::IBuffer> SecureDeviceAssociationTemplate::CreateCertificateRequestAsync(hstring subjectName)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		co_return m_certificateBuffer;
    }

    Foundation::IAsyncAction SecureDeviceAssociationTemplate::InstallCertificateAsync(Storage::Streams::IBuffer certificateBuffer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    hstring SecureDeviceAssociationTemplate::Name()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_name;
    }

    SecureDeviceSocketDescription SecureDeviceAssociationTemplate::InitiatorSocketDescription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_initiatorSocketDescription;
    }

    SecureDeviceSocketDescription SecureDeviceAssociationTemplate::AcceptorSocketDescription()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_acceptorSocketDescription;
    }

    SecureDeviceAssociationUsage SecureDeviceAssociationTemplate::AllowedUsages()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_allowedUsages;
    }

	hstring SecureDeviceAssociationTemplate::RelyingParty()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_relyingParty;
    }

    Foundation::Collections::IVectorView<ProtocolParserDescription> SecureDeviceAssociationTemplate::ProtocolParserDescriptions()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_protocolParserDescriptions;
    }

    Foundation::Collections::IVectorView<QualityOfServiceMetric> SecureDeviceAssociationTemplate::QualityOfServiceMetricPathPriorities()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_qualityOfServiceMetricPathPriorities;
    }

    MultiplayerSessionRequirement SecureDeviceAssociationTemplate::MultiplayerSessionRequirement()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_multiplayerSessionRequirement;
    }

    Foundation::Collections::IVectorView<SecureDeviceAssociation> SecureDeviceAssociationTemplate::Associations()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_associations;
    }
}