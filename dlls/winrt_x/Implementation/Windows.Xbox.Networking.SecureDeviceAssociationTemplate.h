#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAssociationTemplate.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAssociationTemplate : SecureDeviceAssociationTemplateT<SecureDeviceAssociationTemplate>
    {
        SecureDeviceAssociationTemplate() = default;

        static Networking::SecureDeviceAssociationTemplate GetTemplateByName(hstring const& name);
        static Foundation::Collections::IVectorView<Networking::SecureDeviceAssociationTemplate> Templates();
        event_token AssociationIncoming(Foundation::TypedEventHandler<Networking::SecureDeviceAssociationTemplate, SecureDeviceAssociationIncomingEventArgs> const& handler);
        void AssociationIncoming(event_token const& token) noexcept;
        Foundation::IAsyncOperation<SecureDeviceAssociation> CreateAssociationAsync(SecureDeviceAddress secureDeviceAddress, CreateSecureDeviceAssociationBehavior behavior);
        Foundation::IAsyncOperation<SecureDeviceAssociation> CreateAssociationForPortsAsync(SecureDeviceAddress secureDeviceAddress, CreateSecureDeviceAssociationBehavior behavior, hstring initiatorPort, hstring acceptorPort);
        Foundation::IAsyncOperation<Storage::Streams::IBuffer> CreateCertificateRequestAsync(hstring subjectName);
        Foundation::IAsyncAction InstallCertificateAsync(Storage::Streams::IBuffer certificateBuffer);
        hstring Name();
        SecureDeviceSocketDescription InitiatorSocketDescription();
        SecureDeviceSocketDescription AcceptorSocketDescription();
        SecureDeviceAssociationUsage AllowedUsages();
        hstring RelyingParty();
        Foundation::Collections::IVectorView<ProtocolParserDescription> ProtocolParserDescriptions();
        Foundation::Collections::IVectorView<QualityOfServiceMetric> QualityOfServiceMetricPathPriorities();
        MultiplayerSessionRequirement MultiplayerSessionRequirement();
        Foundation::Collections::IVectorView<SecureDeviceAssociation> Associations();

    private:
		static inline Foundation::Collections::IVectorView<Networking::SecureDeviceAssociationTemplate> m_templates{ single_threaded_vector<Networking::SecureDeviceAssociationTemplate>().GetView() };
		SecureDeviceAssociation m_association{ nullptr };
		event<Foundation::TypedEventHandler<Networking::SecureDeviceAssociationTemplate, SecureDeviceAssociationIncomingEventArgs>> m_associationIncoming{};
    	Foundation::Collections::IVectorView<SecureDeviceAssociation> m_associations{ single_threaded_vector<SecureDeviceAssociation>().GetView() };
		Storage::Streams::IBuffer m_certificateBuffer{ nullptr };
        hstring m_name{ L"" };
		SecureDeviceSocketDescription m_initiatorSocketDescription{ nullptr };
		SecureDeviceSocketDescription m_acceptorSocketDescription{ nullptr };
		SecureDeviceAssociationUsage m_allowedUsages{ SecureDeviceAssociationUsage::AcceptOnMicrosoftConsole };
		hstring m_relyingParty{ L"" };
		Foundation::Collections::IVectorView<ProtocolParserDescription> m_protocolParserDescriptions{ single_threaded_vector<ProtocolParserDescription>().GetView() };
		Foundation::Collections::IVectorView<QualityOfServiceMetric> m_qualityOfServiceMetricPathPriorities{ single_threaded_vector<QualityOfServiceMetric>().GetView() };
		Networking::MultiplayerSessionRequirement m_multiplayerSessionRequirement{ MultiplayerSessionRequirement::None };

    };
}

namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct SecureDeviceAssociationTemplate : SecureDeviceAssociationTemplateT<SecureDeviceAssociationTemplate, implementation::SecureDeviceAssociationTemplate>
    {
    };
}