#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a character (the first character of the string).
 *
 * Description: This function iterates through a string using a pointer,
 * counting the number of characters until it encounters the null
 * terminator ('\0').
 *
 * Return: The length of the string (an integer).
 */
int _strlen(char *s)
{
	int length = 0;

	/* Loop until the null terminator is found */
	while (*s != '\0')
	{
		length++; /* Increment the length counter */
		s++;      /* Move the pointer to the next character */
	}

	return (length);
}
