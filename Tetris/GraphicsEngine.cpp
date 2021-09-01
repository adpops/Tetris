#include "GraphicsEngine.h"

GraphicsEngine::GraphicsEngine(HDC hdc, HWND hWnd, int tilesize, int width, int height) {
	this->hdc = hdc;
	this->hWnd = hWnd;
	this->tilesize = tilesize;
	this->width = width;
	this->height = height;

	/*GetClientRect(hWnd, &rect);
	SaveDC(hdc);

	SetMapMode(hdc, MM_ISOTROPIC);
	SetViewportExtEx(hdc, tilesize, tilesize, 0);
	SetWindowExtEx(hdc, 1, -1, 0);
	SetViewportOrgEx(hdc, 0, rect.bottom, 0);

	// Set default colors
	SetTextColor(hdc, RGB(255, 255, 255));
	SetBkColor(hdc, RGB(70, 70, 70));
	SetBkMode(hdc, TRANSPARENT);*/
}

GraphicsEngine::~GraphicsEngine() {

}
