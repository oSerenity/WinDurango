#pragma once
#include "Windows.Xbox.System.UserDisplayInfo.g.h"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.


namespace winrt::Windows::Xbox::System::implementation
{
    struct UserDisplayInfo : UserDisplayInfoT<UserDisplayInfo>
    {
        UserDisplayInfo() = default;

        hstring Gamertag();
        uint32_t GamerScore();
        hstring ApplicationDisplayName();
        hstring GameDisplayName();
        int32_t Reputation();
        winrt::Windows::Xbox::System::UserAgeGroup AgeGroup();
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> Privileges();
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> GetApplicationPictureAsync(winrt::Windows::Xbox::System::UserPictureSize size, winrt::Windows::Storage::Streams::IBuffer buffer);
        winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetPictureResult> GetGamerPictureAsync(winrt::Windows::Xbox::System::UserPictureSize size, winrt::Windows::Storage::Streams::IBuffer buffer);
    };
}