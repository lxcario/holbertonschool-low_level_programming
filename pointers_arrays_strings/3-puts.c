#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Description: This function iterates through the input string character
 * by character and prints each one using _putchar until the null
 * terminator is reached. After printing the entire string, it
 * prints a newline character.
 */
void _puts(char *str)
{
	/* Loop through the string until the null terminator is found */
	while (*str != '\0')
	{
		_putchar(*str); /* Print the current character */
		str++;          /* Move to the next character */
	}

	/* Print a newline character at the end */
	_putchar('\n');
}
