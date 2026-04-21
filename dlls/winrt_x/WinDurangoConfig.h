#pragma once
#include <string>

struct WinDurangoConfigData
{
	std::string gamertag{ "TheDurangler1" };
	int gamerscore{ 1500 };
	int reputation{ 5 };

	enum class AgeGroup
	{
		Child,
		Teen,
		Adult,
		Unknown
	} ageGroup{ AgeGroup::Unknown };

	enum class Game
	{
		Minecraft,
		Forza_Horizon_2,
		Unknown
	} game{ Game::Unknown };

	int a = 0;
	int b = 0;
	int x = 0;
	int y = 0;
	int up = 0;
	int down = 0;
	int left = 0;
	int right = 0;
	int menu = 0;
	int view = 0;
	int lThumb = 0;
	int rThumb = 0;
	int lShoulder = 0;
	int rShoulder = 0;
	int lTrigger = 0;
	int rTrigger = 0;
	int movementThumbY = 0;
	int movementThumbYM = 0;
	int movementThumbX = 0;
	int movementThumbXM = 0;

	std::string movementStick = "Left";
	std::string mouseStick = "Right";

	bool logging = true;
};

class WinDurangoConfig
{
public:
	static WinDurangoConfig& Instance();

	[[nodiscard]] WinDurangoConfigData GetData() const;
	void SetData(const WinDurangoConfigData& data);

	WinDurangoConfig(const WinDurangoConfig&) = delete;
	WinDurangoConfig& operator=(const WinDurangoConfig&) = delete;
	WinDurangoConfig(WinDurangoConfig&&) = delete;
	WinDurangoConfig& operator=(WinDurangoConfig&&) = delete;

private:
	WinDurangoConfig();
	~WinDurangoConfig() = default;

	void ProcessConfigFile();

	WinDurangoConfigData _data{};

	std::string _configFilePath{};
};