#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: if the current character is the null terminator */
	if (*s == '\0')
	{
		return; /* Stop the recursion */
	}

	/* Recursive step: call the function with the next character */
	_print_rev_recursion(s + 1);

	/* Action after the recursive call returns: print the current character */
	/* This ensures characters are printed in reverse order as the call stack unwinds */
	_putchar(*s);
}
