#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLin, int nCmdShow)
{
	int result = MessageBox(NULL, L "Question?", L "Get user input...", MB_YESNO);
		
	if (IDYES == result)
	{
		MessageBox(NULL, L "Yes clicked!", L "Result...", MB_OK);
	}
	else if (IDNO == result)
	{
		MessageBox(NULL, L "No clicked!", L "Result...", MB_OK);
	}

	return 0;
}