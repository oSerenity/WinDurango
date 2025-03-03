#pragma once
#include "Microsoft.Xbox.Services.GameServerPlatform.QualityOfServiceServer.g.h"

namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    struct QualityOfServiceServer : QualityOfServiceServerT<QualityOfServiceServer>
    {
        QualityOfServiceServer() = default;

        hstring ServerFullQualifiedDomainName();
        hstring SecureDeviceAddressBase64();
        hstring TargetLocation();

    private:
		hstring m_serverFullQualifiedDomainName{ L"serverFullQualifiedDomainName" };
		hstring m_secureDeviceAddressBase64{ L"secureDeviceAddressBase64" };
		hstring m_targetLocation{ L"targetLocation" };
    };
}