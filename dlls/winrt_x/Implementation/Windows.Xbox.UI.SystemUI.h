#pragma once
#include "Windows.Xbox.UI.SystemUI.g.h"

namespace winrt::Windows::Xbox::UI::implementation
{
    struct SystemUI
    {
        SystemUI() = default;

        static Foundation::IAsyncAction ShowEpgAsync(System::IUser requestingUser, Foundation::Collections::IIterable<Foundation::Collections::IKeyValuePair<hstring, Foundation::IInspectable>> propertySet);
        static Foundation::IAsyncAction ShowMiniguideAsync(System::IUser requestingUser);
        static Foundation::IAsyncAction ShowProfileCardAsync(System::IUser requestingUser, hstring targetXuid);
        static Foundation::IAsyncAction ShowSendInvitesAsync(System::IUser requestingUser);
        static Foundation::IAsyncOperation<AccountPickerResult> ShowAccountPickerAsync(Input::IController controller, AccountPickerOptions options);
        static Foundation::IAsyncOperation<hstring> ShowVirtualKeyboardAsync(hstring defaultText, hstring titleText, hstring descriptionText, VirtualKeyboardInputScope inputScope);
        static Foundation::IAsyncAction LaunchPartyAsync(System::IUser requestingUser);
        static Foundation::IAsyncAction LaunchAchievementsAsync(System::IUser requestingUser, uint32_t titleId);
        static Foundation::IAsyncAction ShowPartyAndSendPartyInvitesAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> recipientUserIdList);
        static Foundation::IAsyncAction ShowCreateLookingForGroupAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> preselectedTags, hstring preselectedDescription, uint32_t defaultNeedCount);
        static Foundation::IAsyncAction ShowUserLookingForGroupsAsync(System::IUser requestingUser);
        static Foundation::IAsyncAction ShowLookingForGroupResultsAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> tags);
        static Foundation::IAsyncAction LaunchKinectSetupAsync(System::IUser requestingUser);
        static Foundation::IAsyncAction LaunchRecentPlayersAsync(System::IUser requestingUser);
        static Foundation::IAsyncAction SnapDefaultBroadcastApp(System::IUser requestingUser);
        static Foundation::IAsyncAction ShowComposeMessageAsync(System::IUser requestingUser, hstring defaultMessageText, Foundation::Collections::IVector<hstring> recipientUserIdList);
        static Foundation::IAsyncOperation<AddRemoveFriendResult> ShowAddRemoveFriendAsync(System::IUser requestingUser, hstring targetUserId);
        static Foundation::IAsyncOperation<Foundation::Collections::IVectorView<hstring>> ShowPeoplePickerAsync(System::IUser requestingUser, hstring promptText, Foundation::Collections::IVectorView<hstring> selectFromUserIdList, Foundation::Collections::IVectorView<hstring> preselectedUserIdList, uint32_t minimumSelectionCount, uint32_t maximumSelectionCount);
        static Foundation::IAsyncOperation<bool> TrySnapSelf();
        static Foundation::IAsyncOperation<bool> TrySnapOther(Foundation::Uri snapTargetUri, System::IUser user);
        static Foundation::IAsyncAction ShowMiniguideWithCommandAsync(System::IUser requestingUser, MiniguideCommand initialCommand);
        static Foundation::IAsyncOperation<hstring> ShowVirtualKeyboardWithOptionsAsync(KeyboardOptions options);
        static void SetNotificationPositionHint(NotificationPositionHint const& value);
        static Foundation::IAsyncOperation<WebAuthenticationResult> AuthenticateAsync(System::IUser requestingUser, WebAuthenticationOptions options, Foundation::Uri requestUri, Foundation::Uri callbackUri);
        static Foundation::IAsyncOperation<WebAuthenticationResult> AuthenticateAsync(System::IUser requestingUser, WebAuthenticationOptions options, Foundation::Uri requestUri);
        static Foundation::Uri GetCurrentApplicationCallbackUri(System::IUser const& requestingUser);
    };
}

namespace winrt::Windows::Xbox::UI::factory_implementation
{
    struct SystemUI : SystemUIT<SystemUI, implementation::SystemUI>
    {
    };
}