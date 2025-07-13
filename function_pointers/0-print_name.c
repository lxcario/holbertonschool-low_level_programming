#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: Pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
