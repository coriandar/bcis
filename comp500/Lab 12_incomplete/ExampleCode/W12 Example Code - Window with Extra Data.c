#include <Windows.h>

// My new structure type that stores important data for my application:
struct My_App_Data
{
	int wm_left_mouse_button_count;
	int wm_right_mouse_button_count;
};


LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		// Count left mouse clicks:
		case WM_LBUTTONDOWN:
		{
			// Here I want to access the my_app_data struct: The
			// address of my app data structure is located 8 bytes in:
			LONG extra_data = GetWindowLong(hwnd, 8);
			
			// Cast the long retreived to a struct My_App_Data pointer:
			struct My_App_Data *p_my_app_data = (struct My_App_Data *) extra_data;
			
			// Access the data I need:
			p_my_app_data->wm_left_mouse_button_count++;
		}
		break;
		// Count right mouse clicks:
		case WM_RBUTTONDOWN:
		{
			// Here I want to access the my_app_data struct:
			// The address of my app data structure is located
			// 8 bytes in:
			LONG extra_data = GetWindowLong(hwnd, 8);
			
			// Cast the long retreived to a struct My_App_Data pointer:
			struct My_App_Data *p_my_app_data = (struct My_App_Data *) extra_data;
			
			// Access the data I need:
			p_my_app_data->wm_right_mouse_button_count++;
		}
		break;
		case WM_KEYDOWN:
		{
			// When the user presses the I key... update the title bar
			// text with the int value stored in the main's stack:
			if (LOWORD(wParam) == 'I')
			{
				// Retrieve the address of the int, its stored at
				// byte 0:
				LONG extra_data = GetWindowLong(hwnd, 0);
				
				// Convert the LONG into the int* that it really is...
				int *p_main_stack_int = (int*) extra_data;

				// Convert the int into text:
				wchar_t new_message[32];
				wsprintf(new_message, L "int contains %d", *p_main_stack_int);
					
				// Set the title bar text to show the int:
				SetWindowText(hwnd, new_message);
				
				// Finally, modify the int...
				(*p_main_stack_int) --;
			}

			// When the user presses the T key:
			if (LOWORD(wParam) == 'T')
			{
				// Get the address of the heap allocated C-String,
				// it is located at byte offset 4:
				LONG extra_data = GetWindowLong(hwnd, 4);
				
				// Convert the LONG returned into the wchar_t pointer
				// that it really is:
				wchar_t *malloced_text = (wchar_t*) extra_data;
				
				// Show the heap text using a message box:
				MessageBox(hwnd, malloced_text, L "Retrieved this from the heap!", MB_OK);
			}

			// When the user presses the U key:
			if (LOWORD(wParam) == 'U')
			{
				// Get the address of the main stack allocated my app
				// data structure, it is located at byte offset 8:
				LONG extra_data = GetWindowLong(hwnd, 8);
				
				// Convert the LONG into the struct
				// My_App_Data* that it really is:
				struct My_App_Data *p_my_app_data = (struct My_App_Data *) extra_data;
				
				// Access the structure, retrieve the mouse click counts,
				// and convert them to text:
				wchar_t new_message[128];
				wsprintf(new_message,
					L "Left Clicks: %d, Right Clicks: %d",
					p_my_app_data->wm_left_mouse_button_count,
					p_my_app_data->wm_right_mouse_button_count);
					
				// Set the title bar text to show the current mouse
				// click counts:
				SetWindowText(hwnd, new_message);
			}
		}
		break;
		case WM_CLOSE:
		{
			DestroyWindow(hwnd);
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
	// Allocate a single int on the stack:
	int a_simple_stack_int = 47;
	
	// Allocate a 200 byte array on the heap,
	// for storing a wide cstring:
	wchar_t *heap_cstring = malloc(sizeof(wchar_t) *100);
	wsprintf(heap_cstring, L "Hello World!!!");
	
	// Allocate a struct full of useful data for my app to use:
	struct My_App_Data my_app_data;
	my_app_data.wm_left_mouse_button_count = 0;
	my_app_data.wm_right_mouse_button_count = 0;
	
	const wchar_t g_szClassName[] = L "exampleWindowClass";
	
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));
	
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = 0;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.lpszMenuName = NULL;
	wc.lpszClassName = g_szClassName;
	wc.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	
	int num_extra_pieces_of_data = 3;
	// I'm going to store pointers to each piece of data:
	int size_of_each_extra_peice = sizeof(void*);
	
	// This field allocates more space in the window class to
	// store extra data:
	
	wc.cbWndExtra = num_extra_pieces_of_data * size_of_each_extra_peice;
	
	if (!RegisterClassEx(&wc))
	{
		MessageBox(0, L "Error Registering Window!", L "Error", MB_OK);
		return 0;
	}

	HWND hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,
		g_szClassName,
		L "COMP500/ENSE501",
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		640, 480,
		NULL, NULL, hInstance, NULL);
		
	if (NULL == hwnd)
	{
		MessageBox(0, L "Error Creating Window!", L "Error", MB_OK);
		return 0;
	}

	// After creation, I'm going to store the address of my extra data
	// in my window's extra memory: The second parameter is the offset in
	// the extra memory area where the LONG is stored... The third
	// parameter is a LONG, I'm storing the addresses of different sorts
	// of data that I want to share across my application:
	
	SetWindowLong(hwnd, 0, (LONG) &a_simple_stack_int);
	SetWindowLong(hwnd, 4, (LONG) heap_cstring);
	SetWindowLong(hwnd, 8, (LONG) &my_app_data);
	
	// When I retrieve the LONG values, I'll need to cast to the correct
	// data type, based upon which byte offset I retrieve from.
	
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	
	MSG message;
	
	while (GetMessage(&message, NULL, 0, 0) > 0)
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	// Deallocate the heap data:
	free(heap_cstring);
	heap_cstring = 0;
	
	return message.wParam;
}