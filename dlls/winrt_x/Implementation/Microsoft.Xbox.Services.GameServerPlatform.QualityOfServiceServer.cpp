#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.QualityOfServiceServer.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.QualityOfServiceServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring QualityOfServiceServer::ServerFullQualifiedDomainName()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_serverFullQualifiedDomainName;
    }

    hstring QualityOfServiceServer::SecureDeviceAddressBase64()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_secureDeviceAddressBase64;
    }

    hstring QualityOfServiceServer::TargetLocation()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_targetLocation;
    }
}