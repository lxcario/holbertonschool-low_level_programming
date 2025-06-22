#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be processed.
 *
 * Description: This function calculates the length of the string.
 * It then determines the starting point for the second half. For an
 * even number of characters, it starts at the midpoint. For an odd
 * number, it starts at the character after the midpoint.
 * Finally, it prints the second half of the string followed by a newline.
 */
void puts_half(char *str)
{
	int length = 0;
	int start_index;
	int i;

	/* Calculate the full length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index for the second half */
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}

	/* Print the characters from the start index to the end */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

