#include "pch.h"

#include <algorithm>
#include <fstream>
#include <iterator>
#include <string_view>

#include <winrt/Windows.Storage.h>
#include <winrt/base.h>

using namespace winrt::Windows::Storage;

namespace
{
	void NormalizeConfigText(std::string& text)
	{
		// UTF-8 BOM (common from some editors)
		if (text.size() >= 3u &&
			static_cast<unsigned char>(text[0]) == 0xEFu &&
			static_cast<unsigned char>(text[1]) == 0xBBu &&
			static_cast<unsigned char>(text[2]) == 0xBFu)
		{
			text.erase(0, 3);
		}

		// CRLF / lone CR -> LF (toml++ is strict about raw control chars in strings)
		std::string normalized;
		normalized.reserve(text.size());
		for (size_t i = 0; i < text.size(); ++i)
		{
			const char c = text[i];
			if (c == '\r')
			{
				if (i + 1 < text.size() && text[i + 1] == '\n')
				{
					normalized.push_back('\n');
					++i;
				}
				else
				{
					normalized.push_back('\n');
				}
			}
			else
			{
				normalized.push_back(c);
			}
		}
		text.swap(normalized);

		// NUL bytes break the lexer
		text.erase(std::remove(text.begin(), text.end(), '\0'), text.end());
	}
}

WinDurangoConfig& WinDurangoConfig::Instance()
{
	static WinDurangoConfig instance;
	return instance;
}

WinDurangoConfigData WinDurangoConfig::GetData() const
{
	return _data;
}

void WinDurangoConfig::SetData(const WinDurangoConfigData& data)
{
	_data = data;
}

void WinDurangoConfig::ProcessConfigFile()
{
	try
	{
		// Use only synchronous WinRT (LocalFolder().Path()) — never .get() on IAsync* from the ASTA/UI
		// thread; WinRT's check_sta_blocking_wait() aborts that (see User ctor -> Instance -> here).
		StorageFolder const localFolder = ApplicationData::Current().LocalFolder();
		const std::wstring folderPath = std::wstring(localFolder.Path());
		const path cfgPath = path(folderPath) / L"config.toml";
		LOG_INFO("WinDurangoConfig: config path is %S\n", cfgPath.c_str());

		if (!exists(cfgPath)) {
			std::error_code ec;
			create_directories(cfgPath.parent_path(), ec);
			std::ofstream out(cfgPath, std::ios::binary | std::ios::trunc);
			if (!out) {
				LOG_ERROR("WinDurangoConfig: failed to create config.toml");
				return;
			}
			std::string bootstrap{default_config_data};
			NormalizeConfigText(bootstrap);
			out.write(bootstrap.data(), static_cast<std::streamsize>(bootstrap.size()));
		}

		std::ifstream in(cfgPath, std::ios::binary);
		if (!in) {
			LOG_ERROR("WinDurangoConfig: failed to open config.toml");
			return;
		}
		std::string ConfigData((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
		NormalizeConfigText(ConfigData);

		auto tbl = toml::parse(ConfigData);

		auto gamertag_opt = tbl["WinDurango"]["Gamertag"].value<std::string_view>();
		auto gamerscore_opt = tbl["WinDurango"]["Gamerscore"].value<int>();
		auto reputation_opt = tbl["WinDurango"]["Reputation"].value<int>();
		auto agegroup_opt = tbl["WinDurango"]["AgeGroup"].value<std::string_view>();
		auto game_opt = tbl["WinDurango"]["Game"].value<std::string_view>();

		auto a_opt = tbl["KeyboardMapping"]["A"].value<int>();
		auto b_opt = tbl["KeyboardMapping"]["B"].value<int>();
		auto x_opt = tbl["KeyboardMapping"]["X"].value<int>();
		auto y_opt = tbl["KeyboardMapping"]["Y"].value<int>();
		auto up_opt = tbl["KeyboardMapping"]["Up"].value<int>();
		auto down_opt = tbl["KeyboardMapping"]["Down"].value<int>();
		auto left_opt = tbl["KeyboardMapping"]["Left"].value<int>();
		auto right_opt = tbl["KeyboardMapping"]["Right"].value<int>();
		auto menu_opt = tbl["KeyboardMapping"]["Menu"].value<int>();
		auto view_opt = tbl["KeyboardMapping"]["View"].value<int>();
		auto lThumb_opt = tbl["KeyboardMapping"]["LThumb"].value<int>();
		auto rThumb_opt = tbl["KeyboardMapping"]["RThumb"].value<int>();
		auto lShoulder_opt = tbl["KeyboardMapping"]["LShoulder"].value<int>();
		auto rShoulder_opt = tbl["KeyboardMapping"]["RShoulder"].value<int>();
		auto lTrigger_opt = tbl["KeyboardMapping"]["LTrigger"].value<int>();
		auto rTrigger_opt = tbl["KeyboardMapping"]["RTrigger"].value<int>();
		auto movThumbY_opt = tbl["KeyboardMapping"]["MovThumbY"].value<int>();
		auto movThumbYM_opt = tbl["KeyboardMapping"]["MovThumbYM"].value<int>();
		auto movThumbX_opt = tbl["KeyboardMapping"]["MovThumbX"].value<int>();
		auto movThumbXM_opt = tbl["KeyboardMapping"]["MovThumbXM"].value<int>();
		auto movStick_opt = tbl["KeyboardMapping"]["MovementStick"].value<std::string_view>();
		auto mouseStick_opt = tbl["KeyboardMapping"]["MouseStick"].value<std::string_view>();
		auto log_opt = tbl["KeyboardMapping"]["logging"].value<bool>();

		const WinDurangoConfigData data
		{
			.gamertag = std::string(gamertag_opt.value_or("WinDurango")),
			.gamerscore = gamerscore_opt.value_or(0),
			.reputation = reputation_opt.value_or(0),
			.ageGroup =
				agegroup_opt.has_value()
					? (agegroup_opt.value_or("Adult") == "Child" ? WinDurangoConfigData::AgeGroup::Child
						: agegroup_opt.value_or("Adult") == "Teen" ? WinDurangoConfigData::AgeGroup::Teen
						: agegroup_opt.value_or("Adult") == "Adult" ? WinDurangoConfigData::AgeGroup::Adult
						: WinDurangoConfigData::AgeGroup::Unknown)
					: WinDurangoConfigData::AgeGroup::Unknown,
			.game =
				game_opt.has_value()
					? (game_opt.value_or("") == "Minecraft" ? WinDurangoConfigData::Game::Minecraft
						: game_opt.value_or("") == "Forza Horizon 2" ? WinDurangoConfigData::Game::Forza_Horizon_2
						: WinDurangoConfigData::Game::Unknown)
					: WinDurangoConfigData::Game::Unknown,
			.a = a_opt.value_or(32),
			.b = b_opt.value_or(81),
			.x = x_opt.value_or(82),
			.y = y_opt.value_or(69),
			.up = up_opt.value_or(38),
			.down = down_opt.value_or(40),
			.left = left_opt.value_or(37),
			.right = right_opt.value_or(39),
			.menu = menu_opt.value_or(13),
			.view = view_opt.value_or(27),
			.lThumb = lThumb_opt.value_or(161),
			.rThumb = rThumb_opt.value_or(160),
			.lShoulder = lShoulder_opt.value_or(162),
			.rShoulder = rShoulder_opt.value_or(163),
			.lTrigger = lTrigger_opt.value_or(2),
			.rTrigger = rTrigger_opt.value_or(1),
			.movementThumbY = movThumbY_opt.value_or(87),
			.movementThumbYM = movThumbYM_opt.value_or(83),
			.movementThumbX = movThumbX_opt.value_or(68),
			.movementThumbXM = movThumbXM_opt.value_or(65),
			.movementStick = std::string(movStick_opt.value_or("left")),
			.mouseStick = std::string(mouseStick_opt.value_or("right")),
			.logging = log_opt.value_or(true),
		};

		SetData(data);
	}
	catch (const toml::parse_error& err)
	{
		LOG_ERROR(
			"Couldn't parse config.toml (%s). Fix or delete the file under LocalState to regenerate defaults.\n",
			err.what());
	}
	catch (const std::exception& exception)
	{
		LOG_ERROR("WinDurangoConfig exception: %s\n", exception.what());
	}
}

WinDurangoConfig::WinDurangoConfig()
{
	ProcessConfigFile();
}

// TODO: What is this for?
bool GetLoggingCfg()
{
	return WinDurangoConfig::Instance().GetData().logging;
}