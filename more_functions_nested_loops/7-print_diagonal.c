#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line.
 * For each line 'i' (from 0 to n-1), it prints 'i' spaces
 * followed by a backslash character and a newline.
 * If n is 0 or less, it only prints a newline character.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* Outer loop for each line */
		for (i = 0; i < n; i++)
		{
			/* Inner loop to print spaces before the backslash */
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			/* Print the backslash character */
			_putchar('\\');

			/* Print the newline character */
			_putchar('\n');
		}
	}
}
