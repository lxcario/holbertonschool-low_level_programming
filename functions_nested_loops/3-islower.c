#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Description: This function takes an integer argument, 'c', which represents
 * an ASCII character. It evaluates if the character's ASCII value falls
 * within the standard range for lowercase English letters ('a' through 'z').
 *
 * Return: 1 if 'c' is a lowercase character, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

