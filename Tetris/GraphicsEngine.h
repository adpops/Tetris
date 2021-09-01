#pragma once
#include <windows.h>

class GraphicsEngine
{
public:
	GraphicsEngine(HDC hdc, HWND hWnd, int tilesize, int width, int height);
	~GraphicsEngine();

private:
	int tilesize;
	int width;
	int height;
	HDC hdc;     
	HWND hWnd;   
	RECT rect;   
};

