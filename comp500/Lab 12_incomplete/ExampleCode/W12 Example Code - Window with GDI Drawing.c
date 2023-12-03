#include <Windows.h>

#define MY_BUTTON_LEFT 100
#define MY_BUTTON_RIGHT 200

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hwnd, &ps);
			HBRUSH blue = CreateSolidBrush(RGB(0, 0, 255));
			HBRUSH green = CreateSolidBrush(RGB(0, 255, 0));
			HBRUSH red = CreateSolidBrush(RGB(255, 0, 0));
			
			HBRUSH old = SelectObject(hdc, blue);
			Rectangle(hdc, 20, 20, 150, 430);
			
			SelectObject(hdc, green);
			Rectangle(hdc, 170, 20, 300, 430);
			
			SelectObject(hdc, red);
			Rectangle(hdc, 320, 20, 460, 430);
			
			SelectObject(hdc, old);
			DeleteObject(blue);
			DeleteObject(green);
			DeleteObject(red);
			EndPaint(hwnd, 0);
		}
		break;
		case WM_CLOSE:
		{
			DestroyWindow(hwnd);
		}
		break;
		case WM_DESTROY:
		{
			PostQuitMessage(0);
		}
		break;
		default:
		{
			return DefWindowProc(hwnd, msg, wParam, lParam);
		}
	}

	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR params, int nCmdShow)
{
	const wchar_t g_szClassName[] = L "LabWeek12";
	MSG message;
	HWND hwnd;
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));
	
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	
	if (!RegisterClassEx(&wc))
	{
		MessageBox(0, L "Error Registering Window!", L "Error", MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		g_szClassName,
		L "COMP500/ENSE501",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		235, 80,
		NULL, NULL, hInstance, NULL);
		
	if (NULL == hwnd)
	{
		MessageBox(0, L "Error Creating Window!", L "Error", MB_OK);
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	while (GetMessage(&message, NULL, 0, 0) > 0)
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	return message.wParam;
}
















