#pragma once
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.h"

namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    struct ClubRoster : ClubRosterT<ClubRoster>
    {
        ClubRoster() = default;

        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> Moderators();
        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> RequestedToJoin();
        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> Recommended();
        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> Banned();

    private:
        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> m_moderators = single_threaded_vector<ClubRoleRecord>().GetView();
        Windows::Foundation::Collections::IVectorView<ClubRoleRecord> m_requestedToJoin = single_threaded_vector<ClubRoleRecord>().GetView();
		Windows::Foundation::Collections::IVectorView<ClubRoleRecord> m_recommended = single_threaded_vector<ClubRoleRecord>().GetView();
		Windows::Foundation::Collections::IVectorView<ClubRoleRecord> m_banned = single_threaded_vector<ClubRoleRecord>().GetView();
    };
}