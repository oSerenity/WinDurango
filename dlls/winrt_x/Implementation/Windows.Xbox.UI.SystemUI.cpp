// ReSharper disable CppClangTidyPerformanceUnnecessaryValueParam
// ReSharper disable CppParameterNeverUsed
// ReSharper disable CppClangTidyMiscUseInternalLinkage
#include "pch.h"
#include "Windows.Xbox.UI.SystemUI.h"
#include <iostream>
#include "Windows.Xbox.UI.AccountPickerResult.h"
#include "Windows.Xbox.UI.SystemUI.g.cpp"

void* g_pD3D11XEventFunc = nullptr;
void* g_pWDWaitForKeyboardFunc = nullptr;

namespace winrt::Windows::Xbox::UI::implementation
{
    Foundation::IAsyncAction SystemUI::ShowEpgAsync(System::IUser requestingUser, Foundation::Collections::IIterable<Foundation::Collections::IKeyValuePair<hstring, Foundation::IInspectable>> propertySet)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowMiniguideAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowProfileCardAsync(System::IUser requestingUser, hstring targetXuid)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_return;
    }

    Foundation::IAsyncAction SystemUI::ShowSendInvitesAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<UI::AccountPickerResult> SystemUI::ShowAccountPickerAsync(Input::IController controller, AccountPickerOptions options)
    {
		printf("TODO: SystemUI::ShowAccountPickerAsync (this function just returns the first user in User::Users)\n");
        co_return winrt::make<AccountPickerResult>( );
    }

    Foundation::IAsyncOperation<hstring> SystemUI::ShowVirtualKeyboardAsync(hstring defaultText, hstring titleText, hstring descriptionText, VirtualKeyboardInputScope inputScope)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        co_await resume_background( );

		if (!g_pD3D11XEventFunc && !g_pWDWaitForKeyboardFunc)
		{
			g_pD3D11XEventFunc = GetProcAddress(GetModuleHandle(L"d3d11_x.dll"), "WD11XNotify");
			g_pWDWaitForKeyboardFunc = GetProcAddress(GetModuleHandle(L"d3d11_x.dll"), "WDWaitForKeyboard");
		}

        reinterpret_cast<void(__stdcall*)(int)>(g_pD3D11XEventFunc)(1);

		const char* text = nullptr;
		reinterpret_cast<void(__stdcall*)(const char**)>(g_pWDWaitForKeyboardFunc)(&text);

        co_return to_hstring(text);
    }

    Foundation::IAsyncAction SystemUI::LaunchPartyAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::LaunchAchievementsAsync(System::IUser requestingUser, uint32_t titleId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowPartyAndSendPartyInvitesAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> recipientUserIdList)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowCreateLookingForGroupAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> preselectedTags, hstring preselectedDescription, uint32_t defaultNeedCount)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowUserLookingForGroupsAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowLookingForGroupResultsAsync(System::IUser requestingUser, Foundation::Collections::IVectorView<hstring> tags)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::LaunchKinectSetupAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::LaunchRecentPlayersAsync(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::SnapDefaultBroadcastApp(System::IUser requestingUser)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowComposeMessageAsync(System::IUser requestingUser, hstring defaultMessageText, Foundation::Collections::IVector<hstring> recipientUserIdList)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<AddRemoveFriendResult> SystemUI::ShowAddRemoveFriendAsync(System::IUser requestingUser, hstring targetUserId)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<Foundation::Collections::IVectorView<hstring>> SystemUI::ShowPeoplePickerAsync(System::IUser requestingUser, hstring promptText, Foundation::Collections::IVectorView<hstring> selectFromUserIdList, Foundation::Collections::IVectorView<hstring> preselectedUserIdList, uint32_t minimumSelectionCount, uint32_t maximumSelectionCount)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<bool> SystemUI::TrySnapSelf()
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<bool> SystemUI::TrySnapOther(Foundation::Uri snapTargetUri, System::IUser user)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncAction SystemUI::ShowMiniguideWithCommandAsync(System::IUser requestingUser, MiniguideCommand initialCommand)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<hstring> SystemUI::ShowVirtualKeyboardWithOptionsAsync(KeyboardOptions options)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    void SystemUI::SetNotificationPositionHint(NotificationPositionHint const& value)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<WebAuthenticationResult> SystemUI::AuthenticateAsync(System::IUser requestingUser, WebAuthenticationOptions options, Foundation::Uri requestUri, Foundation::Uri callbackUri)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::IAsyncOperation<WebAuthenticationResult> SystemUI::AuthenticateAsync(System::IUser requestingUser, WebAuthenticationOptions options, Foundation::Uri requestUri)
    {
        LOG_FUNCTION_NAME();
        PRINT_UNIMPLEMENTED_FUNCTION();

        throw hresult_not_implemented();
    }

    Foundation::Uri SystemUI::GetCurrentApplicationCallbackUri(System::IUser const& requestingUser)
    {
        LOG_FUNCTION_NAME();
		PRINT_UNIMPLEMENTED_FUNCTION();

		throw hresult_not_implemented();
    }
}