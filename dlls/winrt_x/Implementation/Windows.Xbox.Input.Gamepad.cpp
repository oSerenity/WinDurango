#include "pch.h"
#include "Windows.h"
#include "Windows.Xbox.Input.GamepadReading.h"
#include "Windows.Xbox.Input.Gamepad.h"
#include "Windows.Xbox.Input.Controller.h"
#include "Windows.Xbox.Input.Gamepad.g.cpp"
#include "Windows.Xbox.System.User.h"

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.UI.Input.h>
#include <windowsx.h>
#include <Xinput.h>

#include <array>
#include <atomic>
#include <mutex>

namespace winrt::Windows::Xbox::Input::implementation
{
	namespace
	{
		std::mutex g_gamepadsMutex;
		Foundation::Collections::IVector<IGamepad> g_gamepadsVector{ nullptr };
		std::array<winrt::com_ptr<Gamepad>, XUSER_MAX_COUNT> g_slotPads{};
		winrt::com_ptr<Gamepad> g_stubPad;
		std::atomic<DWORD> g_stubResolvedUserIndex{ static_cast<DWORD>(-1) };
	}
	Gamepad::Gamepad(uint64_t id, bool isStub)
		: m_id(id),
		  m_isStub(isStub),
		  config(WinDurangoConfig::Instance())
	{
		keyboardButtons[0].first = config.GetData().up;
		keyboardButtons[1].first = config.GetData().down;
		keyboardButtons[2].first = config.GetData().left;
		keyboardButtons[3].first = config.GetData().right;
		keyboardButtons[4].first = config.GetData().menu;
		keyboardButtons[5].first = config.GetData().view;
		keyboardButtons[6].first = config.GetData().lThumb;
		keyboardButtons[7].first = config.GetData().rThumb;
		keyboardButtons[8].first = config.GetData().lShoulder;
		keyboardButtons[9].first = config.GetData().rShoulder;
		keyboardButtons[10].first = config.GetData().a;
		keyboardButtons[11].first = config.GetData().b;
		keyboardButtons[12].first = config.GetData().x;
		keyboardButtons[13].first = config.GetData().y;
	}

	Foundation::Collections::IVectorView<IGamepad> Gamepad::Gamepads()
	{
		// Re-scan every call for connect/disconnect, but keep stable implementation objects per
		// XInput user index. Replacing the vector with fresh make<Gamepad>() each call destroyed
		// COM objects while the host could still hold IGamepad pointers -> refcount / atomic UAF.
		XInputEnable(TRUE);

		std::lock_guard const lock(g_gamepadsMutex);

		if (!g_gamepadsVector) {
			g_gamepadsVector = winrt::single_threaded_vector<IGamepad>();
		}

		g_gamepadsVector.Clear();

		LOG_INFO_W(L"Gamepad || Gamepads Queried!\n");

		bool appendedRealPad = false;
		for (DWORD gamepad = 0; gamepad < XUSER_MAX_COUNT; gamepad++)
		{
			XINPUT_CAPABILITIES capabilities{};
			if (XInputGetCapabilities(gamepad, XINPUT_FLAG_GAMEPAD, &capabilities) == ERROR_SUCCESS)
			{
				if (!g_slotPads[gamepad]) {
					g_slotPads[gamepad] = winrt::make_self<Gamepad>(gamepad, false);
				}
				g_gamepadsVector.Append(g_slotPads[gamepad].as<IGamepad>());
				appendedRealPad = true;
			}
		}

		if (appendedRealPad) {
			g_stubResolvedUserIndex.store(static_cast<DWORD>(-1), std::memory_order_relaxed);
		}

		if (g_gamepadsVector.Size() == 0) {
			LOG_INFO_W(L"Gamepad || No XInput pads; appending slot-0 stub for keyboard/mouse fallback\n");
			if (!g_stubPad) {
				g_stubPad = winrt::make_self<Gamepad>(0, true);
			}
			g_gamepadsVector.Append(g_stubPad.as<IGamepad>());
		}

		return g_gamepadsVector.GetView();
	}

	event_token Gamepad::GamepadAdded(Foundation::EventHandler<GamepadAddedEventArgs> const& handler)
	{
		return m_gamepadAdded.add(handler);
	}

	void Gamepad::GamepadAdded(event_token const& token) noexcept
	{
		m_gamepadAdded.remove(token);
	}

	event_token Gamepad::GamepadRemoved(Foundation::EventHandler<GamepadRemovedEventArgs> const& handler)
	{
		LOG_INFO_W(L"Gamepad || Gamepad Removed!\n");

		LOG_NOT_IMPLEMENTED();

		return {};
	}

	void Gamepad::GamepadRemoved(event_token const& token) noexcept
	{
		LOG_INFO_W(L"Gamepad || Gamepad Removed!\n");

		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	uint64_t Gamepad::Id()
	{
		if (!m_loggedId) {
			m_loggedId = true;
			LOG_INFO("Gamepad || Gamepad ID (%llu) Queried!\n", static_cast<unsigned long long>(m_id));
		}

		return m_id;
	}

	hstring Gamepad::Type()
	{
		return L"Windows.Xbox.Input.Gamepad";
	}

	System::User Gamepad::User()
	{
		LOG_INFO_W(L"Gamepad || User Queried!\n");

		auto users = System::implementation::User::Users();
		const uint32_t n = users.Size();
		if (n == 0) {
			throw hresult_illegal_method_call();
		}
		uint32_t idx = static_cast<uint32_t>(std::min<uint64_t>(Id(), static_cast<uint64_t>(UINT32_MAX)));
		if (idx >= n) {
			idx = 0;
		}
		return users.GetAt(idx);
	}

	INavigationReading Gamepad::GetNavigationReading()
	{
		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	RawNavigationReading Gamepad::GetRawNavigationReading()
	{
		auto dummyNavigationReading = RawNavigationReading();

		dummyNavigationReading.Timestamp = GetTickCount64();
		dummyNavigationReading.Buttons |= NavigationButtons::Up;

		return dummyNavigationReading;
	}

	event_token Gamepad::NavigationReadingChanged(Foundation::TypedEventHandler<NavigationController, INavigationReadingChangedEventArgs> const& handler)
	{
		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	void Gamepad::NavigationReadingChanged(event_token const& token) noexcept
	{
		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	void Gamepad::SetVibration(GamepadVibration const& value)
	{
		XINPUT_VIBRATION vibration{};
		vibration.wLeftMotorSpeed = static_cast<WORD>(value.LeftMotorLevel * 65535);
		vibration.wRightMotorSpeed = static_cast<WORD>(value.RightMotorLevel * 65535);
		DWORD slot = static_cast<DWORD>(m_id);
		if (m_isStub) {
			const DWORD resolved = g_stubResolvedUserIndex.load(std::memory_order_relaxed);
			if (resolved < XUSER_MAX_COUNT) {
				slot = resolved;
			}
		}
		if (slot < XUSER_MAX_COUNT) {
			XInputSetState(slot, &vibration);
		}
	}

	IGamepadReading Gamepad::GetCurrentReading()
	{
		return winrt::make<GamepadReading>(GetRawCurrentReading());
	}

	RawGamepadReading Gamepad::GetRawCurrentReading()
	{
		/*
		static bool b = false;

		if (b) {
			IController ng = winrt::Windows::Xbox::Input::implementation::Controller::Controllers().GetAt(0);
			void* abiPtr = winrt::get_abi(ng);
			IControllerAddedEventArgs args(nullptr);
			winrt::Windows::Xbox::Input::implementation::Controller::m_controllerAdded(ng, args);
		}*/

		XINPUT_STATE xiState{};
		reading = {};
		
		reading.Timestamp = GetTickCount64();

		DWORD userIndex = static_cast<DWORD>(m_id);
		DWORD xiResult = XInputGetState(userIndex, &xiState);
		bool xinputOk = (xiResult == ERROR_SUCCESS);

		// Stub pad is created when GetCapabilities saw no devices (often before the first controller
		// is ready). Poll every XInput user index so a pad on slots 1–3 is still visible as slot-0 stub.
		if (!xinputOk && m_isStub) {
			for (DWORD i = 0; i < XUSER_MAX_COUNT; ++i) {
				if (i == userIndex) {
					continue;
				}
				xiResult = XInputGetState(i, &xiState);
				if (xiResult == ERROR_SUCCESS) {
					userIndex = i;
					xinputOk = true;
					break;
				}
			}
		}

		if (xinputOk)
		{
			if (m_isStub) {
				g_stubResolvedUserIndex.store(userIndex, std::memory_order_relaxed);
			}

			if (xiState.Gamepad.wButtons != m_lastLoggedButtonMask)
			{
				m_lastLoggedButtonMask = xiState.Gamepad.wButtons;
				LOG_INFO("Gamepad || Controller %llu - Button mask: 0x%04X\n",
					static_cast<unsigned long long>(userIndex),
					xiState.Gamepad.wButtons);
			}

			for (int i = 0; i < ARRAYSIZE(gamepadButtons); i++)
			{
				if (xiState.Gamepad.wButtons & gamepadButtons[ i ].first)
				{
					reading.Buttons |= gamepadButtons[ i ].second;

					if (gamepadButtons[ i ].first == XINPUT_GAMEPAD_START)
					{
						LOG_INFO_W(L"Gamepad || START BUTTON DETECTED!\n");
					}
				}
			}

			reading.LeftTrigger = xiState.Gamepad.bLeftTrigger / 255.f;
			reading.RightTrigger = xiState.Gamepad.bRightTrigger / 255.f;
			reading.LeftThumbstickX = xiState.Gamepad.sThumbLX / 32768.f;
			reading.LeftThumbstickY = xiState.Gamepad.sThumbLY / 32768.f;
			reading.RightThumbstickX = xiState.Gamepad.sThumbRX / 32768.f;
			reading.RightThumbstickY = xiState.Gamepad.sThumbRY / 32768.f;
		}
		else
		{
			LOG_WARNING("Gamepad || XInputGetState failed for controller %llu with error: %lu\n",
				static_cast<unsigned long long>(userIndex),
				static_cast<unsigned long>(xiResult));
		}

		if (!xinputOk && m_isStub) {
			g_stubResolvedUserIndex.store(static_cast<DWORD>(-1), std::memory_order_relaxed);
		}

		if (!xinputOk)
		{
			float lx = 0.0f;
			float ly = 0.0f;

			for (int i = 0; i < ARRAYSIZE(keyboardButtons); i++)
			{
				if (GetAsyncKeyState(keyboardButtons[i].first) & 0x8000)
					reading.Buttons |= keyboardButtons[i].second;

				if (GetAsyncKeyState(config.GetData().movementThumbY) & 0x8000)
					ly = 1.0f;

				if (GetAsyncKeyState(config.GetData().movementThumbXM) & 0x8000)
					lx = -1.0f;

				if (GetAsyncKeyState(config.GetData().movementThumbYM) & 0x8000)
					ly = -1.0;

				if (GetAsyncKeyState(config.GetData().movementThumbX) & 0x8000)
					lx = 1.0f;
			}

			lx = std::clamp(lx, -1.0f, 1.0f);
			ly = std::clamp(ly, -1.0f, 1.0f);

			if (lx != 0.0f || ly != 0.0f) {
				if (config.GetData().movementStick == "Left") {
					reading.LeftThumbstickX = lx;
					reading.LeftThumbstickY = ly;
				} else if (config.GetData().movementStick == "Right") {
					reading.RightThumbstickX = lx;
					reading.RightThumbstickY = ly;
				}
			}

			if (GetAsyncKeyState(config.GetData().rTrigger) & 0x8000)
				reading.RightTrigger = 1.0f;

			if (GetAsyncKeyState(config.GetData().lTrigger) & 0x8000)
				reading.LeftTrigger = 1.0f;

			POINT pos;
			GetCursorPos(&pos);

			if (firstFrame) {
				prev = pos;
				firstFrame = false;
			}

			const int dx = pos.x - prev.x;
			const int dy = pos.y - prev.y;

			deltaSumX += dx;
			deltaSumY += dy;
			prev = pos;

			const int centerX = GetSystemMetrics(SM_CXSCREEN) / 2;
			const int centerY = GetSystemMetrics(SM_CYSCREEN) / 2;

			SetCursorPos(centerX, centerY);

			prev.x = centerX;
			prev.y = centerY;

			auto sign = [](float v) { return (v > 0) - (v < 0); };

			float x = -std::exp((-1.0f / 5.0f) * std::abs(deltaSumX)) + 1.0f;
			float y = -std::exp((-1.0f / 5.0f) * std::abs(deltaSumY)) + 1.0f;

			x *= sign(deltaSumX);
			y *= -sign(deltaSumY);

			if (x != 0 || y != 0) {
				if (config.GetData().mouseStick == "Right") {
					reading.RightThumbstickX = std::clamp(x, -1.0f, 1.0f);
					reading.RightThumbstickY = std::clamp(y, -1.0f, 1.0f);
				}
				else if (config.GetData().mouseStick == "Left") {
					reading.LeftThumbstickX = std::clamp(x, -1.0f, 1.0f);
					reading.LeftThumbstickY = std::clamp(y, -1.0f, 1.0f);
				}
			}

			deltaSumX = 0.0f;
			deltaSumY = 0.0f;
		}

		return reading;
	}

	event_token Gamepad::ReadingChanged(Foundation::TypedEventHandler<Input::Gamepad, IGamepadReadingChangedEventArgs> const& handler)
	{
		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	void Gamepad::ReadingChanged(event_token const& token) noexcept
	{
		LOG_NOT_IMPLEMENTED();

		throw hresult_not_implemented();
	}

	bool Gamepad::IsTrusted()
	{
		return true;
	}
}