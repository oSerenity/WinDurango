#pragma once
#include <common.h>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include "WinDurangoConfig.h"

using namespace std::filesystem;
using namespace std::string_view_literals;

#define LOG_FUNCTION_NAME() printf("[%s]\n", __FUNCSIG__)
#define PRINT_UNIMPLEMENTED_FUNCTION() printf("Unimplemented function: %s\n", __FUNCSIG__)
#define MAKE_HSTRING(str) winrt::hstring(std::wstring(str, (str) + strlen(str)))
#define DATETIME_NOW() \
	[]() -> Windows::Foundation::DateTime { \
		const auto now = std::chrono::system_clock::now(); \
		const auto duration = now.time_since_epoch(); \
		const auto hundred_nanoseconds = std::chrono::duration_cast<Windows::Foundation::TimeSpan>(duration); \
		return Windows::Foundation::DateTime{ hundred_nanoseconds }; \
	}()
#define EMPTY_IVECTOR(T) winrt::single_threaded_vector<T>()
#define EMPTY_IMAP(K, V) winrt::single_threaded_map<K, V>();
#define EMPTY_IMAPVIEW(K, V) winrt::single_threaded_map<K, V>().GetView()


#define MEMBER_ID                               1234567890
#define TEAM_ID                                 MAKE_HSTRING("0987654321")
#define XBOX_USER_ID                            MAKE_HSTRING("0987612345")
#define CUSTOM_JSON_CONSTANTS                   MAKE_HSTRING("{}")
#define CUSTOM_JSON_PROPS                       MAKE_HSTRING("{}")
#define SECURE_BASE_64                          MAKE_HSTRING("1234567890qwerty")
#define GAMERTAG                                MAKE_HSTRING("Durangler1")
#define RESULTS_SERVER_MEASUREMENTS_JSON        MAKE_HSTRING("{}")
#define SERVER_MEASUREMENTS_JSON                MAKE_HSTRING("{}")
#define DEVICE_ID                               MAKE_HSTRING("device01234567890")
#define ACTIVE_TITLE_ID                         69420

inline std::string WStringToUTF8(const std::wstring& wstr) {
	if (wstr.empty()) return {};

	const int size_needed = WideCharToMultiByte(CP_UTF8,
		0,
		wstr.data(),
		static_cast<int>(wstr.size()),
		nullptr,
		0,
		nullptr,
		nullptr);

	std::string str(size_needed, 0);

	WideCharToMultiByte(CP_UTF8, 0, wstr.data(), static_cast<int>(wstr.size()), str.data(), size_needed, nullptr, nullptr);
	
	return str;
}

inline std::wstring UTF8ToWString(const std::string& str) {
	if (str.empty()) return {};

	const int size_needed = MultiByteToWideChar(CP_UTF8,
		0,
		str.data(),
		static_cast<int>(str.size()),
		nullptr,
		0);

	std::wstring wstr(size_needed, 0);

	MultiByteToWideChar(CP_UTF8, 0, str.data(), static_cast<int>(str.size()), wstr.data(), size_needed);
	
	return wstr;
}

static constexpr auto default_config_data =
R"(
[WinDurango]
Gamertag = "TheDurangler"
Gamerscore = 1500
Reputation = 5
Game = "Unknown"
AgeGroup = "Adult"

[KeyboardMapping]
A = 32
B = 81
X = 82
Y = 69
Up = 38
Down = 40
Left = 37
Right = 39
Menu = 13
View = 27
LThumb = 161
RThumb = 160
LShoulder = 162
RShoulder = 163
LTrigger = 2
RTrigger = 1
MovThumbY = 87
MovThumbYM = 83
MovThumbX = 68
MovThumbXM = 65
MovementStick = "Left"
MouseStick = "Right"
logging = true
)"sv;