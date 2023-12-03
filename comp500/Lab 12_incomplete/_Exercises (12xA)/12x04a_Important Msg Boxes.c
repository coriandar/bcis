/*
// LEARNT
	Create message boxes, with selection.
	Get result on what was clicked.
	Various options.
	Setup as desktop app, will not run on a console app.

// ERRORS
	C4255
	C4100

// DEBUG
	Disabled those warnings, as it would come even when using simplest message box.
*/

#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// first L = message, secon L = title
	int result = MessageBox(NULL, L"Please confirm it is okay to proceed...", L"Question 5", MB_OKCANCEL);
	//int result = MessageBox(NULL, L"Please confimr it is okay to proceed...", L"Question 5", MB_ABORTRETRYIGNORE);

	if (IDOK == result)
	{
		MessageBox(NULL, L"Excellent, the program will proceed!", L"Question 5", MB_OK);
	}
	else if (IDCANCEL == result)
	{
		MessageBox(NULL, L"The user does not want to continue", L"Question 5", MB_OK);
	}
	
	return 0;
}