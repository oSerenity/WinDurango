#pragma once
#include "Windows.Xbox.Networking.Development.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct Development
    {
        Development() = default;

        static SecureDeviceAddress CreateSecureDeviceAddressFromHostNames(SecureDeviceId const& secureDeviceId, Foundation::Collections::IIterable<Windows::Networking::HostName> const& hostNames);
        static SecureDeviceSocketDescription CreateSecureDeviceSocketDescription(hstring const& name, SecureIpProtocol const& secureIpProtocol, uint16_t boundPortRangeLower, uint16_t boundPortRangeUpper, SecureDeviceSocketUsage const& allowedUsages);
        static SecureDeviceAssociationTemplate CreateSecureDeviceAssociationTemplate(hstring const& name, SecureDeviceSocketDescription const& initiatorSecureDeviceSocketDescription, SecureDeviceSocketDescription const& acceptorSecureDeviceSocketDescription, SecureDeviceAssociationUsage const& allowedUsages, hstring const& relyingParty, Foundation::Collections::IIterable<ProtocolParserDescription> const& protocolParserDescriptions, Foundation::Collections::IIterable<QualityOfServiceMetric> const& qualityOfServiceMetricPathPriorities, MultiplayerSessionRequirement const& multiplayerSessionRequirement);

    private:
        static inline SecureDeviceAddress m_secureDeviceAddress{ nullptr };
		static inline SecureDeviceSocketDescription m_secureDeviceSocketDescription{ nullptr };
		static inline SecureDeviceAssociationTemplate m_secureDeviceAssociationTemplate{ nullptr };
    };
}

namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct Development : DevelopmentT<Development, implementation::Development>
    {
    };
}