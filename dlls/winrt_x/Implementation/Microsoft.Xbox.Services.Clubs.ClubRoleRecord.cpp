#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubRoleRecord::Xuid()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_xuid;
    }

    ClubRole ClubRoleRecord::Role()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_role;
    }

    hstring ClubRoleRecord::ActorXuid()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        return m_actorXuid;
    }

    Windows::Foundation::DateTime ClubRoleRecord::CreatedDate()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

		return m_createdDate;
    }
}
