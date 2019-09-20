#include <Windows.h>

#include "Antidasm.h"

void foo()
{
	MessageBoxA(0, "Hello world!", "", 0);
}

int main()
{
	ANTIDASM(foo);
	return 0;
}