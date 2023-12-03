#include <Windows.h>

#define MY_BUTTON_LEFT 100
#define MY_BUTTON_RIGHT 200

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg,WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		case WM_CREATE:
		{
			CreateWindow(L "Button", L "Left",
				WS_CHILD | WS_VISIBLE,
				5, 5, 100, 30, hwnd,
				(HMENU) MY_BUTTON_LEFT, 0, 0);
			CreateWindow(L "Button", L "Right",
				WS_CHILD | WS_VISIBLE,
				110, 5, 100, 30, hwnd,
				(HMENU) MY_BUTTON_RIGHT, 0, 0);
		}
		break;
		case WM_COMMAND:
		{
			if (LOWORD(wParam) == MY_BUTTON_LEFT)
			{
				MessageBox(hwnd, L "Left Button!",
					L "You pressed...", MB_OK);
			}
			else if (LOWORD(wParam) == MY_BUTTON_RIGHT)
			{
				MessageBox(hwnd, L "Right Button!",
					L "You pressed...", MB_OK);
			}
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
		MessageBox(0, L "Error Registering Window!",
			L "Error", MB_OK);
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













