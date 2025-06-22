#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints a line of underscores.
 * If n is greater than 0, it prints 'n' underscores.
 * The line always ends with a newline character.
 * If n is 0 or less, it only prints a newline.
 */
void print_line(int n)
{
	int i;

	/* Loop to print the underscore character 'n' times */
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	/* Always print a newline character at the end */
	_putchar('\n');
}
