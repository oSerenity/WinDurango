#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSearchHandleDetails.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference MultiplayerSearchHandleDetails::SessionReference()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionReference;
    }

    hstring MultiplayerSearchHandleDetails::HandleId()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_handleId;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::SessionOwnerXboxUserIds()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_sessionOwnerXboxUserIds;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSearchHandleDetails::Tags()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_tags;
    }

    Windows::Foundation::Collections::IMapView<hstring, double> MultiplayerSearchHandleDetails::NumbersMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_numbersMetadata;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSearchHandleDetails::StringsMetadata()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_stringsMetadata;
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> MultiplayerSearchHandleDetails::RoleTypes()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_roleTypes;
    }

    MultiplayerSessionVisibility MultiplayerSearchHandleDetails::Visibility()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_visibility;
    }

    MultiplayerSessionRestriction MultiplayerSearchHandleDetails::JoinRestriction()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_joinRestriction;
    }

    bool MultiplayerSearchHandleDetails::Closed()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_closed;
    }

    uint32_t MultiplayerSearchHandleDetails::MaxMembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_maxMembersCount;
    }

    uint32_t MultiplayerSearchHandleDetails::MembersCount()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_membersCount;
    }

    Windows::Foundation::DateTime MultiplayerSearchHandleDetails::HandleCreationTime()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_handleCreationTime;
    }

    hstring MultiplayerSearchHandleDetails::CustomSessionPropertiesJson()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_customSessionPropertiesJson;
    }
}