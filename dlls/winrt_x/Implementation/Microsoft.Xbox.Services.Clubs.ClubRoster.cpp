#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    Windows::Foundation::Collections::IVectorView<ClubRoleRecord> ClubRoster::Moderators()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_moderators;
    }

    Windows::Foundation::Collections::IVectorView<ClubRoleRecord> ClubRoster::RequestedToJoin()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_requestedToJoin;
    }

    Windows::Foundation::Collections::IVectorView<ClubRoleRecord> ClubRoster::Recommended()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_recommended;
    }

    Windows::Foundation::Collections::IVectorView<ClubRoleRecord> ClubRoster::Banned()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_banned;
    }
}
