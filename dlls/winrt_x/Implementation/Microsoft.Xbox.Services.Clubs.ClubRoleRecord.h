#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRoleRecord : ClubRoleRecordT<ClubRoleRecord>
    {
        ClubRoleRecord() = default;

        hstring Xuid();
        ClubRole Role();
        hstring ActorXuid();
        Windows::Foundation::DateTime CreatedDate();

    private:
		hstring m_xuid = MAKE_HSTRING("012345678");
		ClubRole m_role = ClubRole::Owner;
		hstring m_actorXuid = MAKE_HSTRING("8976543210");
		Windows::Foundation::DateTime m_createdDate = Windows::Foundation::DateTime::clock::now();
    };
}