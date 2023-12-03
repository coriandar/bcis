#include <stdio.h>
#include <Windows.h>

void print_directory(char *path);
int main(void)
{
	char *directory_to_list = "C:\\*";
	print_directory(directory_to_list);
	return 0;
}

void print_directory(char *path)
{
	WIN32_FIND_DATA find_file_data;
	HANDLE h_find;
	h_find = FindFirstFile(path, &find_file_data);
	do {
		if (find_file_data.dwFileAttributes &FILE_ATTRIBUTE_DIRECTORY)
		{
			printf("Directory: %s\n", find_file_data.cFileName);
		}
		else
		{
			printf("File: %s\n", find_file_data.cFileName);
		}
	}

	while (FindNextFile(h_find, &find_file_data) != 0);
	
	FindClose(h_find);
}