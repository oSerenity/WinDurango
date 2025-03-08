#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.h"
#include "Windows.Xbox.Networking.SecureDeviceAddress.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    SecureDeviceAddress::SecureDeviceAddress(Storage::Streams::IBuffer const& buffer)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_buffer = buffer;
    }

    int32_t SecureDeviceAddress::CompareBuffers(Storage::Streams::IBuffer const& buffer1, Storage::Streams::IBuffer const& buffer2)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return EQUAL;
    }

    int32_t SecureDeviceAddress::CompareBytes(array_view<uint8_t const> bytes1, array_view<uint8_t const> bytes2)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return EQUAL;
    }

    Networking::SecureDeviceAddress SecureDeviceAddress::FromBytes(array_view<uint8_t const> bytes)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Networking::SecureDeviceAddress SecureDeviceAddress::GetLocal()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Networking::SecureDeviceAddress SecureDeviceAddress::CreateDedicatedServerAddress(hstring const& hostnameOrAddress)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Networking::SecureDeviceAddress SecureDeviceAddress::FromBase64String(hstring const& base64String)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    event_token SecureDeviceAddress::BufferChanged(Foundation::TypedEventHandler<Networking::SecureDeviceAddress, Foundation::IInspectable> const& handler)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_bufferChanged.add(handler);
    }

    void SecureDeviceAddress::BufferChanged(event_token const& token) noexcept
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		m_bufferChanged.remove(token);
    }

    Storage::Streams::IBuffer SecureDeviceAddress::GetBuffer()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_buffer;
    }

    int32_t SecureDeviceAddress::Compare(Networking::SecureDeviceAddress const& secureDeviceAddress)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return EQUAL;
    }

    hstring SecureDeviceAddress::GetBase64String()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		// TODO: Convert buffer to a base64 string.

        return L"";
    }

    bool SecureDeviceAddress::IsLocal()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_isLocal;
    }

    NetworkAccessType SecureDeviceAddress::NetworkAccessType()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_networkAccessType;
    }
}