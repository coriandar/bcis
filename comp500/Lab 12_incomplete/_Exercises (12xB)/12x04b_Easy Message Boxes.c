#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int result = MessageBox(NULL, L"Are you ready?...", L"COMP500 Final", MB_YESNOCANCEL
	);

	if (IDYES == result)
	{
		MessageBox(NULL, L"Excellent!", L"COMP500 Final", MB_OK);
	}
	else if (IDNO == result)
	{
		MessageBox(NULL, L"More study required!", L"COMP500 Final", MB_OK);
	}

	return 0;
}