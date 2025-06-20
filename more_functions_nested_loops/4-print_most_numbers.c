#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 *
 * Description: This function iterates from '0' to '9' and prints each
 * character, unless it is '2' or '4'. It finishes by printing a
 * newline character. The _putchar function is used for all output.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
