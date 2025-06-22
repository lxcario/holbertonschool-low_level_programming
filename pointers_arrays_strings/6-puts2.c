#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be processed.
 *
 * Description: This function iterates through the input string and prints
 * characters at even indices (0, 2, 4, ...). After printing the
 * characters, it prints a newline.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		/* Check if the current index is even */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	/* Print a newline character at the end */
	_putchar('\n');
}
