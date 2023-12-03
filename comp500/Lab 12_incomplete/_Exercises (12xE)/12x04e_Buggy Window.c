#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int result = 0;

	result = MessageBox(0, L"Question?", L"COMP500/ENSE501", MB_YESNO);

	// not assignment
	if (result == IDYES)
	{
		MessageBox(0, L"Yes!", L"Yes!", MB_OK);
	}
	else if (result == IDNO)
	{
		MessageBox(0, L"No!", L"No!", MB_OK);
	}

	return 0;
}