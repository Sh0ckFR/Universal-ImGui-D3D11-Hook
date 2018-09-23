#pragma once
class InputHook
{
public:
	void Init(HWND hWindow);
	void Remove(HWND hWindow);
};

static LRESULT APIENTRY WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

