#pragma once
#include "Windows.Xbox.Networking.SecureDeviceAddress.g.h"

namespace winrt::Windows::Xbox::Networking::implementation
{
    struct SecureDeviceAddress : SecureDeviceAddressT<SecureDeviceAddress>
    {
        SecureDeviceAddress() = default;

        SecureDeviceAddress(Storage::Streams::IBuffer const& buffer);
        static int32_t CompareBuffers(Storage::Streams::IBuffer const& buffer1, Storage::Streams::IBuffer const& buffer2);
        static int32_t CompareBytes(array_view<uint8_t const> bytes1, array_view<uint8_t const> bytes2);
        static Networking::SecureDeviceAddress FromBytes(array_view<uint8_t const> bytes);
        static Networking::SecureDeviceAddress GetLocal();
        static Networking::SecureDeviceAddress CreateDedicatedServerAddress(hstring const& hostnameOrAddress);
        static Networking::SecureDeviceAddress FromBase64String(hstring const& base64String);
        event_token BufferChanged(Foundation::TypedEventHandler<Networking::SecureDeviceAddress, Foundation::IInspectable> const& handler);
        void BufferChanged(event_token const& token) noexcept;
        Storage::Streams::IBuffer GetBuffer();
        int32_t Compare(Networking::SecureDeviceAddress const& secureDeviceAddress);
        hstring GetBase64String();
        bool IsLocal();
        NetworkAccessType NetworkAccessType();

    private:
		Storage::Streams::IBuffer m_buffer{ nullptr };
		event<Foundation::TypedEventHandler<Networking::SecureDeviceAddress, Foundation::IInspectable>> m_bufferChanged;
        bool m_isLocal = true;
		Networking::NetworkAccessType m_networkAccessType = Networking::NetworkAccessType::Open;
    };
}

namespace winrt::Windows::Xbox::Networking::factory_implementation
{
    struct SecureDeviceAddress : SecureDeviceAddressT<SecureDeviceAddress, implementation::SecureDeviceAddress>
    {
    };
}