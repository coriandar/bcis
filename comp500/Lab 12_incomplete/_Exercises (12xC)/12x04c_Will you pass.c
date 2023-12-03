#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int result = MessageBox(NULL, L"Will you pass COMP500\?", L"Question 5", MB_YESNO
	);

	if (IDYES == result)
	{
		MessageBox(NULL, L"Excellent! Have fun in Programming 2!", L"Question 5", MB_OK);
	}
	else if (IDNO == result)
	{
		MessageBox(NULL, L"Oh, no! Try you best to complete the Final Practical Exam!", L"Question 5", MB_OK);
	}

	return 0;
}