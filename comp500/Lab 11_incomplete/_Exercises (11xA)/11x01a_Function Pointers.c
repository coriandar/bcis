/*
//LEARNT
Function pointers
https://www.youtube.com/watch?v=f_uWOWViYc0

Why?
Can return pointers to function, make array of functions.
Can select which function to run .i.e what operation to perform +,-,* etc.

https://stackoverflow.com/questions/8975208/what-is-the-use-of-function-pointers#:~:text=Function%20pointers%20can%20be%20useful,to%20call%20dynamically%20for%20example
"Function pointers can be useful when you want to create callback mechanism, and need to pass address of a function to another function...store an array of functions, to call dynamically"

https://stackoverflow.com/questions/6807376/call-back-routine
"Callback function is a function that is not called explicitly by the programmer. Instead, there is some mechanism that continually waits for events to occur, and it will call selected functions in response to particular events."

"This mechanism is typically used when an operation(function) takes a long time for execution and the caller of the function does not want to wait till the operation is complete, but does wish to be intimated of the outcome of the operation. Typically, Callback functions help implement such an asynchronous mechanism, wherein the caller registers to get inimated about the result of the time consuming processing and continuous other operations while at a later point of time, the caller gets informed of the result."

""I don't call it by myself, but the system (or some others) will call it". That's callback."
*/

#include <stdio.h>

// TODO: 1) Add the typedef here:
typedef void(*p_call)(void);

// Prototypes:
void repeat(int times, p_call func);
void test(void);
void print_hello(void);

// The main function definition:
int main(void)
{
	p_call function_pointer = 0;
	function_pointer = test;

	// TODO: 4) Modify this call to pass in test:
	repeat(10, function_pointer);

	// TODO: 6) Add another call to your void function:
	function_pointer = print_hello;

	repeat(10, function_pointer);

	return 0;
}

// TODO 2) Modify the parameter list of the repeat function to add in the function pointer parameter for the function to be called repeatedly. Also, do not forget to update the function declaration protoype on line 6 to match...
void repeat(int times, p_call func)
{
	for (int k = 0; k < times; k++)
	{
		// TODO: 3) Add the call to the function pointer here:
		func();
	}
}

void test(void)
{
	printf("Test!\n");
}

// TODO: 5) Add your own void function, and prototype:
void print_hello(void)
{
	printf("Hello Function Pointer\n");
}