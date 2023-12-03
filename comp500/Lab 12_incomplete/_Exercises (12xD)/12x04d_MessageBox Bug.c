#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int result = 0;

	// need to save result.
	result = MessageBox(NULL, L"Are you enjoying the Final Practical Exam", L"COMP500/ENSE501", MB_YESNO);

	if (IDYES == result)
	{
		MessageBox(NULL, L"Great keep going!", L"AI Response", MB_OK);
	}
	// add the else if
	else if (IDNO == result)
	{
		MessageBox(NULL, L"Don't worry, the exam is almost over!", L"AI Response", MB_OK);
	}

	return 0;
}