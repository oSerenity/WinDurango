#include "pch.h"
#include "Windows.Xbox.Networking.Development.h"
#include "Windows.Xbox.Networking.Development.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAddress Development::CreateSecureDeviceAddressFromHostNames(SecureDeviceId const& secureDeviceId, Foundation::Collections::IIterable<Windows::Networking::HostName> const& hostNames)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceAddress;
    }

    SecureDeviceSocketDescription Development::CreateSecureDeviceSocketDescription(hstring const& name, SecureIpProtocol const& secureIpProtocol, uint16_t boundPortRangeLower, uint16_t boundPortRangeUpper, SecureDeviceSocketUsage const& allowedUsages)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceSocketDescription;
    }

    SecureDeviceAssociationTemplate Development::CreateSecureDeviceAssociationTemplate(hstring const& name, SecureDeviceSocketDescription const& initiatorSecureDeviceSocketDescription, SecureDeviceSocketDescription const& acceptorSecureDeviceSocketDescription, SecureDeviceAssociationUsage const& allowedUsages, hstring const& relyingParty, Foundation::Collections::IIterable<ProtocolParserDescription> const& protocolParserDescriptions, Foundation::Collections::IIterable<QualityOfServiceMetric> const& qualityOfServiceMetricPathPriorities, MultiplayerSessionRequirement const& multiplayerSessionRequirement)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceAssociationTemplate;
    }
}