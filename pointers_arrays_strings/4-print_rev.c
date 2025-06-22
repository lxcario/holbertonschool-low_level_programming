#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function first calculates the length of the string.
 * Then, it iterates backward from the end of the string to the
 * beginning, printing each character along the way. Finally, it
 * prints a newline character.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/* Move pointer back to the beginning of the string */
	s = s - length;

	/* Iterate from the last character to the first and print */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
