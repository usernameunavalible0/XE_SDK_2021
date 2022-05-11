#include <OWindow.h>
#include <Windows.h>
#include <assert.h>

OWindow::OWindow()
{
	WNDCLASSEX wc = {};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"OGL3DWindow";
	wc.lpfnWndProc = DefWindowProc;

	assert(RegisterClassEx(&wc));
}

OWindow::~OWindow()
{
	
}